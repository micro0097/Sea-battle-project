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
static int counter=0;
Map::Map(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Map) { ui->setupUi(this); this->setFixedSize(1133,432);

}

Map::~Map() { delete ui;counter=0; }
/*
void Map::coordinateB(int x, int y) { if(x<=7){ if(x%2==0){ x=(x%2)*70; } else{ x=40+((x%2)*70); } if(y%2==0){ y=(y%2)*70; } else{ y=30+((y%2)*70); } ui->pushButton->move(x,y); } }*/

// void Map::on_pushButton_clicked() {
//     dialogformap= new Dialogformap(this);
//     connect(dialogformap,SIGNAL(setcoordinate(int,int)),this,SLOT(coordinateB(int,int)));
//     dialogformap->show();
// }


void Map::on_pushButton_6_clicked()
{
    addship(ui->pushButton_6);
}


void Map::on_pushButton_61_clicked()
{
    addship(ui->pushButton_61);
}


void Map::on_pushButton_62_clicked()
{
    addship(ui->pushButton_62);
}


void Map::on_pushButton_60_clicked()
{
    addship(ui->pushButton_60);
}


void Map::on_pushButton_58_clicked()
{
    addship(ui->pushButton_58);
}


void Map::on_pushButton_93_clicked()
{
    addship(ui->pushButton_93);
}


void Map::on_pushButton_94_clicked()
{
    addship(ui->pushButton_94);
}


void Map::on_pushButton_92_clicked()
{
    if(counter>1)
        addship(ui->pushButton_92);
}


void Map::on_pushButton_59_clicked()
{
    if(counter>2)
    addship(ui->pushButton_59);
}


void Map::on_pushButton_66_clicked()
{
    if(counter>5)
    addship(ui->pushButton_66);
}


void Map::on_pushButton_8_clicked()
{
    addship(ui->pushButton_8);
}


void Map::on_pushButton_9_clicked()
{
    addship(ui->pushButton_9);
}


void Map::on_pushButton_63_clicked()
{
    addship(ui->pushButton_63);
}


void Map::on_pushButton_34_clicked()
{
    addship(ui->pushButton_34);
}


void Map::on_pushButton_65_clicked()
{
    addship(ui->pushButton_65);

}

void Map::addship(QPushButton *t)
{
    counter++;
    if(counter==1){
        ui->big->setGeometry(t->x(),t->y(),ui->big->width(),ui->big->height());
    }
    else if(counter==2){
        ui->medium1->setGeometry(t->x(),t->y(),ui->medium1->width(),ui->medium1->height());
    }
    else if(counter==3){
        ui->medium2->setGeometry(t->x(),t->y(),ui->medium2->width(),ui->medium2->height());
    }
    else if(counter==4){
        ui->small1->setGeometry(t->x(),t->y(),ui->small1->width(),ui->small1->height());
    }
    else if(counter==5){
        ui->small2->setGeometry(t->x(),t->y(),ui->small2->width(),ui->small2->height());
    }
    else if(counter==6){
        ui->small3->setGeometry(t->x(),t->y(),ui->small3->width(),ui->small3->height());
    }
    else if(counter==7){
        ui->vsmal1->setGeometry(t->x(),t->y(),ui->vsmal1->width(),ui->vsmal1->height());
    }
    else if(counter==8){
        ui->vsmal2->setGeometry(t->x(),t->y(),ui->vsmal2->width(),ui->vsmal2->height());
    }
    else if(counter==9){
        ui->vsmal3->setGeometry(t->x(),t->y(),ui->vsmal3->width(),ui->vsmal3->height());
    }
    else if(counter==10){
        ui->vsmal4->setGeometry(t->x(),t->y(),ui->vsmal4->width(),ui->vsmal4->height());
    }
    if(counter>10){

    }
}


void Map::on_pushButton_98_clicked()
{
    addship(ui->pushButton_98);

}


void Map::on_pushButton_99_clicked()
{
    addship(ui->pushButton_99);

}


void Map::on_pushButton_88_clicked()
{
    if(counter>1)
    addship(ui->pushButton_88);

}


void Map::on_pushButton_76_clicked()
{
    if(counter>2)
    addship(ui->pushButton_76);

}


void Map::on_pushButton_64_clicked()
{
    if(counter>5)
    addship(ui->pushButton_64);

}


void Map::on_pushButton_17_clicked()
{
    addship(ui->pushButton_17);

}


void Map::on_pushButton_25_clicked()
{
    addship(ui->pushButton_25);

}


void Map::on_pushButton_109_clicked()
{
    addship(ui->pushButton_109);

}


void Map::on_pushButton_108_clicked()
{
    addship(ui->pushButton_108);

}


void Map::on_pushButton_105_clicked()
{
    addship(ui->pushButton_105);

}


void Map::on_pushButton_103_clicked()
{
    addship(ui->pushButton_103);

}


void Map::on_pushButton_104_clicked()
{
    addship(ui->pushButton_104);

}


void Map::on_pushButton_106_clicked()
{
    if(counter>1)
    addship(ui->pushButton_106);

}


void Map::on_pushButton_75_clicked()
{
    if(counter>2)
    addship(ui->pushButton_75);

}


void Map::on_pushButton_67_clicked()
{
    if(counter>5)
    addship(ui->pushButton_67);

}


void Map::on_pushButton_21_clicked()
{
    addship(ui->pushButton_21);

}


void Map::on_pushButton_107_clicked()
{
    addship(ui->pushButton_107);

}


void Map::on_pushButton_102_clicked()
{
    addship(ui->pushButton_102);

}


void Map::on_pushButton_89_clicked()
{
    addship(ui->pushButton_89);

}


void Map::on_pushButton_91_clicked()
{
    addship(ui->pushButton_91);

}


void Map::on_pushButton_90_clicked()
{
    addship(ui->pushButton_90);

}


void Map::on_pushButton_87_clicked()
{
    addship(ui->pushButton_87);

}


void Map::on_pushButton_86_clicked()
{
    if(counter>1)
    addship(ui->pushButton_86);

}


void Map::on_pushButton_73_clicked()
{
    if(counter>2)
    addship(ui->pushButton_73);

}


void Map::on_pushButton_69_clicked()
{
    if(counter>5)
    addship(ui->pushButton_69);

}


void Map::on_pushButton_22_clicked()
{
    addship(ui->pushButton_22);

}


void Map::on_pushButton_23_clicked()
{
    addship(ui->pushButton_23);

}


void Map::on_pushButton_20_clicked()
{
    addship(ui->pushButton_20);

}


void Map::on_pushButton_28_clicked()
{
    addship(ui->pushButton_28);

}


void Map::on_pushButton_27_clicked()
{
    addship(ui->pushButton_27);

}


void Map::on_pushButton_29_clicked()
{
    addship(ui->pushButton_29);

}


void Map::on_pushButton_26_clicked()
{
    addship(ui->pushButton_26);

}


void Map::on_pushButton_74_clicked()
{
    if(counter>1)
    addship(ui->pushButton_74);

}


void Map::on_pushButton_30_clicked()
{
    if(counter>2)
    addship(ui->pushButton_30);

}


void Map::on_pushButton_33_clicked()
{
    if(counter>5)
    addship(ui->pushButton_33);

}


void Map::on_pushButton_118_clicked()
{
    addship(ui->pushButton_118);

}


void Map::on_pushButton_110_clicked()
{
    addship(ui->pushButton_110);

}


void Map::on_pushButton_95_clicked()
{
    addship(ui->pushButton_95);

}


void Map::on_pushButton_96_clicked()
{
    addship(ui->pushButton_96);

}


void Map::on_pushButton_100_clicked()
{
    addship(ui->pushButton_100);

}


void Map::on_pushButton_97_clicked()
{
    addship(ui->pushButton_97);

}


void Map::on_pushButton_31_clicked()
{
    addship(ui->pushButton_31);

}


void Map::on_pushButton_101_clicked()
{
    if(counter>1)
    addship(ui->pushButton_101);

}


void Map::on_pushButton_72_clicked()
{
    if(counter>2)
    addship(ui->pushButton_72);

}


void Map::on_pushButton_68_clicked()
{
    if(counter>5)
    addship(ui->pushButton_68);

}


void Map::on_pushButton_18_clicked()
{
    addship(ui->pushButton_18);

}


void Map::on_pushButton_7_clicked()
{
    addship(ui->pushButton_7);

}


void Map::on_pushButton_78_clicked()
{
    addship(ui->pushButton_78);

}


void Map::on_pushButton_79_clicked()
{
    addship(ui->pushButton_79);

}


void Map::on_pushButton_81_clicked()
{
    addship(ui->pushButton_81);

}


void Map::on_pushButton_82_clicked()
{
    addship(ui->pushButton_82);

}


void Map::on_pushButton_35_clicked()
{
    addship(ui->pushButton_35);

}


void Map::on_pushButton_32_clicked()
{
    if(counter>1)
    addship(ui->pushButton_32);

}


void Map::on_pushButton_80_clicked()
{
    if(counter>2)
    addship(ui->pushButton_80);

}


void Map::on_pushButton_70_clicked()
{
    if(counter>5)
    addship(ui->pushButton_70);

}


void Map::on_pushButton_10_clicked()
{
    addship(ui->pushButton_10);

}


void Map::on_pushButton_113_clicked()
{
    addship(ui->pushButton_113);

}


void Map::on_pushButton_24_clicked()
{
    addship(ui->pushButton_24);

}


void Map::on_pushButton_84_clicked()
{
    addship(ui->pushButton_84);

}


void Map::on_pushButton_49_clicked()
{
    addship(ui->pushButton_49);

}


void Map::on_pushButton_38_clicked()
{
    addship(ui->pushButton_38);

}


void Map::on_pushButton_40_clicked()
{
    addship(ui->pushButton_40);

}


void Map::on_pushButton_43_clicked()
{
    if(counter>1)
    addship(ui->pushButton_43);

}


void Map::on_pushButton_47_clicked()
{
    if(counter>2)
    addship(ui->pushButton_47);

}


void Map::on_pushButton_46_clicked()
{
    if(counter>5)
    addship(ui->pushButton_46);

}


void Map::on_pushButton_19_clicked()
{
    addship(ui->pushButton_19);

}


void Map::on_pushButton_77_clicked()
{
    addship(ui->pushButton_77);

}


void Map::on_pushButton_85_clicked()
{
    addship(ui->pushButton_85);

}


void Map::on_pushButton_57_clicked()
{
    addship(ui->pushButton_57);

}


void Map::on_pushButton_83_clicked()
{
    addship(ui->pushButton_83);

}


void Map::on_pushButton_48_clicked()
{
    addship(ui->pushButton_48);

}


void Map::on_pushButton_36_clicked()
{
    addship(ui->pushButton_36);

}


void Map::on_pushButton_37_clicked()
{
    if(counter>1)
    addship(ui->pushButton_37);

}


void Map::on_pushButton_71_clicked()
{
    if(counter>2)
    addship(ui->pushButton_71);

}


void Map::on_pushButton_45_clicked()
{
    if(counter>5)
    addship(ui->pushButton_45);

}


void Map::on_pushButton_54_clicked()
{
    addship(ui->pushButton_54);

}


void Map::on_pushButton_55_clicked()
{
    addship(ui->pushButton_55);

}


void Map::on_pushButton_56_clicked()
{
    addship(ui->pushButton_56);

}


void Map::on_pushButton_53_clicked()
{
    addship(ui->pushButton_53);

}


void Map::on_pushButton_52_clicked()
{
    addship(ui->pushButton_52);

}


void Map::on_pushButton_42_clicked()
{
    addship(ui->pushButton_42);

}


void Map::on_pushButton_39_clicked()
{
    addship(ui->pushButton_39);

}


void Map::on_pushButton_41_clicked()
{
    if(counter>1)
    addship(ui->pushButton_41);

}


void Map::on_pushButton_44_clicked()
{
    if(counter>2)
    addship(ui->pushButton_44);

}


void Map::on_pushButton_51_clicked()
{
    if(counter>5)
    addship(ui->pushButton_51);

}

