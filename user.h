#ifndef USER_H
#define USER_H
#include <QString>

class user
{
    QString username,firstname,lastname,password,email;

public:

    user(QString _username,QString _firstname, QString _lastname, QString _password,QString _email);
    void setUsername(QString);
    void setFirstname(QString);
    void setLastname(QString);
    void setPassword(QString);
    void setEmail(QString);

    QString getUsername();
    QString getFirstname();
    QString getLastname();
    QString getPassword();
    QString getEmail();
};
#endif // USER_H
