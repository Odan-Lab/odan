/********************************************************************************
** Form generated from reading UI file 'splitutxopage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITUTXOPAGE_H
#define UI_SPLITUTXOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"
#include "qt/bitcoinamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_SplitUTXOPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    BitcoinAmountField *lineEditMinValue;
    QSpinBox *spinBoxMaxOutputs;
    QLabel *labelAddress;
    QHBoxLayout *horizontalLayout;
    AddressField *lineEditAddress;
    QLineEdit *txtAddress;
    QLabel *labelMaxOutputs;
    BitcoinAmountField *lineEditMaxValue;
    QLabel *labelMinValue;
    QLabel *labelMaxValue;
    QLabel *labelDescription;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *splitCoinsButton;

    void setupUi(QDialog *SplitUTXOPage)
    {
        if (SplitUTXOPage->objectName().isEmpty())
            SplitUTXOPage->setObjectName(QString::fromUtf8("SplitUTXOPage"));
        SplitUTXOPage->resize(586, 351);
        verticalLayout = new QVBoxLayout(SplitUTXOPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        lineEditMinValue = new BitcoinAmountField(SplitUTXOPage);
        lineEditMinValue->setObjectName(QString::fromUtf8("lineEditMinValue"));

        gridLayout->addWidget(lineEditMinValue, 1, 1, 1, 1);

        spinBoxMaxOutputs = new QSpinBox(SplitUTXOPage);
        spinBoxMaxOutputs->setObjectName(QString::fromUtf8("spinBoxMaxOutputs"));
        spinBoxMaxOutputs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxMaxOutputs, 3, 1, 1, 1);

        labelAddress = new QLabel(SplitUTXOPage);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(labelAddress, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditAddress = new AddressField(SplitUTXOPage);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        horizontalLayout->addWidget(lineEditAddress);

        txtAddress = new QLineEdit(SplitUTXOPage);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));

        horizontalLayout->addWidget(txtAddress);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        labelMaxOutputs = new QLabel(SplitUTXOPage);
        labelMaxOutputs->setObjectName(QString::fromUtf8("labelMaxOutputs"));
        labelMaxOutputs->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(labelMaxOutputs, 3, 0, 1, 1);

        lineEditMaxValue = new BitcoinAmountField(SplitUTXOPage);
        lineEditMaxValue->setObjectName(QString::fromUtf8("lineEditMaxValue"));

        gridLayout->addWidget(lineEditMaxValue, 2, 1, 1, 1);

        labelMinValue = new QLabel(SplitUTXOPage);
        labelMinValue->setObjectName(QString::fromUtf8("labelMinValue"));
        labelMinValue->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(labelMinValue, 1, 0, 1, 1);

        labelMaxValue = new QLabel(SplitUTXOPage);
        labelMaxValue->setObjectName(QString::fromUtf8("labelMaxValue"));
        labelMaxValue->setMinimumSize(QSize(125, 0));

        gridLayout->addWidget(labelMaxValue, 2, 0, 1, 1);

        labelDescription = new QLabel(SplitUTXOPage);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));

        gridLayout->addWidget(labelDescription, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(SplitUTXOPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_3 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(30, -1, 30, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        splitCoinsButton = new QPushButton(buttonsContainerWhite);
        splitCoinsButton->setObjectName(QString::fromUtf8("splitCoinsButton"));

        horizontalLayout_3->addWidget(splitCoinsButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(SplitUTXOPage);

        QMetaObject::connectSlotsByName(SplitUTXOPage);
    } // setupUi

    void retranslateUi(QDialog *SplitUTXOPage)
    {
        SplitUTXOPage->setWindowTitle(QCoreApplication::translate("SplitUTXOPage", "Dialog", nullptr));
        labelAddress->setText(QCoreApplication::translate("SplitUTXOPage", "Address", nullptr));
        labelMaxOutputs->setText(QCoreApplication::translate("SplitUTXOPage", "Maximum outputs", nullptr));
        labelMinValue->setText(QCoreApplication::translate("SplitUTXOPage", "Minimum value", nullptr));
        labelMaxValue->setText(QCoreApplication::translate("SplitUTXOPage", "Maximum value", nullptr));
        labelDescription->setText(QString());
        cancelButton->setText(QCoreApplication::translate("SplitUTXOPage", "Done", nullptr));
        splitCoinsButton->setText(QCoreApplication::translate("SplitUTXOPage", "Split coins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SplitUTXOPage: public Ui_SplitUTXOPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITUTXOPAGE_H
