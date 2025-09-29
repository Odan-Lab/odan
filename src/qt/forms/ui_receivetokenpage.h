/********************************************************************************
** Form generated from reading UI file 'receivetokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVETOKENPAGE_H
#define UI_RECEIVETOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qrimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveTokenPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QWidget *widgetQRMargin;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetQRFrame;
    QVBoxLayout *verticalLayout_2;
    QRImageWidget *lblQRCode;
    QWidget *widgetAddress;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelTokenAddressText;
    QLabel *labelTokenAddress;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *copyAddressButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *ReceiveTokenPage)
    {
        if (ReceiveTokenPage->objectName().isEmpty())
            ReceiveTokenPage->setObjectName(QString::fromUtf8("ReceiveTokenPage"));
        ReceiveTokenPage->setEnabled(true);
        ReceiveTokenPage->resize(642, 396);
        verticalLayout_4 = new QVBoxLayout(ReceiveTokenPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 30, 30, 30);
        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        widgetQRMargin = new QWidget(ReceiveTokenPage);
        widgetQRMargin->setObjectName(QString::fromUtf8("widgetQRMargin"));
        verticalLayout_3 = new QVBoxLayout(widgetQRMargin);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(40, 40, 40, 40);
        widgetQRFrame = new QWidget(widgetQRMargin);
        widgetQRFrame->setObjectName(QString::fromUtf8("widgetQRFrame"));
        verticalLayout_2 = new QVBoxLayout(widgetQRFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblQRCode = new QRImageWidget(widgetQRFrame);
        lblQRCode->setObjectName(QString::fromUtf8("lblQRCode"));
        lblQRCode->setMinimumSize(QSize(170, 170));
        lblQRCode->setMaximumSize(QSize(170, 170));
        lblQRCode->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblQRCode);


        verticalLayout_3->addWidget(widgetQRFrame);


        verticalLayout_4->addWidget(widgetQRMargin, 0, Qt::AlignHCenter);

        widgetAddress = new QWidget(ReceiveTokenPage);
        widgetAddress->setObjectName(QString::fromUtf8("widgetAddress"));
        verticalLayout = new QVBoxLayout(widgetAddress);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labelTokenAddressText = new QLabel(widgetAddress);
        labelTokenAddressText->setObjectName(QString::fromUtf8("labelTokenAddressText"));

        horizontalLayout_2->addWidget(labelTokenAddressText);

        labelTokenAddress = new QLabel(widgetAddress);
        labelTokenAddress->setObjectName(QString::fromUtf8("labelTokenAddress"));
        labelTokenAddress->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelTokenAddress);

        horizontalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        copyAddressButton = new QPushButton(widgetAddress);
        copyAddressButton->setObjectName(QString::fromUtf8("copyAddressButton"));

        verticalLayout->addWidget(copyAddressButton, 0, Qt::AlignHCenter);


        verticalLayout_4->addWidget(widgetAddress);

        verticalSpacer_5 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        retranslateUi(ReceiveTokenPage);

        QMetaObject::connectSlotsByName(ReceiveTokenPage);
    } // setupUi

    void retranslateUi(QDialog *ReceiveTokenPage)
    {
        ReceiveTokenPage->setWindowTitle(QCoreApplication::translate("ReceiveTokenPage", "Receive", nullptr));
        lblQRCode->setText(QString());
        labelTokenAddressText->setText(QCoreApplication::translate("ReceiveTokenPage", "Address", nullptr));
        labelTokenAddress->setText(QString());
        copyAddressButton->setText(QCoreApplication::translate("ReceiveTokenPage", "Copy Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiveTokenPage: public Ui_ReceiveTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVETOKENPAGE_H
