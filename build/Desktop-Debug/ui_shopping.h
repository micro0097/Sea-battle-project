/********************************************************************************
** Form generated from reading UI file 'shopping.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPING_H
#define UI_SHOPPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shopping
{
public:

    void setupUi(QWidget *Shopping)
    {
        if (Shopping->objectName().isEmpty())
            Shopping->setObjectName("Shopping");
        Shopping->resize(698, 494);

        retranslateUi(Shopping);

        QMetaObject::connectSlotsByName(Shopping);
    } // setupUi

    void retranslateUi(QWidget *Shopping)
    {
        Shopping->setWindowTitle(QCoreApplication::translate("Shopping", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shopping: public Ui_Shopping {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPING_H
