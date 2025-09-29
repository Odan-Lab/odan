/********************************************************************************
** Form generated from reading UI file 'stakepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAKEPAGE_H
#define UI_STAKEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qswitchcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_StakePage
{
public:
    QLabel *labelAlerts;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameStakeInfo;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *labelAssets;
    QLabel *labelAssetsText;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelStaking;
    QSwitchControl *checkStake;
    QFrame *hLine;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelHeightText;
    QLabel *labelHeight;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelRewardText;
    QLabel *labelReward;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWeightText;
    QLabel *labelWeight;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelROIText;
    QLabel *labelROI;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QFrame *frameStakeRecords;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRecordsText;

    void setupUi(QWidget *StakePage)
    {
        if (StakePage->objectName().isEmpty())
            StakePage->setObjectName(QString::fromUtf8("StakePage"));
        StakePage->resize(714, 450);
        labelAlerts = new QLabel(StakePage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setGeometry(QRect(0, 0, 16, 23));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000; }"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);
        verticalLayout_3 = new QVBoxLayout(StakePage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 0, 20, 20);
        frameStakeInfo = new QFrame(StakePage);
        frameStakeInfo->setObjectName(QString::fromUtf8("frameStakeInfo"));
        frameStakeInfo->setFrameShape(QFrame::StyledPanel);
        frameStakeInfo->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameStakeInfo);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelAssets = new QLabel(frameStakeInfo);
        labelAssets->setObjectName(QString::fromUtf8("labelAssets"));
        QFont font;
        font.setPointSize(17);
        labelAssets->setFont(font);
        labelAssets->setCursor(QCursor(Qt::IBeamCursor));
        labelAssets->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ODAN"));
        labelAssets->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelAssets->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelAssets, 1, 0, 1, 1);

        labelAssetsText = new QLabel(frameStakeInfo);
        labelAssetsText->setObjectName(QString::fromUtf8("labelAssetsText"));
        labelAssetsText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelAssetsText, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelStakeText = new QLabel(frameStakeInfo);
        labelStakeText->setObjectName(QString::fromUtf8("labelStakeText"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelStakeText->sizePolicy().hasHeightForWidth());
        labelStakeText->setSizePolicy(sizePolicy);
        labelStakeText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelStakeText);

        labelStake = new QLabel(frameStakeInfo);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(labelStake);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        labelStaking = new QLabel(frameStakeInfo);
        labelStaking->setObjectName(QString::fromUtf8("labelStaking"));

        gridLayout_2->addWidget(labelStaking, 1, 4, 1, 1);

        checkStake = new QSwitchControl(frameStakeInfo);
        checkStake->setObjectName(QString::fromUtf8("checkStake"));
        checkStake->setEnabled(false);

        gridLayout_2->addWidget(checkStake, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        hLine = new QFrame(frameStakeInfo);
        hLine->setObjectName(QString::fromUtf8("hLine"));
        hLine->setFrameShape(QFrame::HLine);
        hLine->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(hLine);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelHeightText = new QLabel(frameStakeInfo);
        labelHeightText->setObjectName(QString::fromUtf8("labelHeightText"));
        sizePolicy.setHeightForWidth(labelHeightText->sizePolicy().hasHeightForWidth());
        labelHeightText->setSizePolicy(sizePolicy);
        labelHeightText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelHeightText);

        labelHeight = new QLabel(frameStakeInfo);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));
        labelHeight->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelHeight);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelRewardText = new QLabel(frameStakeInfo);
        labelRewardText->setObjectName(QString::fromUtf8("labelRewardText"));
        sizePolicy.setHeightForWidth(labelRewardText->sizePolicy().hasHeightForWidth());
        labelRewardText->setSizePolicy(sizePolicy);
        labelRewardText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelRewardText);

        labelReward = new QLabel(frameStakeInfo);
        labelReward->setObjectName(QString::fromUtf8("labelReward"));
        labelReward->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelReward->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(labelReward);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelWeightText = new QLabel(frameStakeInfo);
        labelWeightText->setObjectName(QString::fromUtf8("labelWeightText"));
        sizePolicy.setHeightForWidth(labelWeightText->sizePolicy().hasHeightForWidth());
        labelWeightText->setSizePolicy(sizePolicy);
        labelWeightText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelWeightText);

        labelWeight = new QLabel(frameStakeInfo);
        labelWeight->setObjectName(QString::fromUtf8("labelWeight"));
        labelWeight->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelWeight);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelROIText = new QLabel(frameStakeInfo);
        labelROIText->setObjectName(QString::fromUtf8("labelROIText"));
        sizePolicy.setHeightForWidth(labelROIText->sizePolicy().hasHeightForWidth());
        labelROIText->setSizePolicy(sizePolicy);
        labelROIText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelROIText);

        labelROI = new QLabel(frameStakeInfo);
        labelROI->setObjectName(QString::fromUtf8("labelROI"));
        labelROI->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelROI->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(labelROI);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addWidget(frameStakeInfo);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        frameStakeRecords = new QFrame(StakePage);
        frameStakeRecords->setObjectName(QString::fromUtf8("frameStakeRecords"));
        frameStakeRecords->setFrameShape(QFrame::StyledPanel);
        frameStakeRecords->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameStakeRecords);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelRecordsText = new QLabel(frameStakeRecords);
        labelRecordsText->setObjectName(QString::fromUtf8("labelRecordsText"));

        verticalLayout_2->addWidget(labelRecordsText);


        verticalLayout_3->addWidget(frameStakeRecords);


        retranslateUi(StakePage);

        QMetaObject::connectSlotsByName(StakePage);
    } // setupUi

    void retranslateUi(QWidget *StakePage)
    {
        StakePage->setWindowTitle(QCoreApplication::translate("StakePage", "Form", nullptr));
#if QT_CONFIG(tooltip)
        labelAssets->setToolTip(QCoreApplication::translate("StakePage", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
        labelAssetsText->setText(QCoreApplication::translate("StakePage", "Staking assets", nullptr));
        labelStakeText->setText(QCoreApplication::translate("StakePage", "Stake:", nullptr));
        labelStake->setText(QCoreApplication::translate("StakePage", "0.000\342\200\211000\342\200\21100 ODAN", nullptr));
        labelStaking->setText(QCoreApplication::translate("StakePage", "Staking", nullptr));
        labelHeightText->setText(QCoreApplication::translate("StakePage", "Block height:", nullptr));
        labelHeight->setText(QCoreApplication::translate("StakePage", "0", nullptr));
        labelRewardText->setText(QCoreApplication::translate("StakePage", "Block reward:", nullptr));
        labelReward->setText(QCoreApplication::translate("StakePage", "4 ODAN/Block", nullptr));
        labelWeightText->setText(QCoreApplication::translate("StakePage", "Network weight:", nullptr));
        labelWeight->setText(QCoreApplication::translate("StakePage", "0", nullptr));
        labelROIText->setText(QCoreApplication::translate("StakePage", "Expected annualized ROI:", nullptr));
        labelROI->setText(QCoreApplication::translate("StakePage", "7.9 %", nullptr));
        labelRecordsText->setText(QCoreApplication::translate("StakePage", "Stake records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StakePage: public Ui_StakePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAKEPAGE_H
