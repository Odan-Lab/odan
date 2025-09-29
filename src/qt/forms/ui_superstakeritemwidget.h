/********************************************************************************
** Form generated from reading UI file 'superstakeritemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERSTAKERITEMWIDGET_H
#define UI_SUPERSTAKERITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuperStakerItemWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *superStakerItemFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *superStakerLogo;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetSuperStaker;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFee;
    QLabel *labelStaker;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAddress;
    QPushButton *buttonDelegations;
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
    QToolButton *buttonConfig;
    QToolButton *buttonSplit;
    QToolButton *buttonRemove;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNewSuperStaker;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *buttonRestore;
    QToolButton *buttonAdd;

    void setupUi(QWidget *SuperStakerItemWidget)
    {
        if (SuperStakerItemWidget->objectName().isEmpty())
            SuperStakerItemWidget->setObjectName(QString::fromUtf8("SuperStakerItemWidget"));
        SuperStakerItemWidget->resize(773, 110);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SuperStakerItemWidget->sizePolicy().hasHeightForWidth());
        SuperStakerItemWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(SuperStakerItemWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        superStakerItemFrame = new QFrame(SuperStakerItemWidget);
        superStakerItemFrame->setObjectName(QString::fromUtf8("superStakerItemFrame"));
        superStakerItemFrame->setFrameShape(QFrame::StyledPanel);
        superStakerItemFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(superStakerItemFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        superStakerLogo = new QLabel(superStakerItemFrame);
        superStakerLogo->setObjectName(QString::fromUtf8("superStakerLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(superStakerLogo->sizePolicy().hasHeightForWidth());
        superStakerLogo->setSizePolicy(sizePolicy1);
        superStakerLogo->setMinimumSize(QSize(40, 40));
        superStakerLogo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(superStakerLogo);

        stackedWidget = new QStackedWidget(superStakerItemFrame);
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

        widgetSuperStaker = new QWidget(page);
        widgetSuperStaker->setObjectName(QString::fromUtf8("widgetSuperStaker"));
        widgetSuperStaker->setMinimumSize(QSize(280, 0));
        horizontalLayout_2 = new QHBoxLayout(widgetSuperStaker);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelFee = new QLabel(widgetSuperStaker);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        labelFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelFee, 0, Qt::AlignLeft);

        labelStaker = new QLabel(widgetSuperStaker);
        labelStaker->setObjectName(QString::fromUtf8("labelStaker"));
        labelStaker->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelStaker, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addWidget(widgetSuperStaker, 0, Qt::AlignLeft);

        labelAddress = new QLabel(page);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(labelAddress);

        buttonDelegations = new QPushButton(page);
        buttonDelegations->setObjectName(QString::fromUtf8("buttonDelegations"));

        verticalLayout->addWidget(buttonDelegations, 0, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        vLineAssets = new QWidget(page);
        vLineAssets->setObjectName(QString::fromUtf8("vLineAssets"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vLineAssets->sizePolicy().hasHeightForWidth());
        vLineAssets->setSizePolicy(sizePolicy2);
        vLineAssets->setMinimumSize(QSize(1, 0));

        horizontalLayout_3->addWidget(vLineAssets);

        widgetStakingAssets = new QWidget(page);
        widgetStakingAssets->setObjectName(QString::fromUtf8("widgetStakingAssets"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetStakingAssets->sizePolicy().hasHeightForWidth());
        widgetStakingAssets->setSizePolicy(sizePolicy3);
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
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelStakeText->sizePolicy().hasHeightForWidth());
        labelStakeText->setSizePolicy(sizePolicy4);
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

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonConfig = new QToolButton(page);
        buttonConfig->setObjectName(QString::fromUtf8("buttonConfig"));
        buttonConfig->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(buttonConfig);

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
        labelNewSuperStaker = new QLabel(page_2);
        labelNewSuperStaker->setObjectName(QString::fromUtf8("labelNewSuperStaker"));

        horizontalLayout_5->addWidget(labelNewSuperStaker);

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


        verticalLayout_2->addWidget(superStakerItemFrame);


        retranslateUi(SuperStakerItemWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SuperStakerItemWidget);
    } // setupUi

    void retranslateUi(QWidget *SuperStakerItemWidget)
    {
        SuperStakerItemWidget->setWindowTitle(QCoreApplication::translate("SuperStakerItemWidget", "Form", nullptr));
        labelFee->setText(QCoreApplication::translate("SuperStakerItemWidget", "fee", nullptr));
        labelStaker->setText(QCoreApplication::translate("SuperStakerItemWidget", "staker", nullptr));
        labelAddress->setText(QCoreApplication::translate("SuperStakerItemWidget", "address", nullptr));
        buttonDelegations->setText(QCoreApplication::translate("SuperStakerItemWidget", "Delegations...", nullptr));
        labelAssetsText->setText(QCoreApplication::translate("SuperStakerItemWidget", "Super staking assets", nullptr));
#if QT_CONFIG(tooltip)
        labelAssets->setToolTip(QCoreApplication::translate("SuperStakerItemWidget", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelStakeText->setText(QCoreApplication::translate("SuperStakerItemWidget", "Stake:", nullptr));
        labelStake->setText(QCoreApplication::translate("SuperStakerItemWidget", "0.000\342\200\211000\342\200\21100 ODAN", nullptr));
        buttonConfig->setText(QString());
        buttonSplit->setText(QString());
        buttonRemove->setText(QString());
        labelNewSuperStaker->setText(QCoreApplication::translate("SuperStakerItemWidget", "Add new super stakers", nullptr));
        buttonRestore->setText(QString());
        buttonAdd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SuperStakerItemWidget: public Ui_SuperStakerItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERSTAKERITEMWIDGET_H
