/********************************************************************************
** Form generated from reading UI file 'sendtocontract.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDTOCONTRACT_H
#define UI_SENDTOCONTRACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"
#include "qt/qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendToContract
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *sendContractPage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelTitle;
    QFrame *frameContract;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QValidatedTextEdit *textEditInterface;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *lineEditContractAddress;
    QToolButton *loadInfoButton;
    QFrame *vLine;
    QToolButton *pasteAddressButton;
    QFrame *vLine2;
    QToolButton *saveInfoButton;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelInterface;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelContractAddress;
    QFrame *hContractLine;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBoxFunction;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollAreaFunction;
    QWidget *scrollAreaWidgetContents;
    QFrame *hContractLine2;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_2;
    BitcoinAmountField *lineEditAmount;
    QLabel *labelGasLimit;
    QLabel *labelGasPrice;
    AddressField *lineEditSenderAddress;
    QLabel *labelAmount;
    BitcoinAmountField *lineEditGasPrice;
    QLabel *labelSenderAddress;
    QSpinBox *lineEditGasLimit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSendToContract;

    void setupUi(QWidget *SendToContract)
    {
        if (SendToContract->objectName().isEmpty())
            SendToContract->setObjectName(QString::fromUtf8("SendToContract"));
        SendToContract->resize(689, 583);
        verticalLayout = new QVBoxLayout(SendToContract);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        stackedWidget = new QStackedWidget(SendToContract);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sendContractPage = new QWidget();
        sendContractPage->setObjectName(QString::fromUtf8("sendContractPage"));
        verticalLayout_4 = new QVBoxLayout(sendContractPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, -1, 9, -1);
        labelTitle = new QLabel(sendContractPage);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout_5->addWidget(labelTitle);

        frameContract = new QFrame(sendContractPage);
        frameContract->setObjectName(QString::fromUtf8("frameContract"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameContract->sizePolicy().hasHeightForWidth());
        frameContract->setSizePolicy(sizePolicy);
        frameContract->setFrameShape(QFrame::StyledPanel);
        frameContract->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameContract);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(12, -1, 9, -1);
        textEditInterface = new QValidatedTextEdit(frameContract);
        textEditInterface->setObjectName(QString::fromUtf8("textEditInterface"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditInterface->sizePolicy().hasHeightForWidth());
        textEditInterface->setSizePolicy(sizePolicy1);
        textEditInterface->setMaximumSize(QSize(16777215, 65));
        textEditInterface->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(textEditInterface, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditContractAddress = new QValidatedLineEdit(frameContract);
        lineEditContractAddress->setObjectName(QString::fromUtf8("lineEditContractAddress"));

        horizontalLayout_2->addWidget(lineEditContractAddress);

        loadInfoButton = new QToolButton(frameContract);
        loadInfoButton->setObjectName(QString::fromUtf8("loadInfoButton"));
        loadInfoButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(loadInfoButton);

        vLine = new QFrame(frameContract);
        vLine->setObjectName(QString::fromUtf8("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(vLine);

        pasteAddressButton = new QToolButton(frameContract);
        pasteAddressButton->setObjectName(QString::fromUtf8("pasteAddressButton"));
        pasteAddressButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(pasteAddressButton);

        vLine2 = new QFrame(frameContract);
        vLine2->setObjectName(QString::fromUtf8("vLine2"));
        vLine2->setMaximumSize(QSize(1, 22));
        vLine2->setFrameShape(QFrame::VLine);
        vLine2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(vLine2);

        saveInfoButton = new QToolButton(frameContract);
        saveInfoButton->setObjectName(QString::fromUtf8("saveInfoButton"));
        saveInfoButton->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(saveInfoButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QString::fromUtf8("labelInterface"));
        labelInterface->setMinimumSize(QSize(160, 0));

        verticalLayout_8->addWidget(labelInterface);


        gridLayout->addLayout(verticalLayout_8, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        labelContractAddress = new QLabel(frameContract);
        labelContractAddress->setObjectName(QString::fromUtf8("labelContractAddress"));
        labelContractAddress->setMinimumSize(QSize(160, 0));

        verticalLayout_9->addWidget(labelContractAddress);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_5->addWidget(frameContract);


        verticalLayout_4->addLayout(verticalLayout_5);

        hContractLine = new QFrame(sendContractPage);
        hContractLine->setObjectName(QString::fromUtf8("hContractLine"));
        hContractLine->setFrameShape(QFrame::HLine);
        hContractLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(hContractLine);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, -1, 9, -1);
        groupBoxFunction = new QGroupBox(sendContractPage);
        groupBoxFunction->setObjectName(QString::fromUtf8("groupBoxFunction"));
        verticalLayout_3 = new QVBoxLayout(groupBoxFunction);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 15, -1, 9);
        scrollAreaFunction = new QScrollArea(groupBoxFunction);
        scrollAreaFunction->setObjectName(QString::fromUtf8("scrollAreaFunction"));
        scrollAreaFunction->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 639, 137));
        scrollAreaFunction->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollAreaFunction);


        verticalLayout_6->addWidget(groupBoxFunction);


        verticalLayout_4->addLayout(verticalLayout_6);

        hContractLine2 = new QFrame(sendContractPage);
        hContractLine2->setObjectName(QString::fromUtf8("hContractLine2"));
        hContractLine2->setFrameShape(QFrame::HLine);
        hContractLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(hContractLine2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(9, -1, 9, -1);
        groupBoxOptional = new QGroupBox(sendContractPage);
        groupBoxOptional->setObjectName(QString::fromUtf8("groupBoxOptional"));
        gridLayout_2 = new QGridLayout(groupBoxOptional);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditAmount = new BitcoinAmountField(groupBoxOptional);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));

        gridLayout_2->addWidget(lineEditAmount, 0, 1, 1, 4);

        labelGasLimit = new QLabel(groupBoxOptional);
        labelGasLimit->setObjectName(QString::fromUtf8("labelGasLimit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelGasLimit->sizePolicy().hasHeightForWidth());
        labelGasLimit->setSizePolicy(sizePolicy2);
        labelGasLimit->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelGasLimit, 1, 0, 1, 1);

        labelGasPrice = new QLabel(groupBoxOptional);
        labelGasPrice->setObjectName(QString::fromUtf8("labelGasPrice"));
        sizePolicy2.setHeightForWidth(labelGasPrice->sizePolicy().hasHeightForWidth());
        labelGasPrice->setSizePolicy(sizePolicy2);
        labelGasPrice->setMinimumSize(QSize(90, 0));

        gridLayout_2->addWidget(labelGasPrice, 1, 3, 1, 1);

        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QString::fromUtf8("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_2->addWidget(lineEditSenderAddress, 3, 1, 1, 4);

        labelAmount = new QLabel(groupBoxOptional);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        sizePolicy2.setHeightForWidth(labelAmount->sizePolicy().hasHeightForWidth());
        labelAmount->setSizePolicy(sizePolicy2);
        labelAmount->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelAmount, 0, 0, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(groupBoxOptional);
        lineEditGasPrice->setObjectName(QString::fromUtf8("lineEditGasPrice"));

        gridLayout_2->addWidget(lineEditGasPrice, 1, 4, 1, 1);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QString::fromUtf8("labelSenderAddress"));
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelSenderAddress, 3, 0, 1, 1);

        lineEditGasLimit = new QSpinBox(groupBoxOptional);
        lineEditGasLimit->setObjectName(QString::fromUtf8("lineEditGasLimit"));
        sizePolicy1.setHeightForWidth(lineEditGasLimit->sizePolicy().hasHeightForWidth());
        lineEditGasLimit->setSizePolicy(sizePolicy1);
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEditGasLimit, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout_7->addWidget(groupBoxOptional);


        verticalLayout_4->addLayout(verticalLayout_7);

        stackedWidget->addWidget(sendContractPage);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(18, 9, 18, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(SendToContract);
        pushButtonClearAll->setObjectName(QString::fromUtf8("pushButtonClearAll"));

        horizontalLayout->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonSendToContract = new QPushButton(SendToContract);
        pushButtonSendToContract->setObjectName(QString::fromUtf8("pushButtonSendToContract"));

        horizontalLayout->addWidget(pushButtonSendToContract);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendToContract);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SendToContract);
    } // setupUi

    void retranslateUi(QWidget *SendToContract)
    {
        SendToContract->setWindowTitle(QCoreApplication::translate("SendToContract", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SendToContract", "Send to Smart Contract", nullptr));
#if QT_CONFIG(tooltip)
        loadInfoButton->setToolTip(QCoreApplication::translate("SendToContract", "Choose from contract book page", nullptr));
#endif // QT_CONFIG(tooltip)
        loadInfoButton->setText(QString());
#if QT_CONFIG(tooltip)
        pasteAddressButton->setToolTip(QCoreApplication::translate("SendToContract", "Paste contract address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteAddressButton->setText(QString());
#if QT_CONFIG(tooltip)
        saveInfoButton->setToolTip(QCoreApplication::translate("SendToContract", "Save contract info", nullptr));
#endif // QT_CONFIG(tooltip)
        saveInfoButton->setText(QString());
        labelInterface->setText(QCoreApplication::translate("SendToContract", "Interface (ABI)", nullptr));
        labelContractAddress->setText(QCoreApplication::translate("SendToContract", "Contract Address", nullptr));
        groupBoxFunction->setTitle(QCoreApplication::translate("SendToContract", "Function", nullptr));
        groupBoxOptional->setTitle(QCoreApplication::translate("SendToContract", "Optional", nullptr));
        labelGasLimit->setText(QCoreApplication::translate("SendToContract", "Gas Limit", nullptr));
        labelGasPrice->setText(QCoreApplication::translate("SendToContract", "Gas Price", nullptr));
        labelAmount->setText(QCoreApplication::translate("SendToContract", "Amount", nullptr));
        labelSenderAddress->setText(QCoreApplication::translate("SendToContract", "Sender Address", nullptr));
        pushButtonClearAll->setText(QCoreApplication::translate("SendToContract", "Clear All", nullptr));
        pushButtonSendToContract->setText(QCoreApplication::translate("SendToContract", "Send To Contract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendToContract: public Ui_SendToContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTOCONTRACT_H
