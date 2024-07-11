/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName("Map");
        Map->resize(1100, 427);
        Map->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image.png);"));
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(740, 60, 121, 61));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191223.jpg);"));
        pushButton->setFlat(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(840, 250, 81, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191606.jpg);"));
        pushButton_3->setFlat(true);
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(600, 190, 101, 31));
        pushButton_13->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Screenshot 2024-07-10 220405.png);"));
        pushButton_13->setFlat(true);
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(750, 190, 101, 31));
        pushButton_14->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Screenshot 2024-07-10 220405.png);"));
        pushButton_14->setFlat(true);
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(900, 190, 101, 31));
        pushButton_15->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Screenshot 2024-07-10 220405.png);"));
        pushButton_15->setFlat(true);
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(600, 250, 81, 41));
        pushButton_16->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191606.jpg);"));
        pushButton_16->setFlat(true);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(650, 130, 91, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191452.jpg);"));
        pushButton_11->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(720, 250, 81, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191606.jpg);"));
        pushButton_2->setFlat(true);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(860, 130, 91, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191452.jpg);"));
        pushButton_12->setFlat(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(960, 250, 81, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/20240710_191606.jpg);"));
        pushButton_5->setFlat(true);
        Map->setCentralWidget(centralwidget);

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QCoreApplication::translate("Map", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_11->setText(QString());
        pushButton_2->setText(QString());
        pushButton_12->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
