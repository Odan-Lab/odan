/********************************************************************************
** Form generated from reading UI file 'receiverequestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEREQUESTDIALOG_H
#define UI_RECEIVEREQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qrimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveRequestDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widgetPaymentInformation;
    QVBoxLayout *verticalLayout;
    QLabel *payment_header;
    QWidget *widgetQRMargin;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetQRFrame;
    QVBoxLayout *verticalLayout_6;
    QRImageWidget *qr_code;
    QWidget *widgetAddrData;
    QGridLayout *gridLayout;
    QWidget *widgetURI;
    QHBoxLayout *horizontalLayout_2;
    QLabel *uri_tag;
    QLabel *uri_content;
    QToolButton *btnCopyURI;
    QWidget *widgetAddress;
    QHBoxLayout *horizontalLayout_3;
    QLabel *address_tag;
    QLabel *address_content;
    QToolButton *btnCopyAddress;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRefreshAddress;
    QPushButton *btnVerify;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRequestPayment;
    QPushButton *btnClear;

    void setupUi(QDialog *ReceiveRequestDialog)
    {
        if (ReceiveRequestDialog->objectName().isEmpty())
            ReceiveRequestDialog->setObjectName(QString::fromUtf8("ReceiveRequestDialog"));
        ReceiveRequestDialog->resize(725, 462);
        verticalLayout_2 = new QVBoxLayout(ReceiveRequestDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widgetPaymentInformation = new QWidget(ReceiveRequestDialog);
        widgetPaymentInformation->setObjectName(QString::fromUtf8("widgetPaymentInformation"));
        verticalLayout = new QVBoxLayout(widgetPaymentInformation);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        payment_header = new QLabel(widgetPaymentInformation);
        payment_header->setObjectName(QString::fromUtf8("payment_header"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(payment_header->sizePolicy().hasHeightForWidth());
        payment_header->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(payment_header, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widgetQRMargin = new QWidget(widgetPaymentInformation);
        widgetQRMargin->setObjectName(QString::fromUtf8("widgetQRMargin"));
        sizePolicy.setHeightForWidth(widgetQRMargin->sizePolicy().hasHeightForWidth());
        widgetQRMargin->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(widgetQRMargin);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(40, 40, 40, 40);
        widgetQRFrame = new QWidget(widgetQRMargin);
        widgetQRFrame->setObjectName(QString::fromUtf8("widgetQRFrame"));
        verticalLayout_6 = new QVBoxLayout(widgetQRFrame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        qr_code = new QRImageWidget(widgetQRFrame);
        qr_code->setObjectName(QString::fromUtf8("qr_code"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qr_code->sizePolicy().hasHeightForWidth());
        qr_code->setSizePolicy(sizePolicy1);
        qr_code->setMinimumSize(QSize(170, 170));
        qr_code->setMaximumSize(QSize(170, 170));
        qr_code->setTextFormat(Qt::PlainText);
        qr_code->setAlignment(Qt::AlignCenter);
        qr_code->setWordWrap(true);

        verticalLayout_6->addWidget(qr_code);


        verticalLayout_5->addWidget(widgetQRFrame);


        verticalLayout->addWidget(widgetQRMargin, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widgetAddrData = new QWidget(widgetPaymentInformation);
        widgetAddrData->setObjectName(QString::fromUtf8("widgetAddrData"));
        sizePolicy.setHeightForWidth(widgetAddrData->sizePolicy().hasHeightForWidth());
        widgetAddrData->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widgetAddrData);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetURI = new QWidget(widgetAddrData);
        widgetURI->setObjectName(QString::fromUtf8("widgetURI"));
        horizontalLayout_2 = new QHBoxLayout(widgetURI);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        uri_tag = new QLabel(widgetURI);
        uri_tag->setObjectName(QString::fromUtf8("uri_tag"));

        horizontalLayout_2->addWidget(uri_tag);

        uri_content = new QLabel(widgetURI);
        uri_content->setObjectName(QString::fromUtf8("uri_content"));
        uri_content->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(uri_content);


        gridLayout->addWidget(widgetURI, 0, 0, 1, 1, Qt::AlignLeft);

        btnCopyURI = new QToolButton(widgetAddrData);
        btnCopyURI->setObjectName(QString::fromUtf8("btnCopyURI"));

        gridLayout->addWidget(btnCopyURI, 0, 1, 1, 1);

        widgetAddress = new QWidget(widgetAddrData);
        widgetAddress->setObjectName(QString::fromUtf8("widgetAddress"));
        horizontalLayout_3 = new QHBoxLayout(widgetAddress);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        address_tag = new QLabel(widgetAddress);
        address_tag->setObjectName(QString::fromUtf8("address_tag"));

        horizontalLayout_3->addWidget(address_tag);

        address_content = new QLabel(widgetAddress);
        address_content->setObjectName(QString::fromUtf8("address_content"));
        address_content->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(address_content);


        gridLayout->addWidget(widgetAddress, 1, 0, 1, 1, Qt::AlignLeft);

        btnCopyAddress = new QToolButton(widgetAddrData);
        btnCopyAddress->setObjectName(QString::fromUtf8("btnCopyAddress"));

        gridLayout->addWidget(btnCopyAddress, 1, 1, 1, 1);


        verticalLayout->addWidget(widgetAddrData, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addWidget(widgetPaymentInformation);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(ReceiveRequestDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        verticalLayout_4 = new QVBoxLayout(buttonsContainerWhite);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 15, 30, 15);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnRefreshAddress = new QPushButton(buttonsContainerWhite);
        btnRefreshAddress->setObjectName(QString::fromUtf8("btnRefreshAddress"));

        horizontalLayout->addWidget(btnRefreshAddress);

        btnVerify = new QPushButton(buttonsContainerWhite);
        btnVerify->setObjectName(QString::fromUtf8("btnVerify"));
        btnVerify->setAutoDefault(false);

        horizontalLayout->addWidget(btnVerify);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRequestPayment = new QPushButton(buttonsContainerWhite);
        btnRequestPayment->setObjectName(QString::fromUtf8("btnRequestPayment"));

        horizontalLayout->addWidget(btnRequestPayment);

        btnClear = new QPushButton(buttonsContainerWhite);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(buttonsContainerWhite);


        retranslateUi(ReceiveRequestDialog);

        QMetaObject::connectSlotsByName(ReceiveRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveRequestDialog)
    {
        payment_header->setText(QCoreApplication::translate("ReceiveRequestDialog", "Payment information", nullptr));
#if QT_CONFIG(tooltip)
        qr_code->setToolTip(QCoreApplication::translate("ReceiveRequestDialog", "QR Code", nullptr));
#endif // QT_CONFIG(tooltip)
        qr_code->setText(QCoreApplication::translate("ReceiveRequestDialog", "QR image", nullptr));
        uri_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "URI:", nullptr));
        uri_content->setText(QCoreApplication::translate("ReceiveRequestDialog", "URI", nullptr));
        address_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Address:", nullptr));
        address_content->setText(QCoreApplication::translate("ReceiveRequestDialog", "Address", nullptr));
        btnRefreshAddress->setText(QCoreApplication::translate("ReceiveRequestDialog", "Address Re&fresh", nullptr));
        btnVerify->setText(QCoreApplication::translate("ReceiveRequestDialog", "&Verify", nullptr));
#if QT_CONFIG(tooltip)
        btnVerify->setToolTip(QCoreApplication::translate("ReceiveRequestDialog", "Verify this address on e.g. a hardware wallet screen", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRequestPayment->setText(QCoreApplication::translate("ReceiveRequestDialog", "&Request Payment", nullptr));
        btnClear->setText(QCoreApplication::translate("ReceiveRequestDialog", "Clear &All", nullptr));
        (void)ReceiveRequestDialog;
    } // retranslateUi

};

namespace Ui {
    class ReceiveRequestDialog: public Ui_ReceiveRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEREQUESTDIALOG_H
