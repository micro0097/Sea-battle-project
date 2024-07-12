#ifndef SHOPPING_H
#define SHOPPING_H

#include <QWidget>
#include "map.h"
namespace Ui {
class Shopping;
}

class Shopping :public QWidget
{
    Q_OBJECT

public:
    explicit Shopping(QWidget *parent = nullptr);
    ~Shopping();

private:
    Ui::Shopping *ui;
};

#endif // SHOPPING_H
