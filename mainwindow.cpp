#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->_ps->setEchoMode(QLineEdit::Password);
    this->setFixedSize(862,600);
    Sign_up *sign_up= new Sign_up();
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_3,SIGNAL(clicked()),sign_up,SLOT(show()));
    Menu *menu= new Menu();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton,SIGNAL(clicked()),menu,SLOT(show()));
    Dialog *dialog= new Dialog;
    connect(ui->pushButton_2,SIGNAL(clicked()),dialog,SLOT(show()));
    QSqlDatabase db;
    db=QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("d:\\user.db");
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

void MainWindow::on_pushButton_clicked()
{
    QString _username, _password;
    _username = ui->_us->text();
    _password = ui->_ps->text();

    // Check if the username and password exist in the database
    if (isValidUser(_username, _password))
    {
        // Login successful, do something here (e.g., open the main application window)
        QMessageBox::information(this, "Login Successful", "Welcome, " + _username + "!");
    }
    else
    {
        // Login failed, display an error message
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


