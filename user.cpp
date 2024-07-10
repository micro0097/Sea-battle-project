#include "user.h"

user::user(QString _username,QString _firstname, QString _lastname, QString _password,QString _email) {
    this->username=_username;
    this->firstname=_firstname;
    this->lastname=_lastname;
    this->password=_password;
    this->email=_email;
}
void user::setUsername(QString _username){
    this->username=_username;
}
void user::setFirstname(QString _firstname){
    this->firstname=_firstname;
}
void user::setLastname(QString _lastname){
    this->lastname=_lastname;
}
void user::setPassword(QString _password){
    this->password=_password;
}
void user::setEmail(QString _email){
    this->email=_email;
}

QString user::getUsername(){
    return username;
}
QString user::getFirstname(){
    return firstname;
}
QString user::getLastname(){
    return lastname;
}
QString user::getPassword(){
    return password;
}
QString user::getEmail(){
    return email;
}
