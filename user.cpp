#include "user.h"

user::user() {
}
void user::setUsername(QString _username){
    if(_username.indexOf("..")==-1 && _username.indexOf("__")==-1 && _username.indexOf("_.")==-1 && _username.indexOf("._")==-1 && _username[0].isLetter() && _username[_username.length()-1]!='.' && username[_username.length()-1]!='_'){
       this->username=_username;
    }
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
