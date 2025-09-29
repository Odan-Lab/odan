/********************************************************************************
** Form generated from reading UI file 'sendtokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDTOKENPAGE_H
#define UI_SENDTOKENPAGE_H

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
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"
#include "qt/tokenamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_SendTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelGasPrice;
    QLabel *labelGasLimit;
    TokenAmountField *lineEditAmount;
    QLineEdit *lineEditDescription;
    QLabel *labelPayTo;
    QValidatedLineEdit *lineEditPayTo;
    QSpinBox *lineEditGasLimit;
    QLabel *labelAmount;
    QLabel *labelDescription;
    BitcoinAmountField *lineEditGasPrice;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTokenBalanceText;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelTokenBalance;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *confirmButton;

    void setupUi(QDialog *SendTokenPage)
    {
        if (SendTokenPage->objectName().isEmpty())
            SendTokenPage->setObjectName(QString::fromUtf8("SendTokenPage"));
        SendTokenPage->setEnabled(true);
        SendTokenPage->resize(600, 360);
        verticalLayout = new QVBoxLayout(SendTokenPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        labelGasPrice = new QLabel(SendTokenPage);
        labelGasPrice->setObjectName(QString::fromUtf8("labelGasPrice"));
        labelGasPrice->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasPrice, 5, 0, 1, 1);

        labelGasLimit = new QLabel(SendTokenPage);
        labelGasLimit->setObjectName(QString::fromUtf8("labelGasLimit"));
        labelGasLimit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasLimit, 4, 0, 1, 1);

        lineEditAmount = new TokenAmountField(SendTokenPage);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));

        gridLayout->addWidget(lineEditAmount, 2, 1, 1, 1);

        lineEditDescription = new QLineEdit(SendTokenPage);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));

        gridLayout->addWidget(lineEditDescription, 3, 1, 1, 1);

        labelPayTo = new QLabel(SendTokenPage);
        labelPayTo->setObjectName(QString::fromUtf8("labelPayTo"));
        labelPayTo->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelPayTo, 1, 0, 1, 1);

        lineEditPayTo = new QValidatedLineEdit(SendTokenPage);
        lineEditPayTo->setObjectName(QString::fromUtf8("lineEditPayTo"));

        gridLayout->addWidget(lineEditPayTo, 1, 1, 1, 1);

        lineEditGasLimit = new QSpinBox(SendTokenPage);
        lineEditGasLimit->setObjectName(QString::fromUtf8("lineEditGasLimit"));
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEditGasLimit, 4, 1, 1, 1);

        labelAmount = new QLabel(SendTokenPage);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        labelAmount->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelAmount, 2, 0, 1, 1);

        labelDescription = new QLabel(SendTokenPage);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelDescription, 3, 0, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(SendTokenPage);
        lineEditGasPrice->setObjectName(QString::fromUtf8("lineEditGasPrice"));

        gridLayout->addWidget(lineEditGasPrice, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTokenBalanceText = new QLabel(SendTokenPage);
        labelTokenBalanceText->setObjectName(QString::fromUtf8("labelTokenBalanceText"));

        horizontalLayout->addWidget(labelTokenBalanceText);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        labelTokenBalance = new QLabel(SendTokenPage);
        labelTokenBalance->setObjectName(QString::fromUtf8("labelTokenBalance"));
        labelTokenBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelTokenBalance);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        buttonsContainerWhite = new QWidget(SendTokenPage);
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

        confirmButton = new QPushButton(buttonsContainerWhite);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        horizontalLayout_2->addWidget(confirmButton);


        verticalLayout->addWidget(buttonsContainerWhite);

        QWidget::setTabOrder(lineEditPayTo, lineEditAmount);
        QWidget::setTabOrder(lineEditAmount, lineEditDescription);
        QWidget::setTabOrder(lineEditDescription, lineEditGasLimit);
        QWidget::setTabOrder(lineEditGasLimit, lineEditGasPrice);
        QWidget::setTabOrder(lineEditGasPrice, confirmButton);
        QWidget::setTabOrder(confirmButton, clearButton);

        retranslateUi(SendTokenPage);

        QMetaObject::connectSlotsByName(SendTokenPage);
    } // setupUi

    void retranslateUi(QDialog *SendTokenPage)
    {
        SendTokenPage->setWindowTitle(QCoreApplication::translate("SendTokenPage", "Send", nullptr));
        labelGasPrice->setText(QCoreApplication::translate("SendTokenPage", "GasPrice", nullptr));
        labelGasLimit->setText(QCoreApplication::translate("SendTokenPage", "GasLimit", nullptr));
        labelPayTo->setText(QCoreApplication::translate("SendTokenPage", "PayTo", nullptr));
        labelAmount->setText(QCoreApplication::translate("SendTokenPage", "Amount", nullptr));
        labelDescription->setText(QCoreApplication::translate("SendTokenPage", "Description", nullptr));
        labelTokenBalanceText->setText(QCoreApplication::translate("SendTokenPage", "Balance:", nullptr));
        labelTokenBalance->setText(QCoreApplication::translate("SendTokenPage", "100.34", nullptr));
        clearButton->setText(QCoreApplication::translate("SendTokenPage", "Cancel", nullptr));
        confirmButton->setText(QCoreApplication::translate("SendTokenPage", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendTokenPage: public Ui_SendTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTOKENPAGE_H
