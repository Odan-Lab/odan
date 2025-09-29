/********************************************************************************
** Form generated from reading UI file 'tokenitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOKENITEMWIDGET_H
#define UI_TOKENITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/odanpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_TokenItemWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *tokenItemFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *tokenLogo;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetBalance;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tokenName;
    QLabel *tokenBalance;
    QSpacerItem *horizontalSpacer;
    QLabel *senderAddress;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    OdanPushButton *buttonSend;
    OdanPushButton *buttonReceive;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNewToken;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *buttonAdd;

    void setupUi(QWidget *TokenItemWidget)
    {
        if (TokenItemWidget->objectName().isEmpty())
            TokenItemWidget->setObjectName(QString::fromUtf8("TokenItemWidget"));
        TokenItemWidget->resize(654, 107);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TokenItemWidget->sizePolicy().hasHeightForWidth());
        TokenItemWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(TokenItemWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tokenItemFrame = new QFrame(TokenItemWidget);
        tokenItemFrame->setObjectName(QString::fromUtf8("tokenItemFrame"));
        tokenItemFrame->setFrameShape(QFrame::StyledPanel);
        tokenItemFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(tokenItemFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tokenLogo = new QLabel(tokenItemFrame);
        tokenLogo->setObjectName(QString::fromUtf8("tokenLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tokenLogo->sizePolicy().hasHeightForWidth());
        tokenLogo->setSizePolicy(sizePolicy1);
        tokenLogo->setMinimumSize(QSize(40, 40));
        tokenLogo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(tokenLogo);

        stackedWidget = new QStackedWidget(tokenItemFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_4 = new QHBoxLayout(page);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widgetBalance = new QWidget(page);
        widgetBalance->setObjectName(QString::fromUtf8("widgetBalance"));
        horizontalLayout_2 = new QHBoxLayout(widgetBalance);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tokenName = new QLabel(widgetBalance);
        tokenName->setObjectName(QString::fromUtf8("tokenName"));
        tokenName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(tokenName);

        tokenBalance = new QLabel(widgetBalance);
        tokenBalance->setObjectName(QString::fromUtf8("tokenBalance"));
        tokenBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(tokenBalance);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetBalance);

        senderAddress = new QLabel(page);
        senderAddress->setObjectName(QString::fromUtf8("senderAddress"));
        senderAddress->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(senderAddress);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonSend = new OdanPushButton(page);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));

        horizontalLayout_3->addWidget(buttonSend);

        buttonReceive = new OdanPushButton(page);
        buttonReceive->setObjectName(QString::fromUtf8("buttonReceive"));

        horizontalLayout_3->addWidget(buttonReceive);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_5 = new QHBoxLayout(page_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelNewToken = new QLabel(page_2);
        labelNewToken->setObjectName(QString::fromUtf8("labelNewToken"));

        horizontalLayout_5->addWidget(labelNewToken);

        horizontalSpacer_3 = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        buttonAdd = new QToolButton(page_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(buttonAdd);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_2->addWidget(tokenItemFrame);


        retranslateUi(TokenItemWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TokenItemWidget);
    } // setupUi

    void retranslateUi(QWidget *TokenItemWidget)
    {
        TokenItemWidget->setWindowTitle(QCoreApplication::translate("TokenItemWidget", "Form", nullptr));
        tokenName->setText(QCoreApplication::translate("TokenItemWidget", "name", nullptr));
        tokenBalance->setText(QCoreApplication::translate("TokenItemWidget", "100000.0000 TKN", nullptr));
        senderAddress->setText(QCoreApplication::translate("TokenItemWidget", "address", nullptr));
        buttonSend->setText(QCoreApplication::translate("TokenItemWidget", "Send", nullptr));
        buttonReceive->setText(QCoreApplication::translate("TokenItemWidget", "Receive", nullptr));
        labelNewToken->setText(QCoreApplication::translate("TokenItemWidget", "Add new tokens", nullptr));
        buttonAdd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TokenItemWidget: public Ui_TokenItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOKENITEMWIDGET_H
