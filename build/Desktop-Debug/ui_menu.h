/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(1253, 612);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(540, 190, 201, 201));
        pushButton_2->setStyleSheet(QString::fromUtf8("opacity: 0;\n"
"border-radius: 5px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 500, 161, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Segoe UI\";\n"
"color: rgb(85, 85, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 510, 171, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Segoe UI\";\n"
"color: rgb(85, 85, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1281, 571));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Screenshot 2024-07-10 134739.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 500, 171, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Segoe UI\";\n"
"color: rgb(85, 85, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 60, 201, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(85, 85, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(780, 180, 201, 201));
        pushButton_3->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("opacity: 0;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 188, 201, 201));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setStyleSheet(QString::fromUtf8("opacity: 0;\n"
"border-radius: 5px;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 201, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Segoe UI\";\n"
"border-radius: 5px;"));
        Menu->setCentralWidget(centralwidget);
        widget->raise();
        pushButton_2->raise();
        label_3->raise();
        label_4->raise();
        label_2->raise();
        label_5->raise();
        pushButton_3->raise();
        pushButton->raise();
        label->raise();

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        pushButton_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Menu", "Wins", nullptr));
        label_4->setText(QCoreApplication::translate("Menu", "Drop", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "Loose", nullptr));
        label_5->setText(QCoreApplication::translate("Menu", "Score", nullptr));
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("Menu", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
