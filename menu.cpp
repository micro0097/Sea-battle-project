#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setFixedSize(1281,571);
    ui->widget->setFixedSize(1281,571);
    ui->label_3->setText("H");
}

Menu::~Menu()
{
    delete ui;
}
