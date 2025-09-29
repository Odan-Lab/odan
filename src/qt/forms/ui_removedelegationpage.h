/********************************************************************************
** Form generated from reading UI file 'removedelegationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDELEGATIONPAGE_H
#define UI_REMOVEDELEGATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_RemoveDelegationPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    BitcoinAmountField *lineEditGasPrice;
    QLabel *labelGasPrice;
    QLabel *labelGasLimit;
    QSpinBox *lineEditGasLimit;
    QLabel *labelAddress;
    QValidatedLineEdit *lineEditAddress;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *removeDelegationButton;

    void setupUi(QDialog *RemoveDelegationPage)
    {
        if (RemoveDelegationPage->objectName().isEmpty())
            RemoveDelegationPage->setObjectName(QString::fromUtf8("RemoveDelegationPage"));
        RemoveDelegationPage->resize(600, 360);
        verticalLayout = new QVBoxLayout(RemoveDelegationPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        lineEditGasPrice = new BitcoinAmountField(RemoveDelegationPage);
        lineEditGasPrice->setObjectName(QString::fromUtf8("lineEditGasPrice"));

        gridLayout->addWidget(lineEditGasPrice, 2, 1, 1, 1);

        labelGasPrice = new QLabel(RemoveDelegationPage);
        labelGasPrice->setObjectName(QString::fromUtf8("labelGasPrice"));
        labelGasPrice->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasPrice, 2, 0, 1, 1);

        labelGasLimit = new QLabel(RemoveDelegationPage);
        labelGasLimit->setObjectName(QString::fromUtf8("labelGasLimit"));
        labelGasLimit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasLimit, 1, 0, 1, 1);

        lineEditGasLimit = new QSpinBox(RemoveDelegationPage);
        lineEditGasLimit->setObjectName(QString::fromUtf8("lineEditGasLimit"));
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEditGasLimit, 1, 1, 1, 1);

        labelAddress = new QLabel(RemoveDelegationPage);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelAddress, 0, 0, 1, 1);

        lineEditAddress = new QValidatedLineEdit(RemoveDelegationPage);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonsContainerWhite = new QWidget(RemoveDelegationPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        clearButton = new QPushButton(buttonsContainerWhite);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        removeDelegationButton = new QPushButton(buttonsContainerWhite);
        removeDelegationButton->setObjectName(QString::fromUtf8("removeDelegationButton"));

        horizontalLayout_2->addWidget(removeDelegationButton);


        verticalLayout->addWidget(buttonsContainerWhite);

        QWidget::setTabOrder(lineEditAddress, lineEditGasLimit);
        QWidget::setTabOrder(lineEditGasLimit, lineEditGasPrice);
        QWidget::setTabOrder(lineEditGasPrice, removeDelegationButton);
        QWidget::setTabOrder(removeDelegationButton, clearButton);

        retranslateUi(RemoveDelegationPage);

        QMetaObject::connectSlotsByName(RemoveDelegationPage);
    } // setupUi

    void retranslateUi(QDialog *RemoveDelegationPage)
    {
        RemoveDelegationPage->setWindowTitle(QCoreApplication::translate("RemoveDelegationPage", "Dialog", nullptr));
        labelGasPrice->setText(QCoreApplication::translate("RemoveDelegationPage", "GasPrice", nullptr));
        labelGasLimit->setText(QCoreApplication::translate("RemoveDelegationPage", "GasLimit", nullptr));
        labelAddress->setText(QCoreApplication::translate("RemoveDelegationPage", "Address", nullptr));
        clearButton->setText(QCoreApplication::translate("RemoveDelegationPage", "Cancel", nullptr));
        removeDelegationButton->setText(QCoreApplication::translate("RemoveDelegationPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveDelegationPage: public Ui_RemoveDelegationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDELEGATIONPAGE_H
