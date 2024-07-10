#include "sign_up.h"
#include "ui_sign_up.h"
#include <QString>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
Sign_up::Sign_up(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sign_up)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);


}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::on_pushButton_clicked()
{
    QString _username, _firstname, _lastname, _password, _email;
    _firstname = ui->_fn->text();
    _lastname = ui->_ln->text();
    _username = ui->_un->text();
    _password = ui->_ps->text();
    _email = ui->_em->text();

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT username FROM users WHERE username = :username");
    checkQuery.bindValue(":username", _username);
    if (checkQuery.exec() && checkQuery.next()) {
        QMessageBox::critical(this, "Error", "Username already exists. Please choose a different username.");
        return;
    }

    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO users (username, firstname, lastname, email, password, score, win, lose, drops) "
                        "VALUES (:username, :firstname, :lastname, :email, :password, 0, 0, 0, 0)");
    insertQuery.bindValue(":username", _username);
    insertQuery.bindValue(":firstname", _firstname);
    insertQuery.bindValue(":lastname", _lastname);
    insertQuery.bindValue(":email", _email);
    insertQuery.bindValue(":password", _password);

    if (!insertQuery.exec()) {
        qDebug() << "Error inserting user:" << insertQuery.lastError().text();
    } else {
        qDebug() << "User inserted successfully";
    }
}



