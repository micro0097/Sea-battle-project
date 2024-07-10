#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setFixedSize(1281,571);
    ui->widget->setFixedSize(1281,571);
    // ui->label_3->setText("H");
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{
    Map *map= new Map();
    this->close();
    map->show();
}


void Menu::on_pushButton_2_clicked()
{
    Map *map= new Map();
    this->close();
    map->show();
}


void Menu::on_pushButton_3_clicked()
{
    Map *map= new Map();
    this->close();
    map->show();
}
