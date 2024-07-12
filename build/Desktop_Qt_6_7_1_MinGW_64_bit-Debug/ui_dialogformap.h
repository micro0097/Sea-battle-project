/********************************************************************************
** Form generated from reading UI file 'dialogformap.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFORMAP_H
#define UI_DIALOGFORMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogformap
{
public:
    QDialogButtonBox *buttonBox_2;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *Dialogformap)
    {
        if (Dialogformap->objectName().isEmpty())
            Dialogformap->setObjectName("Dialogformap");
        Dialogformap->resize(462, 264);
        Dialogformap->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/desk.jpg);"));
        buttonBox_2 = new QDialogButtonBox(Dialogformap);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setGeometry(QRect(50, 220, 341, 32));
        buttonBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox_2->setCenterButtons(false);
        groupBox = new QGroupBox(Dialogformap);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 441, 211));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 441, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dialogformap);

        QMetaObject::connectSlotsByName(Dialogformap);
    } // setupUi

    void retranslateUi(QDialog *Dialogformap)
    {
        Dialogformap->setWindowTitle(QCoreApplication::translate("Dialogformap", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialogformap", "Please enter your ship :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogformap: public Ui_Dialogformap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFORMAP_H
