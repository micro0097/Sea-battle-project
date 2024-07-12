
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
    user.setFirstname(ui->lineEdit_3->text());
    user.setLastname( ui->lineEdit->text());
    user.setUsername( ui->lineEdit_4->text());
    user.setPassword( ui->lineEdit_5->text());
    user.setEmail(ui->lineEdit_6->text());

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT username FROM users WHERE username = :username");
    checkQuery.bindValue(":username", user.getUsername());
    if (checkQuery.exec() && checkQuery.next()) {
        QMessageBox::critical(this, "Error", "Username already exists. Please choose a different username.");
        return;
    }
    if(user.getPassword()!="" && user.getUsername()!="" && user.getEmail()!=""){
        QString us,fs,ls,em,ps;
        us=user.getUsername();
        fs=user.getFirstname();
        ls=user.getLastname();
        ps=user.getPassword();
        ps = hashWithSHA256(ps);
        em=user.getEmail();
        QSqlQuery insertQuery;
        insertQuery.prepare("INSERT INTO users (username, firstname, lastname, email, password, score, win, lose, drops) "
                            "VALUES (:username, :firstname, :lastname, :email, :password, 0, 0, 0, 0)");
        insertQuery.bindValue(":username",us );
        insertQuery.bindValue(":firstname", fs);
        insertQuery.bindValue(":lastname", ls);
        insertQuery.bindValue(":email", em);
        insertQuery.bindValue(":password", ps);

        if (!insertQuery.exec()) {
            qDebug() << "Error inserting user:" << insertQuery.lastError().text();
        } else {
            qDebug() << "User inserted successfully";
        }
        menu= new Menu();
        this->close();
        menu->show();
    }
    else{
        QMessageBox::critical(this, "Error", "Username or Password or E-mail is wrong. Please choose a different username.");
    }

}

QString Sign::hashWithSHA256(const QString &input)
{
    QByteArray data = input.toUtf8();
    QByteArray hash = QCryptographicHash::hash(data, QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
