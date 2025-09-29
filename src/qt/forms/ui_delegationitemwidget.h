/********************************************************************************
** Form generated from reading UI file 'delegationitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELEGATIONITEMWIDGET_H
#define UI_DELEGATIONITEMWIDGET_H

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

QT_BEGIN_NAMESPACE

class Ui_DelegationItemWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *delegationItemFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *delegationLogo;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetDelegation;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFee;
    QLabel *labelStaker;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAddress;
    QSpacerItem *verticalSpacer;
    QWidget *vLineAssets;
    QWidget *widgetStakingAssets;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAssetsText;
    QLabel *labelAssets;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *buttonSplit;
    QToolButton *buttonRemove;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNewDelegation;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *buttonRestore;
    QToolButton *buttonAdd;

    void setupUi(QWidget *DelegationItemWidget)
    {
        if (DelegationItemWidget->objectName().isEmpty())
            DelegationItemWidget->setObjectName(QString::fromUtf8("DelegationItemWidget"));
        DelegationItemWidget->resize(727, 92);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DelegationItemWidget->sizePolicy().hasHeightForWidth());
        DelegationItemWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(DelegationItemWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        delegationItemFrame = new QFrame(DelegationItemWidget);
        delegationItemFrame->setObjectName(QString::fromUtf8("delegationItemFrame"));
        delegationItemFrame->setFrameShape(QFrame::StyledPanel);
        delegationItemFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(delegationItemFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        delegationLogo = new QLabel(delegationItemFrame);
        delegationLogo->setObjectName(QString::fromUtf8("delegationLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(delegationLogo->sizePolicy().hasHeightForWidth());
        delegationLogo->setSizePolicy(sizePolicy1);
        delegationLogo->setMinimumSize(QSize(40, 40));
        delegationLogo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(delegationLogo);

        stackedWidget = new QStackedWidget(delegationItemFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_4 = new QHBoxLayout(page);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 15, -1);
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widgetDelegation = new QWidget(page);
        widgetDelegation->setObjectName(QString::fromUtf8("widgetDelegation"));
        widgetDelegation->setMinimumSize(QSize(280, 0));
        horizontalLayout_2 = new QHBoxLayout(widgetDelegation);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelFee = new QLabel(widgetDelegation);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        labelFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelFee, 0, Qt::AlignLeft);

        labelStaker = new QLabel(widgetDelegation);
        labelStaker->setObjectName(QString::fromUtf8("labelStaker"));
        labelStaker->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelStaker, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addWidget(widgetDelegation, 0, Qt::AlignLeft);

        labelAddress = new QLabel(page);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(labelAddress, 0, Qt::AlignLeft);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        vLineAssets = new QWidget(page);
        vLineAssets->setObjectName(QString::fromUtf8("vLineAssets"));
        vLineAssets->setMinimumSize(QSize(1, 0));

        horizontalLayout_3->addWidget(vLineAssets);

        widgetStakingAssets = new QWidget(page);
        widgetStakingAssets->setObjectName(QString::fromUtf8("widgetStakingAssets"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetStakingAssets->sizePolicy().hasHeightForWidth());
        widgetStakingAssets->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(widgetStakingAssets);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 0, 15, 0);
        labelAssetsText = new QLabel(widgetStakingAssets);
        labelAssetsText->setObjectName(QString::fromUtf8("labelAssetsText"));
        labelAssetsText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(labelAssetsText);

        labelAssets = new QLabel(widgetStakingAssets);
        labelAssets->setObjectName(QString::fromUtf8("labelAssets"));
        QFont font;
        font.setPointSize(13);
        labelAssets->setFont(font);
        labelAssets->setCursor(QCursor(Qt::IBeamCursor));
        labelAssets->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ODAN"));
        labelAssets->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelAssets->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(labelAssets);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelStakeText = new QLabel(widgetStakingAssets);
        labelStakeText->setObjectName(QString::fromUtf8("labelStakeText"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelStakeText->sizePolicy().hasHeightForWidth());
        labelStakeText->setSizePolicy(sizePolicy3);
        labelStakeText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(labelStakeText);

        labelStake = new QLabel(widgetStakingAssets);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(labelStake);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_3->addWidget(widgetStakingAssets);

        horizontalSpacer_2 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonSplit = new QToolButton(page);
        buttonSplit->setObjectName(QString::fromUtf8("buttonSplit"));
        buttonSplit->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(buttonSplit);

        buttonRemove = new QToolButton(page);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));
        buttonRemove->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(buttonRemove);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_5 = new QHBoxLayout(page_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelNewDelegation = new QLabel(page_2);
        labelNewDelegation->setObjectName(QString::fromUtf8("labelNewDelegation"));

        horizontalLayout_5->addWidget(labelNewDelegation);

        horizontalSpacer_3 = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        buttonRestore = new QToolButton(page_2);
        buttonRestore->setObjectName(QString::fromUtf8("buttonRestore"));
        buttonRestore->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(buttonRestore);

        buttonAdd = new QToolButton(page_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(buttonAdd);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_2->addWidget(delegationItemFrame);


        retranslateUi(DelegationItemWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DelegationItemWidget);
    } // setupUi

    void retranslateUi(QWidget *DelegationItemWidget)
    {
        DelegationItemWidget->setWindowTitle(QCoreApplication::translate("DelegationItemWidget", "Form", nullptr));
        labelFee->setText(QCoreApplication::translate("DelegationItemWidget", "fee", nullptr));
        labelStaker->setText(QCoreApplication::translate("DelegationItemWidget", "staker", nullptr));
        labelAddress->setText(QCoreApplication::translate("DelegationItemWidget", "address", nullptr));
        labelAssetsText->setText(QCoreApplication::translate("DelegationItemWidget", "Offline staking assets", nullptr));
#if QT_CONFIG(tooltip)
        labelAssets->setToolTip(QCoreApplication::translate("DelegationItemWidget", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelStakeText->setText(QCoreApplication::translate("DelegationItemWidget", "Stake:", nullptr));
        labelStake->setText(QCoreApplication::translate("DelegationItemWidget", "0.000\342\200\211000\342\200\21100 ODAN", nullptr));
        buttonSplit->setText(QString());
        buttonRemove->setText(QString());
        labelNewDelegation->setText(QCoreApplication::translate("DelegationItemWidget", "Add new delegations", nullptr));
        buttonRestore->setText(QString());
        buttonAdd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DelegationItemWidget: public Ui_DelegationItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELEGATIONITEMWIDGET_H
