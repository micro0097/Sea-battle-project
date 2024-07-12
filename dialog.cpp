#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(411,300);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    QString _us, _em;
    _us = ui->lineEdit->text();
    _em = ui->lineEdit_2->text();

    QSqlQuery query;
    query.prepare("SELECT password FROM users WHERE username = :username AND email = :email");
    query.bindValue(":username", _us);
    query.bindValue(":email", _em);

    if (query.exec()) {
        if (query.next()) {
            QString password = query.value(0).toString();
            QMessageBox::information(this, "Password", "Your password is: " + password);
        } else {
            QMessageBox::warning(this, "Error", "Username or email not found in the database.");
        }
    } else {
        QMessageBox::critical(this, "Error", "Error executing SQL query: " + query.lastError().text());
    }
}


