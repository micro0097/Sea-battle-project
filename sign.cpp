#include "sign.h"
#include "ui_sign.h"

Sign::Sign(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sign)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
}

Sign::~Sign()
{
    delete ui;
}

void Sign::on_pushButton_clicked()
{
    QString _username, _firstname, _lastname, _password, _email;
    _firstname = ui->lineEdit_3->text();
    _lastname = ui->lineEdit->text();
    _username = ui->lineEdit_4->text();
    _password = ui->lineEdit_5->text();
    _email = ui->lineEdit_6->text();

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

