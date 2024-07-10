#include "sign_up.h"
#include "ui_sign_up.h"

Sign_up::Sign_up(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sign_up)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
}

Sign_up::~Sign_up()
{
    delete ui;
}
