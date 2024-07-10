#include "map.h"
#include "ui_map.h"
#define UPB "E:\bigup.png"
// #define DOWNB "E:\bigup.png"
// #define Upm ":/new/prefix1/Screenshot 2024-07-10 185726.png"
// #define Downm ":/new/prefix1/Screenshot 2024-07-10 185726.png"
// #define Ups ":/new/prefix1/Screenshot 2024-07-10 185751.png"
// #define Downs ":/new/prefix1/Screenshot 2024-07-10 185751.png"
// #define Rightb "C:/Users/TS/OneDrive/Desktop/Sea-battle-project-menuedits/20240710_191223.jpg"
// #define Leftb "C:/Users/TS/OneDrive/Desktop/Sea-battle-project-menuedits/20240710_191223.jpg"
// #define Rightm ":/new/prefix2/20240710_191452.jpg"
// #define Leftm ":/new/prefix2/20240710_191452.jpg"
// #define Rights ":/new/prefix2/20240710_191606.jpg"
// #define Lefts ":/new/prefix2/20240710_191606.jpg"

Map::Map(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Map)
{
    ui->setupUi(this);
    this->setFixedSize(1100,577);
    ui->graphicsView->setFixedSize(1100,571);
    QGraphicsScene *s= new QGraphicsScene(this);

    bbig= new QGraphicsPixmapItem(QPixmap("C:/Users/TS/OneDrive/Desktop/Sea-battle-project-menuedits/bigup.png"));
    // bmid= new QGraphicsPixmapItem(QPixmap(Upm));
    // bsm= new QGraphicsPixmapItem(QPixmap(Ups));
    s->addItem(bbig);
    // s->addItem(bmid);
    // s->addItem(bsm);
    ui->graphicsView->setScene(s);
}

Map::~Map()
{
    delete ui;
}

// void Map::keyPressEvent(QKeyEvent *q)
// {
//     if(q->key()==Qt::Key_Up){
//         bbig->setPixmap(QPixmap(UPB));
//         bbig->moveBy(0,-5);
//     }
//     // if(q->key()==Qt::Key_Down){
//     //     bbig->setPixmap(QPixmap(DOWNB));
//     //     bbig->moveBy(0,5);
//     // }
//     // if(q->key()==Qt::Key_Left){
//     //     bbig->setPixmap(QPixmap(Leftb));
//     //     bbig->moveBy(-5,0);
//     // }
//     // if(q->key()==Qt::Key_Right){
//     //     bbig->setPixmap(QPixmap(Rightb));
//     //     bbig->moveBy(5,0);
//     // }
// }
