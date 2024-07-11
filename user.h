#ifndef USER_H
#define USER_H
#include <QString>

class user
{
    QString username,firstname,lastname,password,email;

public:

    user();
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
