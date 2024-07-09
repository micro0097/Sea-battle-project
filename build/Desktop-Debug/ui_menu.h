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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(800, 600);
        Menu->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"image: url(:/new/prefix1/paper.png);"));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 350, 541, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"color: rgb(7, 7, 7);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 18pt \"Segoe UI\";"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/new/prefix1/desk.jpg);\n"
"font: 700 18pt \"Segoe UI\";"));

        horizontalLayout->addWidget(pushButton_3);

        Menu->setCentralWidget(centralwidget);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Versus Bot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "Online", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "On-device", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
