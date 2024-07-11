#include "user.h"

user::user() {
}
void user::setUsername(QString _username){
    if(_username.indexOf("..")==-1 && _username.indexOf("__")==-1 && _username.indexOf("_.")==-1 && _username.indexOf("._")==-1 && _username[0].isLetter() && _username[_username.length()-1]!='.' && username[_username.length()-1]!='_'){
       this->username=_username;
    }
    else{
        this->username="";
    }
}
void user::setFirstname(QString _firstname){
    this->firstname=_firstname;
}
void user::setLastname(QString _lastname){
    this->lastname=_lastname;
}
void user::setPassword(QString _password){
    int len=_password.length();
    int counter=1;
    QChar previous=' ';
    bool repeat=true;
    bool lower= false,upper= false,digit= false,specialchar= false;
    for(int i=0;i<len;i++){
        if(_password[i]==previous){
            counter++;
            if(counter>3){
                repeat=false;
                break;
            }
        }
        else{
            previous=_password[i];
            counter=1;
        }
        if(_password[i]=='!' || _password[i]=='@' || _password[i]=='#' || _password[i]=='$' || _password[i]=='%' || _password[i]=='^' || _password[i]=='&' || _password[i]=='*' || _password[i]=='(' || _password[i]==')' || _password[i]=='-' || _password[i]=='+' || _password[i]=='='){
            specialchar= true;
        }
        else if(_password[i].isLower()){
            lower= true;
        }
        else if(_password[i].isUpper()){
            upper= true;
        }
        else if(_password[i].isDigit()){
            digit= true;
        }
    }
    if(len>=6 && len<=20 && repeat && lower && upper && digit && specialchar){
        this->password=_password;
    }
    else{
        this->password="";
    }
}
void user::setEmail(QString _email){
    if(_email.indexOf("@")!=-1 && _email.indexOf(".")!=-1){
        this->email=_email;
    }
    else{
        this->email="";
    }
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
