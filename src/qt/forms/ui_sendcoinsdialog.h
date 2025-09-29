/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/odanpushbutton.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QWidget *coinControlWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QWidget *coinControlContentsWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *checkBoxCoinControlChange;
    QValidatedLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacerCoinControl;
    QWidget *widgetRecipients;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelBalanceName;
    QSpacerItem *horizontalSpacer_8;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer_7;
    OdanPushButton *addButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayoutFee1;
    QVBoxLayout *verticalLayoutFee7;
    QHBoxLayout *horizontalLayoutSmartFee;
    QLabel *labelFeeHeadline;
    QLabel *labelFeeMinimized;
    QLabel *fallbackFeeWarningLabel;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameFee;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *radioSmartFee;
    QCheckBox *radioCustomFee;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedFeeTypes;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayoutFee12;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QVBoxLayout *verticalLayoutFee5;
    QHBoxLayout *horizontalLayoutConfTarget;
    QComboBox *confTargetSelector;
    QSpacerItem *horizontalSpacerConfTarget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutFee13;
    QLabel *labelCustomPerKilobyte;
    BitcoinAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QLabel *labelCustomFeeWarning;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *optInRBF;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QPushButton *sendButton;
    QButtonGroup *groupFee;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QString::fromUtf8("SendCoinsDialog"));
        SendCoinsDialog->resize(935, 589);
        verticalLayout_6 = new QVBoxLayout(SendCoinsDialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(30, 9, 30, -1);
        coinControlWidget = new QWidget(SendCoinsDialog);
        coinControlWidget->setObjectName(QString::fromUtf8("coinControlWidget"));
        verticalLayout_9 = new QVBoxLayout(coinControlWidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(coinControlWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_9->addWidget(label_2);

        coinControlContentsWidget = new QWidget(coinControlWidget);
        coinControlContentsWidget->setObjectName(QString::fromUtf8("coinControlContentsWidget"));
        verticalLayout_8 = new QVBoxLayout(coinControlContentsWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, -1, 6);
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QString::fromUtf8("verticalLayoutCoinControl"));
        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCoinControl = new QPushButton(coinControlContentsWidget);
        pushButtonCoinControl->setObjectName(QString::fromUtf8("pushButtonCoinControl"));
        pushButtonCoinControl->setStyleSheet(QString::fromUtf8(""));
        pushButtonCoinControl->setAutoDefault(false);

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(coinControlContentsWidget);
        labelCoinControlAutomaticallySelected->setObjectName(QString::fromUtf8("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(coinControlContentsWidget);
        labelCoinControlInsuffFunds->setObjectName(QString::fromUtf8("labelCoinControlInsuffFunds"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QString::fromUtf8("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(coinControlContentsWidget);
        widgetCoinControl->setObjectName(QString::fromUtf8("widgetCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QString::fromUtf8("formLayoutCoinControl1"));
        formLayoutCoinControl1->setLabelAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QString::fromUtf8("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setFont(font);
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QString::fromUtf8("labelCoinControlQuantity"));
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QString::fromUtf8("0"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QString::fromUtf8("labelCoinControlBytesText"));
        labelCoinControlBytesText->setFont(font);

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QString::fromUtf8("labelCoinControlBytes"));
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QString::fromUtf8("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QString::fromUtf8("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QString::fromUtf8("labelCoinControlAmountText"));
        labelCoinControlAmountText->setFont(font);
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QString::fromUtf8("labelCoinControlAmount"));
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QString::fromUtf8("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QString::fromUtf8("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font);
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QString::fromUtf8("labelCoinControlFee"));
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QString::fromUtf8("formLayoutCoinControl4"));
        formLayoutCoinControl4->setLabelAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QString::fromUtf8("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font);
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QString::fromUtf8("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QString::fromUtf8("labelCoinControlChangeText"));
        labelCoinControlChangeText->setFont(font);

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QString::fromUtf8("labelCoinControlChange"));
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QString::fromUtf8("0.00 BTC"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 0, -1);
        checkBoxCoinControlChange = new QCheckBox(coinControlContentsWidget);
        checkBoxCoinControlChange->setObjectName(QString::fromUtf8("checkBoxCoinControlChange"));

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QValidatedLineEdit(coinControlContentsWidget);
        lineEditCoinControlChange->setObjectName(QString::fromUtf8("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy1);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(coinControlContentsWidget);
        labelCoinControlChangeLabel->setObjectName(QString::fromUtf8("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy2);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        verticalSpacerCoinControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacerCoinControl);

        verticalLayoutCoinControl->setStretch(3, 1);

        verticalLayout_8->addLayout(verticalLayoutCoinControl);


        verticalLayout_9->addWidget(coinControlContentsWidget);


        verticalLayout_11->addWidget(coinControlWidget);


        verticalLayout_6->addLayout(verticalLayout_11);

        widgetRecipients = new QWidget(SendCoinsDialog);
        widgetRecipients->setObjectName(QString::fromUtf8("widgetRecipients"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(widgetRecipients->sizePolicy().hasHeightForWidth());
        widgetRecipients->setSizePolicy(sizePolicy3);
        verticalLayout_7 = new QVBoxLayout(widgetRecipients);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(30, 0, 30, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 3, 0, 0);
        labelBalanceName = new QLabel(widgetRecipients);
        labelBalanceName->setObjectName(QString::fromUtf8("labelBalanceName"));
        sizePolicy.setHeightForWidth(labelBalanceName->sizePolicy().hasHeightForWidth());
        labelBalanceName->setSizePolicy(sizePolicy);
        labelBalanceName->setMinimumSize(QSize(20, 50));

        horizontalLayout_4->addWidget(labelBalanceName);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        labelBalance = new QLabel(widgetRecipients);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        sizePolicy.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy);
        labelBalance->setMinimumSize(QSize(20, 50));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("123.456 BTC"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(labelBalance);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        addButton = new OdanPushButton(widgetRecipients);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add_recipient"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(addButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(widgetRecipients);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 873, 68));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QString::fromUtf8("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(scrollArea);


        verticalLayout_6->addWidget(widgetRecipients);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(30, -1, 30, 20);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName(QString::fromUtf8("horizontalLayoutFee1"));
        horizontalLayoutFee1->setContentsMargins(-1, -1, -1, 0);
        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName(QString::fromUtf8("verticalLayoutFee7"));
        horizontalLayoutSmartFee = new QHBoxLayout();
        horizontalLayoutSmartFee->setSpacing(10);
        horizontalLayoutSmartFee->setObjectName(QString::fromUtf8("horizontalLayoutSmartFee"));
        labelFeeHeadline = new QLabel(SendCoinsDialog);
        labelFeeHeadline->setObjectName(QString::fromUtf8("labelFeeHeadline"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelFeeHeadline->sizePolicy().hasHeightForWidth());
        labelFeeHeadline->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        labelFeeHeadline->setFont(font1);

        horizontalLayoutSmartFee->addWidget(labelFeeHeadline);

        labelFeeMinimized = new QLabel(SendCoinsDialog);
        labelFeeMinimized->setObjectName(QString::fromUtf8("labelFeeMinimized"));

        horizontalLayoutSmartFee->addWidget(labelFeeMinimized);


        verticalLayoutFee7->addLayout(horizontalLayoutSmartFee);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);

        fallbackFeeWarningLabel = new QLabel(SendCoinsDialog);
        fallbackFeeWarningLabel->setObjectName(QString::fromUtf8("fallbackFeeWarningLabel"));
        fallbackFeeWarningLabel->setFont(font);
        fallbackFeeWarningLabel->setWordWrap(false);

        horizontalLayoutFee1->addWidget(fallbackFeeWarningLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayoutFee1);

        frameFee = new QFrame(SendCoinsDialog);
        frameFee->setObjectName(QString::fromUtf8("frameFee"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy5);
        frameFee->setMaximumSize(QSize(16777215, 16777215));
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Sunken);
        verticalLayout_5 = new QVBoxLayout(frameFee);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioSmartFee = new QCheckBox(frameFee);
        groupFee = new QButtonGroup(SendCoinsDialog);
        groupFee->setObjectName(QString::fromUtf8("groupFee"));
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName(QString::fromUtf8("radioSmartFee"));
        radioSmartFee->setChecked(true);

        horizontalLayout_3->addWidget(radioSmartFee);

        radioCustomFee = new QCheckBox(frameFee);
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName(QString::fromUtf8("radioCustomFee"));

        horizontalLayout_3->addWidget(radioCustomFee);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName(QString::fromUtf8("frameFeeSelection"));
        verticalLayout_4 = new QVBoxLayout(frameFeeSelection);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 0, 0, 0);
        stackedFeeTypes = new QStackedWidget(frameFeeSelection);
        stackedFeeTypes->setObjectName(QString::fromUtf8("stackedFeeTypes"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName(QString::fromUtf8("horizontalLayoutFee12"));
        labelSmartFee = new QLabel(page);
        labelSmartFee->setObjectName(QString::fromUtf8("labelSmartFee"));
        labelSmartFee->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee);

        labelFeeEstimation = new QLabel(page);
        labelFeeEstimation->setObjectName(QString::fromUtf8("labelFeeEstimation"));

        horizontalLayoutFee12->addWidget(labelFeeEstimation);

        labelSmartFee2 = new QLabel(page);
        labelSmartFee2->setObjectName(QString::fromUtf8("labelSmartFee2"));
        labelSmartFee2->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee2);

        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName(QString::fromUtf8("horizontalLayoutFee9"));
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName(QString::fromUtf8("verticalLayoutFee6"));
        labelSmartFee3 = new QLabel(page);
        labelSmartFee3->setObjectName(QString::fromUtf8("labelSmartFee3"));
        labelSmartFee3->setMargin(2);

        verticalLayoutFee6->addWidget(labelSmartFee3);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName(QString::fromUtf8("verticalLayoutFee5"));
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        horizontalLayoutConfTarget = new QHBoxLayout();
        horizontalLayoutConfTarget->setObjectName(QString::fromUtf8("horizontalLayoutConfTarget"));
        horizontalLayoutConfTarget->setContentsMargins(-1, -1, -1, 0);
        confTargetSelector = new QComboBox(page);
        confTargetSelector->setObjectName(QString::fromUtf8("confTargetSelector"));

        horizontalLayoutConfTarget->addWidget(confTargetSelector);

        horizontalSpacerConfTarget = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutConfTarget->addItem(horizontalSpacerConfTarget);


        verticalLayoutFee5->addLayout(horizontalLayoutConfTarget);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayout_3->addLayout(horizontalLayoutFee9);

        stackedFeeTypes->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName(QString::fromUtf8("horizontalLayoutFee13"));
        labelCustomPerKilobyte = new QLabel(page_2);
        labelCustomPerKilobyte->setObjectName(QString::fromUtf8("labelCustomPerKilobyte"));

        horizontalLayoutFee13->addWidget(labelCustomPerKilobyte);

        customFee = new BitcoinAmountField(page_2);
        customFee->setObjectName(QString::fromUtf8("customFee"));

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName(QString::fromUtf8("horizontalLayoutFee8"));
        labelCustomFeeWarning = new QLabel(page_2);
        labelCustomFeeWarning->setObjectName(QString::fromUtf8("labelCustomFeeWarning"));
        labelCustomFeeWarning->setEnabled(true);

        horizontalLayoutFee8->addWidget(labelCustomFeeWarning);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayoutFee8);

        stackedFeeTypes->addWidget(page_2);

        verticalLayout_4->addWidget(stackedFeeTypes);


        verticalLayout_5->addWidget(frameFeeSelection);

        optInRBF = new QCheckBox(frameFee);
        optInRBF->setObjectName(QString::fromUtf8("optInRBF"));

        verticalLayout_5->addWidget(optInRBF);


        verticalLayout_10->addWidget(frameFee);


        verticalLayout_6->addLayout(verticalLayout_10);

        buttonsContainerWhite = new QWidget(SendCoinsDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        clearButton = new QPushButton(buttonsContainerWhite);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy6);
        clearButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(clearButton);

        sendButton = new QPushButton(buttonsContainerWhite);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(sendButton);


        verticalLayout_6->addWidget(buttonsContainerWhite);


        retranslateUi(SendCoinsDialog);

        stackedFeeTypes->setCurrentIndex(0);
        sendButton->setDefault(false);


        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QCoreApplication::translate("SendCoinsDialog", "Send Coins", nullptr));
        label_2->setText(QCoreApplication::translate("SendCoinsDialog", "Coin Control Features", nullptr));
        pushButtonCoinControl->setText(QCoreApplication::translate("SendCoinsDialog", "Inputs\342\200\246", nullptr));
        labelCoinControlAutomaticallySelected->setText(QCoreApplication::translate("SendCoinsDialog", "automatically selected", nullptr));
        labelCoinControlInsuffFunds->setText(QCoreApplication::translate("SendCoinsDialog", "Insufficient funds!", nullptr));
        labelCoinControlQuantityText->setText(QCoreApplication::translate("SendCoinsDialog", "Quantity:", nullptr));
        labelCoinControlBytesText->setText(QCoreApplication::translate("SendCoinsDialog", "Bytes:", nullptr));
        labelCoinControlAmountText->setText(QCoreApplication::translate("SendCoinsDialog", "Amount:", nullptr));
        labelCoinControlFeeText->setText(QCoreApplication::translate("SendCoinsDialog", "Fee:", nullptr));
        labelCoinControlAfterFeeText->setText(QCoreApplication::translate("SendCoinsDialog", "After Fee:", nullptr));
        labelCoinControlChangeText->setText(QCoreApplication::translate("SendCoinsDialog", "Change:", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxCoinControlChange->setToolTip(QCoreApplication::translate("SendCoinsDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxCoinControlChange->setText(QCoreApplication::translate("SendCoinsDialog", "Custom change address", nullptr));
        labelCoinControlChangeLabel->setText(QString());
        labelBalanceName->setText(QCoreApplication::translate("SendCoinsDialog", "Balance:", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("SendCoinsDialog", "Add &Recipient", nullptr));
        labelFeeHeadline->setText(QCoreApplication::translate("SendCoinsDialog", "Transaction Fee:", nullptr));
        labelFeeMinimized->setText(QString());
#if QT_CONFIG(tooltip)
        fallbackFeeWarningLabel->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Using the fallbackfee can result in sending a transaction that will take several hours or days (or never) to confirm. Consider choosing your fee manually or wait until you have validated the complete chain.", nullptr));
#endif // QT_CONFIG(tooltip)
        fallbackFeeWarningLabel->setText(QCoreApplication::translate("SendCoinsDialog", "Warning: Fee estimation is currently not possible.", nullptr));
        radioSmartFee->setText(QCoreApplication::translate("SendCoinsDialog", "Recommended", nullptr));
        radioCustomFee->setText(QCoreApplication::translate("SendCoinsDialog", "Custom", nullptr));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QCoreApplication::translate("SendCoinsDialog", "(Smart fee not initialized yet. This usually takes a few blocks\342\200\246)", nullptr));
        labelSmartFee3->setText(QCoreApplication::translate("SendCoinsDialog", "Confirmation time target:", nullptr));
#if QT_CONFIG(tooltip)
        labelCustomPerKilobyte->setToolTip(QCoreApplication::translate("SendCoinsDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCustomPerKilobyte->setText(QCoreApplication::translate("SendCoinsDialog", "per kilobyte", nullptr));
#if QT_CONFIG(tooltip)
        labelCustomFeeWarning->setToolTip(QCoreApplication::translate("SendCoinsDialog", "When there is less transaction volume than space in the blocks, miners as well as relaying nodes may enforce a minimum fee. Paying only this minimum fee is just fine, but be aware that this can result in a never confirming transaction once there is more demand for odan transactions than the network can process.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCustomFeeWarning->setText(QCoreApplication::translate("SendCoinsDialog", "A too low fee might result in a never confirming transaction (read the tooltip)", nullptr));
#if QT_CONFIG(tooltip)
        optInRBF->setToolTip(QCoreApplication::translate("SendCoinsDialog", "With Replace-By-Fee (BIP-125) you can increase a transaction's fee after it is sent. Without this, a higher fee may be recommended to compensate for increased transaction delay risk.", nullptr));
#endif // QT_CONFIG(tooltip)
        optInRBF->setText(QCoreApplication::translate("SendCoinsDialog", "Enable Replace-By-Fee", nullptr));
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Clear all fields of the form.", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton->setText(QCoreApplication::translate("SendCoinsDialog", "Clear &All", nullptr));
#if QT_CONFIG(tooltip)
        sendButton->setToolTip(QCoreApplication::translate("SendCoinsDialog", "Confirm the send action", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QCoreApplication::translate("SendCoinsDialog", "S&end", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
