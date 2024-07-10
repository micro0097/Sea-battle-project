#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "dialog.h"
#include "sign.h"
#include "menu.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    bool isValidUser(const QString& username, const QString& password);
    ~MainWindow();

private slots:
    void on_pushButton_4_clicked();

private:
    Sign *sign_up;
    Menu *menu;
    Dialog *dialog;
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
