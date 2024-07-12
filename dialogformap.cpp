#include "dialogformap.h"
#include "ui_dialogformap.h"

Dialogformap::Dialogformap(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogformap)
{
    ui->setupUi(this);
    this->setFixedSize(457,264);

}

Dialogformap::~Dialogformap()
{
    delete ui;
}

void Dialogformap::on_buttonBox_2_rejected()
{
    this->close();
}
