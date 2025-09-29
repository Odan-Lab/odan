/********************************************************************************
** Form generated from reading UI file 'adddelegationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELEGATIONPAGE_H
#define UI_ADDDELEGATIONPAGE_H

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
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_AddDelegationPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpinBox *lineEditGasLimit;
    AddressField *lineEditAddress;
    QLabel *labelGasPrice;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxFee;
    BitcoinAmountField *lineEditGasPrice;
    QHBoxLayout *horizontalLayout_3;
    QValidatedLineEdit *lineEditStakerAddress;
    QLabel *labelGasLimit;
    QLabel *labelAddress;
    QLabel *labelFee;
    QLabel *labelStakerAddress;
    QLabel *labelStakerName;
    QLineEdit *lineEditStakerName;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addDelegationButton;

    void setupUi(QDialog *AddDelegationPage)
    {
        if (AddDelegationPage->objectName().isEmpty())
            AddDelegationPage->setObjectName(QString::fromUtf8("AddDelegationPage"));
        AddDelegationPage->resize(600, 360);
        verticalLayout = new QVBoxLayout(AddDelegationPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        lineEditGasLimit = new QSpinBox(AddDelegationPage);
        lineEditGasLimit->setObjectName(QString::fromUtf8("lineEditGasLimit"));
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEditGasLimit, 4, 1, 1, 1);

        lineEditAddress = new AddressField(AddDelegationPage);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 3, 1, 1, 1);

        labelGasPrice = new QLabel(AddDelegationPage);
        labelGasPrice->setObjectName(QString::fromUtf8("labelGasPrice"));
        labelGasPrice->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasPrice, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBoxFee = new QSpinBox(AddDelegationPage);
        spinBoxFee->setObjectName(QString::fromUtf8("spinBoxFee"));
        spinBoxFee->setMinimumSize(QSize(100, 0));
        spinBoxFee->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(spinBoxFee);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(AddDelegationPage);
        lineEditGasPrice->setObjectName(QString::fromUtf8("lineEditGasPrice"));

        gridLayout->addWidget(lineEditGasPrice, 5, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditStakerAddress = new QValidatedLineEdit(AddDelegationPage);
        lineEditStakerAddress->setObjectName(QString::fromUtf8("lineEditStakerAddress"));

        horizontalLayout_3->addWidget(lineEditStakerAddress);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        labelGasLimit = new QLabel(AddDelegationPage);
        labelGasLimit->setObjectName(QString::fromUtf8("labelGasLimit"));
        labelGasLimit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasLimit, 4, 0, 1, 1);

        labelAddress = new QLabel(AddDelegationPage);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelAddress, 3, 0, 1, 1);

        labelFee = new QLabel(AddDelegationPage);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        labelFee->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelFee, 2, 0, 1, 1);

        labelStakerAddress = new QLabel(AddDelegationPage);
        labelStakerAddress->setObjectName(QString::fromUtf8("labelStakerAddress"));
        labelStakerAddress->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerAddress, 1, 0, 1, 1);

        labelStakerName = new QLabel(AddDelegationPage);
        labelStakerName->setObjectName(QString::fromUtf8("labelStakerName"));
        labelStakerName->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerName, 0, 0, 1, 1);

        lineEditStakerName = new QLineEdit(AddDelegationPage);
        lineEditStakerName->setObjectName(QString::fromUtf8("lineEditStakerName"));
        lineEditStakerName->setMaxLength(50);

        gridLayout->addWidget(lineEditStakerName, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(AddDelegationPage);
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

        addDelegationButton = new QPushButton(buttonsContainerWhite);
        addDelegationButton->setObjectName(QString::fromUtf8("addDelegationButton"));

        horizontalLayout_2->addWidget(addDelegationButton);


        verticalLayout->addWidget(buttonsContainerWhite);

        QWidget::setTabOrder(lineEditStakerAddress, spinBoxFee);
        QWidget::setTabOrder(spinBoxFee, lineEditAddress);
        QWidget::setTabOrder(lineEditAddress, lineEditGasLimit);
        QWidget::setTabOrder(lineEditGasLimit, lineEditGasPrice);
        QWidget::setTabOrder(lineEditGasPrice, addDelegationButton);
        QWidget::setTabOrder(addDelegationButton, clearButton);

        retranslateUi(AddDelegationPage);

        QMetaObject::connectSlotsByName(AddDelegationPage);
    } // setupUi

    void retranslateUi(QDialog *AddDelegationPage)
    {
        AddDelegationPage->setWindowTitle(QCoreApplication::translate("AddDelegationPage", "Dialog", nullptr));
        labelGasPrice->setText(QCoreApplication::translate("AddDelegationPage", "GasPrice", nullptr));
        spinBoxFee->setSuffix(QCoreApplication::translate("AddDelegationPage", "%", nullptr));
        labelGasLimit->setText(QCoreApplication::translate("AddDelegationPage", "GasLimit", nullptr));
        labelAddress->setText(QCoreApplication::translate("AddDelegationPage", "Address", nullptr));
        labelFee->setText(QCoreApplication::translate("AddDelegationPage", "Fee", nullptr));
        labelStakerAddress->setText(QCoreApplication::translate("AddDelegationPage", "Staker address", nullptr));
        labelStakerName->setText(QCoreApplication::translate("AddDelegationPage", "Staker name", nullptr));
        clearButton->setText(QCoreApplication::translate("AddDelegationPage", "Cancel", nullptr));
        addDelegationButton->setText(QCoreApplication::translate("AddDelegationPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDelegationPage: public Ui_AddDelegationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELEGATIONPAGE_H
