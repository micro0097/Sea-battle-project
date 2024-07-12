/********************************************************************************
** Form generated from reading UI file 'shopping.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPING_H
#define UI_SHOPPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shopping
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Shopping)
    {
        if (Shopping->objectName().isEmpty())
            Shopping->setObjectName("Shopping");
        Shopping->resize(1133, 432);
        Shopping->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image.png);"));
        pushButton_2 = new QPushButton(Shopping);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(830, 220, 151, 151));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/5Untitled.jpg);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Shopping);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(650, 220, 151, 151));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/4Untitled.jpg);"));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(Shopping);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(550, 40, 151, 151));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/1Untitled.jpg);"));
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(Shopping);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(730, 40, 151, 151));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/2Untitled.jpg);"));
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(Shopping);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(910, 40, 151, 151));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/3Untitled.jpg);"));
        pushButton_6->setFlat(true);

        retranslateUi(Shopping);

        QMetaObject::connectSlotsByName(Shopping);
    } // setupUi

    void retranslateUi(QWidget *Shopping)
    {
        Shopping->setWindowTitle(QCoreApplication::translate("Shopping", "Form", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Shopping: public Ui_Shopping {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPING_H
