/********************************************************************************
** Form generated from reading UI file 'hardwarekeystoredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREKEYSTOREDIALOG_H
#define UI_HARDWAREKEYSTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HardwareKeystoreDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxDevices;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *HardwareKeystoreDialog)
    {
        if (HardwareKeystoreDialog->objectName().isEmpty())
            HardwareKeystoreDialog->setObjectName(QString::fromUtf8("HardwareKeystoreDialog"));
        HardwareKeystoreDialog->resize(550, 362);
        HardwareKeystoreDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(HardwareKeystoreDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, 30, -1);
        groupBoxDevices = new QGroupBox(HardwareKeystoreDialog);
        groupBoxDevices->setObjectName(QString::fromUtf8("groupBoxDevices"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxDevices->sizePolicy().hasHeightForWidth());
        groupBoxDevices->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBoxDevices->setFont(font);

        verticalLayout_2->addWidget(groupBoxDevices);


        verticalLayout->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(HardwareKeystoreDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(buttonsContainerWhite);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(HardwareKeystoreDialog);

        QMetaObject::connectSlotsByName(HardwareKeystoreDialog);
    } // setupUi

    void retranslateUi(QDialog *HardwareKeystoreDialog)
    {
        HardwareKeystoreDialog->setWindowTitle(QCoreApplication::translate("HardwareKeystoreDialog", "Hardware Keystore", nullptr));
        groupBoxDevices->setTitle(QCoreApplication::translate("HardwareKeystoreDialog", "Select a device:", nullptr));
        cancelButton->setText(QCoreApplication::translate("HardwareKeystoreDialog", "&Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("HardwareKeystoreDialog", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareKeystoreDialog: public Ui_HardwareKeystoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREKEYSTOREDIALOG_H
