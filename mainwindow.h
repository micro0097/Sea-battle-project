#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "sign_up.h"
#include "menu.h"
#include "dialog.h"
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
    ~MainWindow();
private:
    Sign_up *sign_up;
    Menu *menu;
    Dialog *dialog;
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
