#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    ui->centralwidget->setFixedSize(5,5);
}

login::~login()
{
    delete ui;
}

