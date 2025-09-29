/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/odanpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QLabel *labelAlerts;
    QVBoxLayout *verticalLayout_6;
    QFrame *frameBalances;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetStatus;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelLogo;
    QToolButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widgetWallet;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetTotal;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelSpendable;
    QLabel *labelTotal;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widgetBalance;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QWidget *widgetPending;
    QHBoxLayout *horizontalLayout_3;
    QFrame *vLine;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QWidget *widgetImmature;
    QHBoxLayout *horizontalLayout_4;
    QFrame *vLine_2;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QWidget *widgetStake;
    QHBoxLayout *horizontalLayout_7;
    QFrame *vLine_3;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widgetWatch;
    QVBoxLayout *verticalLayout_4;
    QWidget *widgetWatchTotal;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QLabel *labelWatchonly;
    QLabel *labelWatchTotal;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widgetWatchAvailable;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelWatchAvailableText;
    QLabel *labelWatchAvailable;
    QWidget *widgetWatchPending;
    QHBoxLayout *horizontalLayout_10;
    QFrame *vLine_4;
    QLabel *labelWatchPendingText;
    QLabel *labelWatchPending;
    QWidget *widgetWatchImmature;
    QHBoxLayout *horizontalLayout_11;
    QFrame *vLine_5;
    QLabel *labelWatchImmatureText;
    QLabel *labelWatchImmature;
    QWidget *widgetWatchStake;
    QHBoxLayout *horizontalLayout_12;
    QFrame *vLine_6;
    QLabel *labelWatchStakeText;
    QLabel *labelWatchStake;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widgetTransaction;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_15;
    OdanPushButton *buttonSend;
    OdanPushButton *buttonReceive;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QFrame *hLine;
    QSpacerItem *verticalSpacer_4;
    QWidget *widgetRecent;
    QVBoxLayout *verticalLayout;
    QWidget *widgetListTransaction;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelRecentTransactions;
    QToolButton *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *showMoreButton;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameRecentTransactions;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_header;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelDate;
    QLabel *labelType;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelAddress;
    QLabel *labelAmount;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(738, 453);
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setGeometry(QRect(0, 0, 16, 23));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);
        verticalLayout_6 = new QVBoxLayout(OverviewPage);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frameBalances = new QFrame(OverviewPage);
        frameBalances->setObjectName(QString::fromUtf8("frameBalances"));
        frameBalances->setFrameShape(QFrame::StyledPanel);
        frameBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frameBalances);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widgetStatus = new QWidget(frameBalances);
        widgetStatus->setObjectName(QString::fromUtf8("widgetStatus"));
        horizontalLayout_16 = new QHBoxLayout(widgetStatus);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);

        labelLogo = new QLabel(widgetStatus);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy);
        labelLogo->setMinimumSize(QSize(32, 32));

        horizontalLayout_16->addWidget(labelLogo);

        labelWalletStatus = new QToolButton(widgetStatus);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/warning"), QSize(), QIcon::Disabled, QIcon::Off);
        labelWalletStatus->setIcon(icon);
        labelWalletStatus->setIconSize(QSize(24, 24));
        labelWalletStatus->setProperty("flat", QVariant(false));

        horizontalLayout_16->addWidget(labelWalletStatus);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);


        verticalLayout_5->addWidget(widgetStatus);

        widgetWallet = new QWidget(frameBalances);
        widgetWallet->setObjectName(QString::fromUtf8("widgetWallet"));
        verticalLayout_2 = new QVBoxLayout(widgetWallet);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widgetTotal = new QWidget(widgetWallet);
        widgetTotal->setObjectName(QString::fromUtf8("widgetTotal"));
        horizontalLayout = new QHBoxLayout(widgetTotal);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        labelSpendable = new QLabel(widgetTotal);
        labelSpendable->setObjectName(QString::fromUtf8("labelSpendable"));
        QFont font;
        font.setPointSize(23);
        labelSpendable->setFont(font);
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelSpendable);

        labelTotal = new QLabel(widgetTotal);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ODAN"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelTotal);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout_2->addWidget(widgetTotal);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        widgetBalance = new QWidget(widgetWallet);
        widgetBalance->setObjectName(QString::fromUtf8("widgetBalance"));
        horizontalLayout_2 = new QHBoxLayout(widgetBalance);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelBalanceText = new QLabel(widgetBalance);
        labelBalanceText->setObjectName(QString::fromUtf8("labelBalanceText"));
        labelBalanceText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelBalanceText);

        labelBalance = new QLabel(widgetBalance);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout_13->addWidget(widgetBalance);

        widgetPending = new QWidget(widgetWallet);
        widgetPending->setObjectName(QString::fromUtf8("widgetPending"));
        horizontalLayout_3 = new QHBoxLayout(widgetPending);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 0, 0, 0);
        vLine = new QFrame(widgetPending);
        vLine->setObjectName(QString::fromUtf8("vLine"));
        vLine->setMaximumSize(QSize(1, 12));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(vLine);

        labelPendingText = new QLabel(widgetPending);
        labelPendingText->setObjectName(QString::fromUtf8("labelPendingText"));
        labelPendingText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelPendingText);

        labelUnconfirmed = new QLabel(widgetPending);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(labelUnconfirmed);


        horizontalLayout_13->addWidget(widgetPending);

        widgetImmature = new QWidget(widgetWallet);
        widgetImmature->setObjectName(QString::fromUtf8("widgetImmature"));
        horizontalLayout_4 = new QHBoxLayout(widgetImmature);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 0, 0, 0);
        vLine_2 = new QFrame(widgetImmature);
        vLine_2->setObjectName(QString::fromUtf8("vLine_2"));
        vLine_2->setMaximumSize(QSize(1, 12));
        vLine_2->setFrameShape(QFrame::VLine);
        vLine_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(vLine_2);

        labelImmatureText = new QLabel(widgetImmature);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        labelImmatureText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelImmatureText);

        labelImmature = new QLabel(widgetImmature);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(labelImmature);


        horizontalLayout_13->addWidget(widgetImmature);

        widgetStake = new QWidget(widgetWallet);
        widgetStake->setObjectName(QString::fromUtf8("widgetStake"));
        horizontalLayout_7 = new QHBoxLayout(widgetStake);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 0, 0, 0);
        vLine_3 = new QFrame(widgetStake);
        vLine_3->setObjectName(QString::fromUtf8("vLine_3"));
        vLine_3->setMaximumSize(QSize(1, 12));
        vLine_3->setFrameShape(QFrame::VLine);
        vLine_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(vLine_3);

        labelStakeText = new QLabel(widgetStake);
        labelStakeText->setObjectName(QString::fromUtf8("labelStakeText"));
        labelStakeText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(labelStakeText);

        labelStake = new QLabel(widgetStake);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(labelStake);


        horizontalLayout_13->addWidget(widgetStake);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_13);


        verticalLayout_5->addWidget(widgetWallet);

        widgetWatch = new QWidget(frameBalances);
        widgetWatch->setObjectName(QString::fromUtf8("widgetWatch"));
        verticalLayout_4 = new QVBoxLayout(widgetWatch);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        widgetWatchTotal = new QWidget(widgetWatch);
        widgetWatchTotal->setObjectName(QString::fromUtf8("widgetWatchTotal"));
        horizontalLayout_8 = new QHBoxLayout(widgetWatchTotal);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        labelWatchonly = new QLabel(widgetWatchTotal);
        labelWatchonly->setObjectName(QString::fromUtf8("labelWatchonly"));
        labelWatchonly->setFont(font);
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(labelWatchonly);

        labelWatchTotal = new QLabel(widgetWatchTotal);
        labelWatchTotal->setObjectName(QString::fromUtf8("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ODAN"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(labelWatchTotal);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        verticalLayout_4->addWidget(widgetWatchTotal);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);

        widgetWatchAvailable = new QWidget(widgetWatch);
        widgetWatchAvailable->setObjectName(QString::fromUtf8("widgetWatchAvailable"));
        horizontalLayout_9 = new QHBoxLayout(widgetWatchAvailable);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        labelWatchAvailableText = new QLabel(widgetWatchAvailable);
        labelWatchAvailableText->setObjectName(QString::fromUtf8("labelWatchAvailableText"));
        labelWatchAvailableText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(labelWatchAvailableText);

        labelWatchAvailable = new QLabel(widgetWatchAvailable);
        labelWatchAvailable->setObjectName(QString::fromUtf8("labelWatchAvailable"));
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(labelWatchAvailable);


        horizontalLayout_14->addWidget(widgetWatchAvailable);

        widgetWatchPending = new QWidget(widgetWatch);
        widgetWatchPending->setObjectName(QString::fromUtf8("widgetWatchPending"));
        horizontalLayout_10 = new QHBoxLayout(widgetWatchPending);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(6, 0, 0, 0);
        vLine_4 = new QFrame(widgetWatchPending);
        vLine_4->setObjectName(QString::fromUtf8("vLine_4"));
        vLine_4->setMaximumSize(QSize(1, 12));
        vLine_4->setFrameShape(QFrame::VLine);
        vLine_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(vLine_4);

        labelWatchPendingText = new QLabel(widgetWatchPending);
        labelWatchPendingText->setObjectName(QString::fromUtf8("labelWatchPendingText"));
        labelWatchPendingText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(labelWatchPendingText);

        labelWatchPending = new QLabel(widgetWatchPending);
        labelWatchPending->setObjectName(QString::fromUtf8("labelWatchPending"));
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_10->addWidget(labelWatchPending);


        horizontalLayout_14->addWidget(widgetWatchPending);

        widgetWatchImmature = new QWidget(widgetWatch);
        widgetWatchImmature->setObjectName(QString::fromUtf8("widgetWatchImmature"));
        horizontalLayout_11 = new QHBoxLayout(widgetWatchImmature);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(6, 0, 0, 0);
        vLine_5 = new QFrame(widgetWatchImmature);
        vLine_5->setObjectName(QString::fromUtf8("vLine_5"));
        vLine_5->setMaximumSize(QSize(1, 12));
        vLine_5->setFrameShape(QFrame::VLine);
        vLine_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(vLine_5);

        labelWatchImmatureText = new QLabel(widgetWatchImmature);
        labelWatchImmatureText->setObjectName(QString::fromUtf8("labelWatchImmatureText"));
        labelWatchImmatureText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(labelWatchImmatureText);

        labelWatchImmature = new QLabel(widgetWatchImmature);
        labelWatchImmature->setObjectName(QString::fromUtf8("labelWatchImmature"));
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_11->addWidget(labelWatchImmature);


        horizontalLayout_14->addWidget(widgetWatchImmature);

        widgetWatchStake = new QWidget(widgetWatch);
        widgetWatchStake->setObjectName(QString::fromUtf8("widgetWatchStake"));
        horizontalLayout_12 = new QHBoxLayout(widgetWatchStake);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(6, 0, 0, 0);
        vLine_6 = new QFrame(widgetWatchStake);
        vLine_6->setObjectName(QString::fromUtf8("vLine_6"));
        vLine_6->setMaximumSize(QSize(1, 12));
        vLine_6->setFrameShape(QFrame::VLine);
        vLine_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(vLine_6);

        labelWatchStakeText = new QLabel(widgetWatchStake);
        labelWatchStakeText->setObjectName(QString::fromUtf8("labelWatchStakeText"));
        labelWatchStakeText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(labelWatchStakeText);

        labelWatchStake = new QLabel(widgetWatchStake);
        labelWatchStake->setObjectName(QString::fromUtf8("labelWatchStake"));
        labelWatchStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_12->addWidget(labelWatchStake);


        horizontalLayout_14->addWidget(widgetWatchStake);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);


        verticalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout_5->addWidget(widgetWatch);

        widgetTransaction = new QWidget(frameBalances);
        widgetTransaction->setObjectName(QString::fromUtf8("widgetTransaction"));
        horizontalLayout_15 = new QHBoxLayout(widgetTransaction);
        horizontalLayout_15->setSpacing(20);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, 35, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        buttonSend = new OdanPushButton(widgetTransaction);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));

        horizontalLayout_15->addWidget(buttonSend);

        buttonReceive = new OdanPushButton(widgetTransaction);
        buttonReceive->setObjectName(QString::fromUtf8("buttonReceive"));

        horizontalLayout_15->addWidget(buttonReceive);

        horizontalSpacer_16 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_16);


        verticalLayout_5->addWidget(widgetTransaction);


        verticalLayout_6->addWidget(frameBalances);

        verticalSpacer_5 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_5);

        hLine = new QFrame(OverviewPage);
        hLine->setObjectName(QString::fromUtf8("hLine"));
        hLine->setFrameShape(QFrame::HLine);
        hLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(hLine);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        widgetRecent = new QWidget(OverviewPage);
        widgetRecent->setObjectName(QString::fromUtf8("widgetRecent"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetRecent->sizePolicy().hasHeightForWidth());
        widgetRecent->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(widgetRecent);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetListTransaction = new QWidget(widgetRecent);
        widgetListTransaction->setObjectName(QString::fromUtf8("widgetListTransaction"));
        verticalLayout_1 = new QVBoxLayout(widgetListTransaction);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(9, -1, 9, 3);
        labelRecentTransactions = new QLabel(widgetListTransaction);
        labelRecentTransactions->setObjectName(QString::fromUtf8("labelRecentTransactions"));

        horizontalLayout_6->addWidget(labelRecentTransactions);

        labelTransactionsStatus = new QToolButton(widgetListTransaction);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setEnabled(true);
        labelTransactionsStatus->setIcon(icon);
        labelTransactionsStatus->setIconSize(QSize(24, 24));
        labelTransactionsStatus->setProperty("flat", QVariant(false));

        horizontalLayout_6->addWidget(labelTransactionsStatus);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        showMoreButton = new QPushButton(widgetListTransaction);
        showMoreButton->setObjectName(QString::fromUtf8("showMoreButton"));

        horizontalLayout_6->addWidget(showMoreButton);


        verticalLayout_1->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frameRecentTransactions = new QFrame(widgetListTransaction);
        frameRecentTransactions->setObjectName(QString::fromUtf8("frameRecentTransactions"));
        frameRecentTransactions->setFrameShape(QFrame::StyledPanel);
        frameRecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frameRecentTransactions);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        widget_header = new QWidget(frameRecentTransactions);
        widget_header->setObjectName(QString::fromUtf8("widget_header"));
        horizontalLayout_5 = new QHBoxLayout(widget_header);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        labelDate = new QLabel(widget_header);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));

        horizontalLayout_5->addWidget(labelDate);

        labelType = new QLabel(widget_header);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        horizontalLayout_5->addWidget(labelType);

        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        labelAddress = new QLabel(widget_header);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        horizontalLayout_5->addWidget(labelAddress);

        labelAmount = new QLabel(widget_header);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        labelAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelAmount);


        verticalLayout_8->addWidget(widget_header);

        listTransactions = new QListView(frameRecentTransactions);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_8->addWidget(listTransactions);


        verticalLayout_3->addWidget(frameRecentTransactions);


        verticalLayout_1->addLayout(verticalLayout_3);


        verticalLayout->addWidget(widgetListTransaction);


        verticalLayout_6->addWidget(widgetRecent);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QCoreApplication::translate("OverviewPage", "Form", nullptr));
#if QT_CONFIG(tooltip)
        labelWalletStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Odan network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWalletStatus->setText(QString());
        labelSpendable->setText(QCoreApplication::translate("OverviewPage", "Spendable:", nullptr));
#if QT_CONFIG(tooltip)
        labelTotal->setToolTip(QCoreApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelBalanceText->setText(QCoreApplication::translate("OverviewPage", "Available:", nullptr));
#if QT_CONFIG(tooltip)
        labelBalance->setToolTip(QCoreApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPendingText->setText(QCoreApplication::translate("OverviewPage", "Pending:", nullptr));
#if QT_CONFIG(tooltip)
        labelUnconfirmed->setToolTip(QCoreApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelImmatureText->setText(QCoreApplication::translate("OverviewPage", "Immature:", nullptr));
#if QT_CONFIG(tooltip)
        labelImmature->setToolTip(QCoreApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_CONFIG(tooltip)
        labelStakeText->setText(QCoreApplication::translate("OverviewPage", "Stake:", nullptr));
        labelStake->setText(QCoreApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100", nullptr));
        labelWatchonly->setText(QCoreApplication::translate("OverviewPage", "Watch-only:", nullptr));
#if QT_CONFIG(tooltip)
        labelWatchTotal->setToolTip(QCoreApplication::translate("OverviewPage", "Current total balance in watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWatchAvailableText->setText(QCoreApplication::translate("OverviewPage", "Available:", nullptr));
#if QT_CONFIG(tooltip)
        labelWatchAvailable->setToolTip(QCoreApplication::translate("OverviewPage", "Your current balance in watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWatchPendingText->setText(QCoreApplication::translate("OverviewPage", "Pending:", nullptr));
#if QT_CONFIG(tooltip)
        labelWatchPending->setToolTip(QCoreApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWatchImmatureText->setText(QCoreApplication::translate("OverviewPage", "Immature:", nullptr));
#if QT_CONFIG(tooltip)
        labelWatchImmature->setToolTip(QCoreApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWatchStakeText->setText(QCoreApplication::translate("OverviewPage", "Stake:", nullptr));
        labelWatchStake->setText(QCoreApplication::translate("OverviewPage", "0.000\342\200\211000\342\200\21100", nullptr));
        buttonSend->setText(QCoreApplication::translate("OverviewPage", "Send", nullptr));
        buttonReceive->setText(QCoreApplication::translate("OverviewPage", "Receive", nullptr));
        labelRecentTransactions->setText(QCoreApplication::translate("OverviewPage", "RecentTransactions", nullptr));
#if QT_CONFIG(tooltip)
        labelTransactionsStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Odan network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTransactionsStatus->setText(QString());
        showMoreButton->setText(QCoreApplication::translate("OverviewPage", "More", nullptr));
        labelDate->setText(QCoreApplication::translate("OverviewPage", "Date", nullptr));
        labelType->setText(QCoreApplication::translate("OverviewPage", "Type", nullptr));
        labelAddress->setText(QCoreApplication::translate("OverviewPage", "Label", nullptr));
        labelAmount->setText(QCoreApplication::translate("OverviewPage", "Amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
