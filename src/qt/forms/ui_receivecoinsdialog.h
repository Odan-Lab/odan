/********************************************************************************
** Form generated from reading UI file 'receivecoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVECOINSDIALOG_H
#define UI_RECEIVECOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/odanpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetPayment;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameRequest;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *reqMessage;
    QLineEdit *reqLabel;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    BitcoinAmountField *reqAmount;
    QComboBox *addressType;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    OdanPushButton *showRequestButton;
    QSpacerItem *horizontalSpacer_4;
    OdanPushButton *removeRequestButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTableView *recentRequestsView;
    QWidget *buttonsContainerWhite;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *receiveButton;

    void setupUi(QDialog *ReceiveCoinsDialog)
    {
        if (ReceiveCoinsDialog->objectName().isEmpty())
            ReceiveCoinsDialog->setObjectName(QString::fromUtf8("ReceiveCoinsDialog"));
        ReceiveCoinsDialog->resize(860, 510);
        verticalLayout = new QVBoxLayout(ReceiveCoinsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetPayment = new QWidget(ReceiveCoinsDialog);
        widgetPayment->setObjectName(QString::fromUtf8("widgetPayment"));
        verticalLayout_3 = new QVBoxLayout(widgetPayment);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 30, 30, 30);
        frameRequest = new QFrame(widgetPayment);
        frameRequest->setObjectName(QString::fromUtf8("frameRequest"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameRequest->sizePolicy().hasHeightForWidth());
        frameRequest->setSizePolicy(sizePolicy);
        frameRequest->setFrameShape(QFrame::StyledPanel);
        frameRequest->setFrameShadow(QFrame::Sunken);
        horizontalLayout_4 = new QHBoxLayout(frameRequest);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        label_2 = new QLabel(frameRequest);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(frameRequest);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        reqMessage = new QLineEdit(frameRequest);
        reqMessage->setObjectName(QString::fromUtf8("reqMessage"));

        gridLayout->addWidget(reqMessage, 5, 2, 1, 1);

        reqLabel = new QLineEdit(frameRequest);
        reqLabel->setObjectName(QString::fromUtf8("reqLabel"));

        gridLayout->addWidget(reqLabel, 3, 2, 1, 1);

        label = new QLabel(frameRequest);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        reqAmount = new BitcoinAmountField(frameRequest);
        reqAmount->setObjectName(QString::fromUtf8("reqAmount"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reqAmount->sizePolicy().hasHeightForWidth());
        reqAmount->setSizePolicy(sizePolicy1);
        reqAmount->setMinimumSize(QSize(80, 0));

        horizontalLayout_5->addWidget(reqAmount);

        addressType = new QComboBox(frameRequest);
        addressType->setObjectName(QString::fromUtf8("addressType"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addressType->sizePolicy().hasHeightForWidth());
        addressType->setSizePolicy(sizePolicy2);
        addressType->setMaximumSize(QSize(1000, 16777215));
        addressType->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(addressType);


        gridLayout->addLayout(horizontalLayout_5, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 3);

        label_5 = new QLabel(frameRequest);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 2, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(frameRequest);

        verticalSpacer_2 = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widgetPayment);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        showRequestButton = new OdanPushButton(widgetPayment);
        showRequestButton->setObjectName(QString::fromUtf8("showRequestButton"));
        showRequestButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/show"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestButton->setIcon(icon);
        showRequestButton->setIconSize(QSize(22, 16));
        showRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(showRequestButton);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        removeRequestButton = new OdanPushButton(widgetPayment);
        removeRequestButton->setObjectName(QString::fromUtf8("removeRequestButton"));
        removeRequestButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        removeRequestButton->setIcon(icon1);
        removeRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(removeRequestButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        frame = new QFrame(widgetPayment);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        recentRequestsView = new QTableView(frame);
        recentRequestsView->setObjectName(QString::fromUtf8("recentRequestsView"));
        recentRequestsView->setContextMenuPolicy(Qt::CustomContextMenu);
        recentRequestsView->setTabKeyNavigation(false);
        recentRequestsView->setSortingEnabled(true);

        verticalLayout_2->addWidget(recentRequestsView);


        verticalLayout_3->addWidget(frame);


        verticalLayout->addWidget(widgetPayment);

        buttonsContainerWhite = new QWidget(ReceiveCoinsDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        verticalLayout_4 = new QVBoxLayout(buttonsContainerWhite);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 15, 30, 15);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        receiveButton = new QPushButton(buttonsContainerWhite);
        receiveButton->setObjectName(QString::fromUtf8("receiveButton"));
        receiveButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(receiveButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(buttonsContainerWhite);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(reqLabel);
        label_3->setBuddy(reqMessage);
        label->setBuddy(reqAmount);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(showRequestButton, removeRequestButton);

        retranslateUi(ReceiveCoinsDialog);

        receiveButton->setDefault(true);


        QMetaObject::connectSlotsByName(ReceiveCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveCoinsDialog)
    {
        ReceiveCoinsDialog->setWindowTitle(QCoreApplication::translate("ReceiveCoinsDialog", "Request payment", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("ReceiveCoinsDialog", "&Label:", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request, which will be displayed when the request is opened. Note: The message will not be sent with the payment over the Odan network.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("ReceiveCoinsDialog", "&Message:", nullptr));
#if QT_CONFIG(tooltip)
        reqMessage->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional message that is attached to the payment request and may be displayed to the sender.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        reqLabel->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address (used by you to identify an invoice).  It is also attached to the payment request.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ReceiveCoinsDialog", "&Amount:", nullptr));
#if QT_CONFIG(tooltip)
        reqAmount->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressType->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "Native segwit addresses (aka Bech32 or BIP-173) reduce your transaction fees later on and offer better protection against typos, but old wallets don't support them. When unchecked, an address compatible with older wallets will be created instead.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("ReceiveCoinsDialog", "Use this form to request payments. All fields are <b>optional</b>.", nullptr));
        label_6->setText(QCoreApplication::translate("ReceiveCoinsDialog", "Requested payments history", nullptr));
#if QT_CONFIG(tooltip)
        showRequestButton->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "Show the selected request (does the same as double clicking an entry)", nullptr));
#endif // QT_CONFIG(tooltip)
        showRequestButton->setText(QCoreApplication::translate("ReceiveCoinsDialog", "Show", nullptr));
#if QT_CONFIG(tooltip)
        removeRequestButton->setToolTip(QCoreApplication::translate("ReceiveCoinsDialog", "Remove the selected entries from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        removeRequestButton->setText(QCoreApplication::translate("ReceiveCoinsDialog", "Remove", nullptr));
        cancelButton->setText(QCoreApplication::translate("ReceiveCoinsDialog", "&Cancel", nullptr));
        receiveButton->setText(QCoreApplication::translate("ReceiveCoinsDialog", "S&ubmit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiveCoinsDialog: public Ui_ReceiveCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVECOINSDIALOG_H
