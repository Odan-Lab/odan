/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *messageTextLabel;
    QLabel *payToLabel;
    QHBoxLayout *horizontalLayoutAmount;
    BitcoinAmountField *payAmount;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkboxSubtractFeeFromAmount;
    QPushButton *useAvailableBalanceButton;
    QLabel *labellLabel;
    QLabel *messageLabel;
    QLabel *amountLabel;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QFrame *hLine;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *deleteButton;
    QFrame *vLine;
    QToolButton *addressBookButton;
    QFrame *vLine2;
    QToolButton *pasteButton;
    QLineEdit *addAsLabel;

    void setupUi(QWidget *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QString::fromUtf8("SendCoinsEntry"));
        SendCoinsEntry->resize(729, 152);
        SendCoinsEntry->setFocusPolicy(Qt::TabFocus);
        SendCoinsEntry->setAutoFillBackground(false);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, 8, -1, 4);
        messageTextLabel = new QLabel(SendCoinsEntry);
        messageTextLabel->setObjectName(QString::fromUtf8("messageTextLabel"));
        messageTextLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(messageTextLabel, 3, 1, 1, 1);

        payToLabel = new QLabel(SendCoinsEntry);
        payToLabel->setObjectName(QString::fromUtf8("payToLabel"));

        gridLayout->addWidget(payToLabel, 0, 0, 1, 1);

        horizontalLayoutAmount = new QHBoxLayout();
        horizontalLayoutAmount->setObjectName(QString::fromUtf8("horizontalLayoutAmount"));
        payAmount = new BitcoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QString::fromUtf8("payAmount"));

        horizontalLayoutAmount->addWidget(payAmount);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutAmount->addItem(horizontalSpacer);

        checkboxSubtractFeeFromAmount = new QCheckBox(SendCoinsEntry);
        checkboxSubtractFeeFromAmount->setObjectName(QString::fromUtf8("checkboxSubtractFeeFromAmount"));

        horizontalLayoutAmount->addWidget(checkboxSubtractFeeFromAmount);

        useAvailableBalanceButton = new QPushButton(SendCoinsEntry);
        useAvailableBalanceButton->setObjectName(QString::fromUtf8("useAvailableBalanceButton"));
        useAvailableBalanceButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayoutAmount->addWidget(useAvailableBalanceButton);

        horizontalLayoutAmount->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayoutAmount, 2, 1, 1, 4);

        labellLabel = new QLabel(SendCoinsEntry);
        labellLabel->setObjectName(QString::fromUtf8("labellLabel"));

        gridLayout->addWidget(labellLabel, 1, 0, 1, 1);

        messageLabel = new QLabel(SendCoinsEntry);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        amountLabel = new QLabel(SendCoinsEntry);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));

        gridLayout->addWidget(amountLabel, 2, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(6);
        payToLayout->setObjectName(QString::fromUtf8("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QString::fromUtf8("payTo"));

        payToLayout->addWidget(payTo);


        gridLayout->addLayout(payToLayout, 0, 1, 1, 1);

        hLine = new QFrame(SendCoinsEntry);
        hLine->setObjectName(QString::fromUtf8("hLine"));
        hLine->setFrameShape(QFrame::HLine);
        hLine->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(hLine, 4, 0, 1, 5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/remove_entry"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon);
        deleteButton->setIconSize(QSize(22, 22));

        horizontalLayout_3->addWidget(deleteButton);

        vLine = new QFrame(SendCoinsEntry);
        vLine->setObjectName(QString::fromUtf8("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(vLine);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon1);
        addressBookButton->setIconSize(QSize(22, 22));

        horizontalLayout_3->addWidget(addressBookButton);

        vLine2 = new QFrame(SendCoinsEntry);
        vLine2->setObjectName(QString::fromUtf8("vLine2"));
        vLine2->setMaximumSize(QSize(1, 22));
        vLine2->setFrameShape(QFrame::VLine);
        vLine2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(vLine2);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon2);
        pasteButton->setIconSize(QSize(22, 22));

        horizontalLayout_3->addWidget(pasteButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 2, 1, 3);

        addAsLabel = new QLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 4);

#if QT_CONFIG(shortcut)
        payToLabel->setBuddy(payTo);
        labellLabel->setBuddy(addAsLabel);
        amountLabel->setBuddy(payAmount);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(payTo, addressBookButton);
        QWidget::setTabOrder(addressBookButton, pasteButton);
        QWidget::setTabOrder(pasteButton, deleteButton);
        QWidget::setTabOrder(deleteButton, addAsLabel);
        QWidget::setTabOrder(addAsLabel, payAmount);

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QWidget *SendCoinsEntry)
    {
#if QT_CONFIG(tooltip)
        messageTextLabel->setToolTip(QCoreApplication::translate("SendCoinsEntry", "A message that was attached to the odan: URI which will be stored with the transaction for your reference. Note: This message will not be sent over the Odan network.", nullptr));
#endif // QT_CONFIG(tooltip)
        payToLabel->setText(QCoreApplication::translate("SendCoinsEntry", "Pay &To:", nullptr));
#if QT_CONFIG(tooltip)
        payAmount->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The amount to send in the selected unit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkboxSubtractFeeFromAmount->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The fee will be deducted from the amount being sent. The recipient will receive less odans than you enter in the amount field. If multiple recipients are selected, the fee is split equally.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkboxSubtractFeeFromAmount->setText(QCoreApplication::translate("SendCoinsEntry", "S&ubtract fee from amount", nullptr));
        useAvailableBalanceButton->setText(QCoreApplication::translate("SendCoinsEntry", "Use available balance", nullptr));
        labellLabel->setText(QCoreApplication::translate("SendCoinsEntry", "&Label:", nullptr));
        messageLabel->setText(QCoreApplication::translate("SendCoinsEntry", "Message:", nullptr));
        amountLabel->setText(QCoreApplication::translate("SendCoinsEntry", "A&mount:", nullptr));
#if QT_CONFIG(tooltip)
        payTo->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The Odan address to send the payment to", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Remove this entry", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QString());
#if QT_CONFIG(tooltip)
        addressBookButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton->setShortcut(QCoreApplication::translate("SendCoinsEntry", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pasteButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Paste address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton->setText(QString());
#if QT_CONFIG(shortcut)
        pasteButton->setShortcut(QCoreApplication::translate("SendCoinsEntry", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        addAsLabel->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to the list of used addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        addAsLabel->setPlaceholderText(QCoreApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to the list of used addresses", nullptr));
        (void)SendCoinsEntry;
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
