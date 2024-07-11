/********************************************************************************
** Form generated from reading UI file 'dialogformap.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogformap
{
public:
    QDialogButtonBox *buttonBox_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;

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
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 441, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);

        horizontalLayout->addWidget(spinBox);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(10);

        horizontalLayout->addWidget(spinBox_2);


        retranslateUi(Dialogformap);

        QMetaObject::connectSlotsByName(Dialogformap);
    } // setupUi

    void retranslateUi(QDialog *Dialogformap)
    {
        Dialogformap->setWindowTitle(QCoreApplication::translate("Dialogformap", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialogformap", "Please enter your ship coordinate :(Aval keshti madnazar ast.)", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialogformap", "Horizenal", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialogformap", "Vertical", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogformap: public Ui_Dialogformap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFORMAP_H
