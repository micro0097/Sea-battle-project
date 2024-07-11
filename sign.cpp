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

// void Sign::on_pushButton_clicked()
// {
//     user.setFirstname(ui->lineEdit_3->text());
//     user.setLastname( ui->lineEdit->text());
//     user.setUsername( ui->lineEdit_4->text());
//     user.setPassword( ui->lineEdit_5->text());
//     user.setEmail(ui->lineEdit_6->text());

//     QSqlQuery checkQuery;
//     checkQuery.prepare("SELECT username FROM users WHERE username = :username");
//     checkQuery.bindValue(":username", user.getUsername());
//     if (checkQuery.exec() && checkQuery.next()) {
//         QMessageBox::critical(this, "Error", "Username already exists. Please choose a different username.");
//         return;
//     }
//     if(user.getPassword()!="" && user.getUsername()!="" && user.getEmail()!=""){
//         QSqlQuery insertQuery;
//         insertQuery.prepare("INSERT INTO users (username, firstname, lastname, email, password, score, win, lose, drops) "
//                             "VALUES (:username, :firstname, :lastname, :email, :password, 0, 0, 0, 0)");
//         insertQuery.bindValue(":username", user.getUsername());
//         insertQuery.bindValue(":firstname", user.getFirstname());
//         insertQuery.bindValue(":lastname", user.getLastname());
//         insertQuery.bindValue(":email", user.getEmail());
//         insertQuery.bindValue(":password", user.getPassword());

//         if (!insertQuery.exec()) {
//             qDebug() << "Error inserting user:" << insertQuery.lastError().text();
//         } else {
//             qDebug() << "User inserted successfully";
//         }
//         menu= new Menu();
//         this->close();
//         menu->show();
//     }
//     else{
//         QMessageBox::critical(this, "Error", "Username is wrong. Please choose a different username.");
//     }

// }

