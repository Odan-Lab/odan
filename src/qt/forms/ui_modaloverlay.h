/********************************************************************************
** Form generated from reading UI file 'modaloverlay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALOVERLAY_H
#define UI_MODALOVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModalOverlay
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *bgWidget;
    QVBoxLayout *verticalLayoutMain;
    QWidget *contentWidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayoutIconText;
    QVBoxLayout *verticalLayoutIcon;
    QPushButton *warningIcon;
    QSpacerItem *verticalSpacerWarningIcon;
    QVBoxLayout *verticalLayoutInfoText;
    QLabel *infoText;
    QLabel *infoTextStrong;
    QSpacerItem *verticalSpacerInTextSpace;
    QFormLayout *formLayout;
    QLabel *labelNumberOfBlocksLeft;
    QLabel *numberOfBlocksLeft;
    QLabel *labelLastBlockTime;
    QLabel *newestBlockDate;
    QLabel *labelSyncDone;
    QHBoxLayout *horizontalLayoutSync;
    QLabel *percentageProgress;
    QLabel *labelProgressIncrease;
    QLabel *progressIncreasePerH;
    QLabel *labelEstimatedTimeLeft;
    QLabel *expectedTimeLeft;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelNote;
    QLabel *labelMessage;
    QPushButton *warningIconBackup;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QPushButton *walletBackupButton;

    void setupUi(QWidget *ModalOverlay)
    {
        if (ModalOverlay->objectName().isEmpty())
            ModalOverlay->setObjectName(QString::fromUtf8("ModalOverlay"));
        ModalOverlay->resize(924, 639);
        verticalLayout = new QVBoxLayout(ModalOverlay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bgWidget = new QWidget(ModalOverlay);
        bgWidget->setObjectName(QString::fromUtf8("bgWidget"));
        bgWidget->setStyleSheet(QString::fromUtf8("#bgWidget { background: rgba(0,0,0,96); }"));
        verticalLayoutMain = new QVBoxLayout(bgWidget);
        verticalLayoutMain->setObjectName(QString::fromUtf8("verticalLayoutMain"));
        verticalLayoutMain->setContentsMargins(120, 120, 120, 120);
        contentWidget = new QWidget(bgWidget);
        contentWidget->setObjectName(QString::fromUtf8("contentWidget"));
        verticalLayout_3 = new QVBoxLayout(contentWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(contentWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 10, 30, 10);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayoutIconText = new QHBoxLayout();
        horizontalLayoutIconText->setSpacing(20);
        horizontalLayoutIconText->setObjectName(QString::fromUtf8("horizontalLayoutIconText"));
        horizontalLayoutIconText->setContentsMargins(-1, 20, -1, -1);
        verticalLayoutIcon = new QVBoxLayout();
        verticalLayoutIcon->setObjectName(QString::fromUtf8("verticalLayoutIcon"));
        warningIcon = new QPushButton(page);
        warningIcon->setObjectName(QString::fromUtf8("warningIcon"));
        warningIcon->setEnabled(false);
        warningIcon->setIconSize(QSize(48, 48));
        warningIcon->setFlat(true);

        verticalLayoutIcon->addWidget(warningIcon);

        verticalSpacerWarningIcon = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutIcon->addItem(verticalSpacerWarningIcon);


        horizontalLayoutIconText->addLayout(verticalLayoutIcon);

        verticalLayoutInfoText = new QVBoxLayout();
        verticalLayoutInfoText->setObjectName(QString::fromUtf8("verticalLayoutInfoText"));
        verticalLayoutInfoText->setContentsMargins(0, 0, -1, -1);
        infoText = new QLabel(page);
        infoText->setObjectName(QString::fromUtf8("infoText"));
        infoText->setTextFormat(Qt::RichText);
        infoText->setWordWrap(true);

        verticalLayoutInfoText->addWidget(infoText);

        infoTextStrong = new QLabel(page);
        infoTextStrong->setObjectName(QString::fromUtf8("infoTextStrong"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        infoTextStrong->setFont(font);
        infoTextStrong->setTextFormat(Qt::RichText);
        infoTextStrong->setWordWrap(true);

        verticalLayoutInfoText->addWidget(infoTextStrong);

        verticalSpacerInTextSpace = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutInfoText->addItem(verticalSpacerInTextSpace);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(-1, 10, -1, -1);
        labelNumberOfBlocksLeft = new QLabel(page);
        labelNumberOfBlocksLeft->setObjectName(QString::fromUtf8("labelNumberOfBlocksLeft"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        labelNumberOfBlocksLeft->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNumberOfBlocksLeft);

        numberOfBlocksLeft = new QLabel(page);
        numberOfBlocksLeft->setObjectName(QString::fromUtf8("numberOfBlocksLeft"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numberOfBlocksLeft->sizePolicy().hasHeightForWidth());
        numberOfBlocksLeft->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, numberOfBlocksLeft);

        labelLastBlockTime = new QLabel(page);
        labelLastBlockTime->setObjectName(QString::fromUtf8("labelLastBlockTime"));
        labelLastBlockTime->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelLastBlockTime);

        newestBlockDate = new QLabel(page);
        newestBlockDate->setObjectName(QString::fromUtf8("newestBlockDate"));
        sizePolicy.setHeightForWidth(newestBlockDate->sizePolicy().hasHeightForWidth());
        newestBlockDate->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, newestBlockDate);

        labelSyncDone = new QLabel(page);
        labelSyncDone->setObjectName(QString::fromUtf8("labelSyncDone"));
        labelSyncDone->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSyncDone);

        horizontalLayoutSync = new QHBoxLayout();
        horizontalLayoutSync->setSpacing(6);
        horizontalLayoutSync->setObjectName(QString::fromUtf8("horizontalLayoutSync"));
        percentageProgress = new QLabel(page);
        percentageProgress->setObjectName(QString::fromUtf8("percentageProgress"));
        percentageProgress->setText(QString::fromUtf8("~"));

        horizontalLayoutSync->addWidget(percentageProgress);

        horizontalLayoutSync->setStretch(1, 1);

        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayoutSync);

        labelProgressIncrease = new QLabel(page);
        labelProgressIncrease->setObjectName(QString::fromUtf8("labelProgressIncrease"));
        labelProgressIncrease->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelProgressIncrease);

        progressIncreasePerH = new QLabel(page);
        progressIncreasePerH->setObjectName(QString::fromUtf8("progressIncreasePerH"));
        sizePolicy.setHeightForWidth(progressIncreasePerH->sizePolicy().hasHeightForWidth());
        progressIncreasePerH->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, progressIncreasePerH);

        labelEstimatedTimeLeft = new QLabel(page);
        labelEstimatedTimeLeft->setObjectName(QString::fromUtf8("labelEstimatedTimeLeft"));
        labelEstimatedTimeLeft->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEstimatedTimeLeft);

        expectedTimeLeft = new QLabel(page);
        expectedTimeLeft->setObjectName(QString::fromUtf8("expectedTimeLeft"));
        sizePolicy.setHeightForWidth(expectedTimeLeft->sizePolicy().hasHeightForWidth());
        expectedTimeLeft->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, expectedTimeLeft);


        verticalLayoutInfoText->addLayout(formLayout);


        horizontalLayoutIconText->addLayout(verticalLayoutInfoText);

        horizontalLayoutIconText->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayoutIconText);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 0, 30, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelNote = new QLabel(page_2);
        labelNote->setObjectName(QString::fromUtf8("labelNote"));
        labelNote->setLayoutDirection(Qt::LeftToRight);
        labelNote->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNote, 0, 1, 1, 1);

        labelMessage = new QLabel(page_2);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelMessage->setWordWrap(true);

        gridLayout->addWidget(labelMessage, 1, 1, 1, 1);

        warningIconBackup = new QPushButton(page_2);
        warningIconBackup->setObjectName(QString::fromUtf8("warningIconBackup"));
        warningIconBackup->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(warningIconBackup->sizePolicy().hasHeightForWidth());
        warningIconBackup->setSizePolicy(sizePolicy1);
        warningIconBackup->setMinimumSize(QSize(30, 30));
        warningIconBackup->setMaximumSize(QSize(30, 30));
        warningIconBackup->setIconSize(QSize(30, 30));
        warningIconBackup->setFlat(true);

        gridLayout->addWidget(warningIconBackup, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        stackedWidget->addWidget(page_2);

        verticalLayout_3->addWidget(stackedWidget);

        buttonsContainerWhite = new QWidget(contentWidget);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(buttonsContainerWhite);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(closeButton);

        walletBackupButton = new QPushButton(buttonsContainerWhite);
        walletBackupButton->setObjectName(QString::fromUtf8("walletBackupButton"));

        horizontalLayout->addWidget(walletBackupButton);


        verticalLayout_3->addWidget(buttonsContainerWhite);

        verticalLayout_3->setStretch(0, 1);

        verticalLayoutMain->addWidget(contentWidget);


        verticalLayout->addWidget(bgWidget);


        retranslateUi(ModalOverlay);

        stackedWidget->setCurrentIndex(0);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(ModalOverlay);
    } // setupUi

    void retranslateUi(QWidget *ModalOverlay)
    {
        ModalOverlay->setWindowTitle(QCoreApplication::translate("ModalOverlay", "Form", nullptr));
        warningIcon->setText(QString());
        infoText->setText(QCoreApplication::translate("ModalOverlay", "Recent transactions may not yet be visible, and therefore your wallet's balance might be incorrect. This information will be correct once your wallet has finished synchronizing with the odan network, as detailed below.", nullptr));
        infoTextStrong->setText(QCoreApplication::translate("ModalOverlay", "Attempting to spend odans that are affected by not-yet-displayed transactions will not be accepted by the network.", nullptr));
        labelNumberOfBlocksLeft->setText(QCoreApplication::translate("ModalOverlay", "Number of blocks left", nullptr));
        numberOfBlocksLeft->setText(QCoreApplication::translate("ModalOverlay", "Unknown\342\200\246", nullptr));
        labelLastBlockTime->setText(QCoreApplication::translate("ModalOverlay", "Last block time", nullptr));
        newestBlockDate->setText(QCoreApplication::translate("ModalOverlay", "Unknown\342\200\246", nullptr));
        labelSyncDone->setText(QCoreApplication::translate("ModalOverlay", "Progress", nullptr));
        labelProgressIncrease->setText(QCoreApplication::translate("ModalOverlay", "Progress increase per hour", nullptr));
        progressIncreasePerH->setText(QCoreApplication::translate("ModalOverlay", "calculating\342\200\246", nullptr));
        labelEstimatedTimeLeft->setText(QCoreApplication::translate("ModalOverlay", "Estimated time left until synced", nullptr));
        expectedTimeLeft->setText(QCoreApplication::translate("ModalOverlay", "calculating\342\200\246", nullptr));
        labelNote->setText(QCoreApplication::translate("ModalOverlay", "Wallet backup prompt", nullptr));
        labelMessage->setText(QCoreApplication::translate("ModalOverlay", "Please backup your wallet as soon as possible.\n"
"Please make sure to keep an updated antivirus and operating system. We can not recover Your funds if you visit phishing site or lose your backup. Please make sure to keep backups of your private keys or files. We do not store your private keys on this wallet. And you as a user, are entirely responsible for your funds and your own security.", nullptr));
        warningIconBackup->setText(QString());
        closeButton->setText(QCoreApplication::translate("ModalOverlay", "Maybe later", nullptr));
#if QT_CONFIG(shortcut)
        closeButton->setShortcut(QCoreApplication::translate("ModalOverlay", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        walletBackupButton->setText(QCoreApplication::translate("ModalOverlay", "Wallet backup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModalOverlay: public Ui_ModalOverlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALOVERLAY_H
