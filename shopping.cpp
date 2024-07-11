#include "shopping.h"
#include "ui_shopping.h"

Shopping::Shopping(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Shopping)
{
    ui->setupUi(this);
}

Shopping::~Shopping()
{
    delete ui;
}
