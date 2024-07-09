/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(862, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"image: url(:/new/prefix1/image - Copy.png);\n"
"background-image: url(:/new/prefix1/desk.jpg);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(200, 0, 461, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usename", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Forget password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "If you don't have any account: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
