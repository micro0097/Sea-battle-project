#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDir>
#include <QCoreApplication>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    this->setFixedSize(881,600);
    Sign *sign_up= new Sign();
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_5,SIGNAL(clicked()),sign_up,SLOT(show()));
    Menu *menu= new Menu();
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_4,SIGNAL(clicked()),menu,SLOT(show()));
    Dialog *dialog= new Dialog;
    connect(ui->pushButton_6,SIGNAL(clicked()),dialog,SLOT(show()));
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = QDir(QCoreApplication::applicationDirPath()).filePath("user.db");
    db.setDatabaseName(databasePath);
    db.open();
    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS users ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "username TEXT, "
                    "firstname TEXT, "
                    "lastname TEXT, "
                    "email TEXT, "
                    "password TEXT, "
                    "score INTEGER, "
                    "win INTEGER, "
                    "lose INTEGER, "
                    "drops INTEGER)")) {
        qDebug() << "Error creating table:" << query.lastError().text();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    QString _username, _password;
    _username = ui->lineEdit_4->text();
    _password = ui->lineEdit_3->text();

    if (isValidUser(_username, _password))
    {
        QMessageBox::information(this, "Login Successful", "Welcome, " + _username + "!");
    }
    else
    {
        QMessageBox::critical(this, "Login Error", "Invalid username or password. Please try again.");
    }
}

bool MainWindow::isValidUser(const QString& username, const QString& password)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    return count > 0;
}
