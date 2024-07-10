#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsPixmapItem>
namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

private:
    Ui::Map *ui;
    // void keyPressEvent(QKeyEvent *q);
    QGraphicsPixmapItem *bbig;
    // QGraphicsPixmapItem *bmid;
    // QGraphicsPixmapItem *bsm;
};

#endif // MAP_H
