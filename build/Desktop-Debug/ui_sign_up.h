/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName("Sign_up");
        Sign_up->resize(800, 600);
        Sign_up->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/desk.jpg);\n"
"image: url(:/new/prefix1/image - Copy.png);"));
        centralwidget = new QWidget(Sign_up);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(170, 50, 461, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 4, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        Sign_up->setCentralWidget(centralwidget);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *Sign_up)
    {
        Sign_up->setWindowTitle(QCoreApplication::translate("Sign_up", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Sign_up", "Firstname", nullptr));
        label_4->setText(QCoreApplication::translate("Sign_up", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Sign_up", "Usename", nullptr));
        pushButton->setText(QCoreApplication::translate("Sign_up", "Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_up", "Lastname", nullptr));
        label_5->setText(QCoreApplication::translate("Sign_up", "E-mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
