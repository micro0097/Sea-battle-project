/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(881, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"image: url(:/new/prefix1/image - Copy.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(210, 0, 461, 601));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(lineEdit_3, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(lineEdit_4, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_5, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_6, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Usename", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "If you don't have any account: ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Forget password", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
