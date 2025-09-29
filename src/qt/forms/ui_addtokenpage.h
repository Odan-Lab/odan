/********************************************************************************
** Form generated from reading UI file 'addtokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOKENPAGE_H
#define UI_ADDTOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"

QT_BEGIN_NAMESPACE

class Ui_AddTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelTokenSymbol;
    QLineEdit *lineEditDecimals;
    QLabel *labelDecimals;
    QLineEdit *lineEditTokenName;
    QLabel *labelContractAddress;
    QLineEdit *lineEditTokenSymbol;
    QLabel *labelTokenName;
    QLineEdit *lineEditContractAddress;
    QVBoxLayout *verticalLayout_2;
    AddressField *lineEditSenderAddress;
    QLabel *labelDescription;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *labelSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmButton;

    void setupUi(QDialog *AddTokenPage)
    {
        if (AddTokenPage->objectName().isEmpty())
            AddTokenPage->setObjectName(QString::fromUtf8("AddTokenPage"));
        AddTokenPage->resize(600, 350);
        AddTokenPage->setMinimumSize(QSize(600, 350));
        verticalLayout = new QVBoxLayout(AddTokenPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        labelTokenSymbol = new QLabel(AddTokenPage);
        labelTokenSymbol->setObjectName(QString::fromUtf8("labelTokenSymbol"));
        labelTokenSymbol->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelTokenSymbol, 2, 0, 1, 1);

        lineEditDecimals = new QLineEdit(AddTokenPage);
        lineEditDecimals->setObjectName(QString::fromUtf8("lineEditDecimals"));
        lineEditDecimals->setAlignment(Qt::AlignCenter);
        lineEditDecimals->setReadOnly(true);

        gridLayout->addWidget(lineEditDecimals, 3, 1, 1, 1);

        labelDecimals = new QLabel(AddTokenPage);
        labelDecimals->setObjectName(QString::fromUtf8("labelDecimals"));
        labelDecimals->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelDecimals, 3, 0, 1, 1);

        lineEditTokenName = new QLineEdit(AddTokenPage);
        lineEditTokenName->setObjectName(QString::fromUtf8("lineEditTokenName"));
        lineEditTokenName->setAlignment(Qt::AlignCenter);
        lineEditTokenName->setReadOnly(false);

        gridLayout->addWidget(lineEditTokenName, 1, 1, 1, 1);

        labelContractAddress = new QLabel(AddTokenPage);
        labelContractAddress->setObjectName(QString::fromUtf8("labelContractAddress"));
        labelContractAddress->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelContractAddress, 0, 0, 1, 1);

        lineEditTokenSymbol = new QLineEdit(AddTokenPage);
        lineEditTokenSymbol->setObjectName(QString::fromUtf8("lineEditTokenSymbol"));
        lineEditTokenSymbol->setAlignment(Qt::AlignCenter);
        lineEditTokenSymbol->setReadOnly(false);

        gridLayout->addWidget(lineEditTokenSymbol, 2, 1, 1, 1);

        labelTokenName = new QLabel(AddTokenPage);
        labelTokenName->setObjectName(QString::fromUtf8("labelTokenName"));
        labelTokenName->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(labelTokenName, 1, 0, 1, 1);

        lineEditContractAddress = new QLineEdit(AddTokenPage);
        lineEditContractAddress->setObjectName(QString::fromUtf8("lineEditContractAddress"));
        lineEditContractAddress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEditContractAddress, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditSenderAddress = new AddressField(AddTokenPage);
        lineEditSenderAddress->setObjectName(QString::fromUtf8("lineEditSenderAddress"));

        verticalLayout_2->addWidget(lineEditSenderAddress);

        labelDescription = new QLabel(AddTokenPage);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelDescription->setWordWrap(true);

        verticalLayout_2->addWidget(labelDescription);


        gridLayout->addLayout(verticalLayout_2, 4, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(AddTokenPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 0));

        verticalLayout_3->addWidget(label);

        labelSpacer = new QLabel(AddTokenPage);
        labelSpacer->setObjectName(QString::fromUtf8("labelSpacer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelSpacer->sizePolicy().hasHeightForWidth());
        labelSpacer->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(labelSpacer);


        gridLayout->addLayout(verticalLayout_3, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        buttonsContainerWhite = new QWidget(AddTokenPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        clearButton = new QPushButton(buttonsContainerWhite);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        confirmButton = new QPushButton(buttonsContainerWhite);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setEnabled(false);

        horizontalLayout_2->addWidget(confirmButton);


        verticalLayout->addWidget(buttonsContainerWhite);

        QWidget::setTabOrder(lineEditContractAddress, lineEditTokenName);
        QWidget::setTabOrder(lineEditTokenName, lineEditTokenSymbol);
        QWidget::setTabOrder(lineEditTokenSymbol, lineEditDecimals);
        QWidget::setTabOrder(lineEditDecimals, lineEditSenderAddress);
        QWidget::setTabOrder(lineEditSenderAddress, confirmButton);
        QWidget::setTabOrder(confirmButton, clearButton);

        retranslateUi(AddTokenPage);

        QMetaObject::connectSlotsByName(AddTokenPage);
    } // setupUi

    void retranslateUi(QDialog *AddTokenPage)
    {
        AddTokenPage->setWindowTitle(QCoreApplication::translate("AddTokenPage", "ADD Token", nullptr));
        labelTokenSymbol->setText(QCoreApplication::translate("AddTokenPage", "Token Symbol", nullptr));
        labelDecimals->setText(QCoreApplication::translate("AddTokenPage", "Decimals", nullptr));
        labelContractAddress->setText(QCoreApplication::translate("AddTokenPage", "Contract Address", nullptr));
        labelTokenName->setText(QCoreApplication::translate("AddTokenPage", "Token Name", nullptr));
        labelDescription->setText(QString());
        label->setText(QCoreApplication::translate("AddTokenPage", "Token Address", nullptr));
        labelSpacer->setText(QString());
        clearButton->setText(QCoreApplication::translate("AddTokenPage", "Cancel", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddTokenPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTokenPage: public Ui_AddTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOKENPAGE_H
