#include "map.h"
#include "ui_map.h"
// #define UPB "E:\bigup.png"
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
    this->setFixedSize(1133,432);
}

Map::~Map()
{
    delete ui;
}

void Map::coordinateB(int x, int y)
{
    if(x<=7){
        if(x%2==0){
            x=(x%2)*70;
        }
        else{
            x=40+((x%2)*70);
        }
        if(y%2==0){
            y=(y%2)*70;
        }
        else{
            y=30+((y%2)*70);
        }
        ui->pushButton->move(x,y);
    }
}

void Map::on_pushButton_clicked()
{
    dialogformap= new Dialogformap(this);
    dialogformap->show();
    connect(dialogformap,SIGNAL(setcoordinate(int,int)),this,SLOT(coordinateB(int,int)));
}

