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

void Dialogformap::on_buttonBox_accepted()
{
    emit setcoordinate(ui->spinBox->value(),ui->spinBox_2->value());
}
