#ifndef SIGN_H
#define SIGN_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlError>
#include <QMessageBox>
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
    Ui::Sign *ui;
};

#endif // SIGN_H
