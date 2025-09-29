/********************************************************************************
** Form generated from reading UI file 'hardwaresigntxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWARESIGNTXDIALOG_H
#define UI_HARDWARESIGNTXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_HardwareSignTxDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetTx;
    QFormLayout *formLayout;
    QLabel *labelAmount;
    BitcoinAmountField *lineEditAmount;
    QLabel *labelFee;
    BitcoinAmountField *lineEditFee;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelTxData;
    QTextEdit *textEditTxData;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelTxDetails;
    QTextEdit *textEditTxDetails;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *importButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *signButton;
    QPushButton *sendButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *HardwareSignTxDialog)
    {
        if (HardwareSignTxDialog->objectName().isEmpty())
            HardwareSignTxDialog->setObjectName(QString::fromUtf8("HardwareSignTxDialog"));
        HardwareSignTxDialog->resize(590, 396);
        verticalLayout = new QVBoxLayout(HardwareSignTxDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, 30, -1);
        widgetTx = new QWidget(HardwareSignTxDialog);
        widgetTx->setObjectName(QString::fromUtf8("widgetTx"));
        formLayout = new QFormLayout(widgetTx);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelAmount = new QLabel(widgetTx);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAmount->sizePolicy().hasHeightForWidth());
        labelAmount->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelAmount);

        lineEditAmount = new BitcoinAmountField(widgetTx);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditAmount->sizePolicy().hasHeightForWidth());
        lineEditAmount->setSizePolicy(sizePolicy1);
        lineEditAmount->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditAmount);

        labelFee = new QLabel(widgetTx);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        sizePolicy.setHeightForWidth(labelFee->sizePolicy().hasHeightForWidth());
        labelFee->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelFee);

        lineEditFee = new BitcoinAmountField(widgetTx);
        lineEditFee->setObjectName(QString::fromUtf8("lineEditFee"));
        sizePolicy1.setHeightForWidth(lineEditFee->sizePolicy().hasHeightForWidth());
        lineEditFee->setSizePolicy(sizePolicy1);
        lineEditFee->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditFee);


        verticalLayout_2->addWidget(widgetTx);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_4);

        labelTxData = new QLabel(HardwareSignTxDialog);
        labelTxData->setObjectName(QString::fromUtf8("labelTxData"));

        verticalLayout_2->addWidget(labelTxData);

        textEditTxData = new QTextEdit(HardwareSignTxDialog);
        textEditTxData->setObjectName(QString::fromUtf8("textEditTxData"));

        verticalLayout_2->addWidget(textEditTxData);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        labelTxDetails = new QLabel(HardwareSignTxDialog);
        labelTxDetails->setObjectName(QString::fromUtf8("labelTxDetails"));

        verticalLayout_2->addWidget(labelTxDetails);

        textEditTxDetails = new QTextEdit(HardwareSignTxDialog);
        textEditTxDetails->setObjectName(QString::fromUtf8("textEditTxDetails"));

        verticalLayout_2->addWidget(textEditTxDetails);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(HardwareSignTxDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        importButton = new QPushButton(buttonsContainerWhite);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        horizontalLayout_2->addWidget(importButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        signButton = new QPushButton(buttonsContainerWhite);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setEnabled(false);

        horizontalLayout_2->addWidget(signButton);

        sendButton = new QPushButton(buttonsContainerWhite);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);

        horizontalLayout_2->addWidget(sendButton);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(HardwareSignTxDialog);

        QMetaObject::connectSlotsByName(HardwareSignTxDialog);
    } // setupUi

    void retranslateUi(QDialog *HardwareSignTxDialog)
    {
        HardwareSignTxDialog->setWindowTitle(QCoreApplication::translate("HardwareSignTxDialog", "Sign transaction with hardware", nullptr));
        labelAmount->setText(QCoreApplication::translate("HardwareSignTxDialog", "Amount:", nullptr));
        labelFee->setText(QCoreApplication::translate("HardwareSignTxDialog", "Fee:", nullptr));
        labelTxData->setText(QCoreApplication::translate("HardwareSignTxDialog", "Transaction data", nullptr));
        labelTxDetails->setText(QCoreApplication::translate("HardwareSignTxDialog", "Transaction details", nullptr));
        importButton->setText(QCoreApplication::translate("HardwareSignTxDialog", "Import Addresses", nullptr));
        signButton->setText(QCoreApplication::translate("HardwareSignTxDialog", "Sign", nullptr));
        sendButton->setText(QCoreApplication::translate("HardwareSignTxDialog", "Broadcast", nullptr));
        cancelButton->setText(QCoreApplication::translate("HardwareSignTxDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareSignTxDialog: public Ui_HardwareSignTxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWARESIGNTXDIALOG_H
