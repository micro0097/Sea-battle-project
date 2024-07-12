#include "shopping.h"
#include "ui_shopping.h"

Shopping::Shopping(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Shopping)
{
    ui->setupUi(this);
    this->setFixedSize(1133,432);
    // ui->pushButton_2->setGeometry(Map);
}

Shopping::~Shopping()
{
    delete ui;
}
