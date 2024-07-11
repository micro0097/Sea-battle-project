#ifndef SIGN_H
#define SIGN_H

#include <QMainWindow>
#include <QString>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>
#include "menu.h"
#include "user.h"
namespace Ui {
class Sign;
}

class Sign : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sign(QWidget *parent = nullptr);
    ~Sign();

private slots:
    void on_pushButton_clicked();
private:
    Menu *menu;
    user user;
private:
    Ui::Sign *ui;
};

#endif // SIGN_H
