/********************************************************************************
** Form generated from reading UI file 'callcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLCONTRACT_H
#define UI_CALLCONTRACT_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"
#include "qt/qvalidatedlineedit.h"
#include "qt/qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_CallContract
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *callContractPage;
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
    QVBoxLayout *verticalLayout_10;
    QLabel *labelInterface;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelContractAddress;
    QFrame *hContractLine;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBoxFunction;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollAreaFunction;
    QWidget *scrollAreaWidgetContents;
    QFrame *hContractLine2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_3;
    AddressField *lineEditSenderAddress;
    QLabel *labelSenderAddress;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonCallContract;

    void setupUi(QWidget *CallContract)
    {
        if (CallContract->objectName().isEmpty())
            CallContract->setObjectName(QString::fromUtf8("CallContract"));
        CallContract->resize(690, 499);
        verticalLayout = new QVBoxLayout(CallContract);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 9, 0, 9);
        stackedWidget = new QStackedWidget(CallContract);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        callContractPage = new QWidget();
        callContractPage->setObjectName(QString::fromUtf8("callContractPage"));
        verticalLayout_4 = new QVBoxLayout(callContractPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 0, 9, 0);
        labelTitle = new QLabel(callContractPage);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout_5->addWidget(labelTitle);

        frameContract = new QFrame(callContractPage);
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

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QString::fromUtf8("labelInterface"));
        labelInterface->setMinimumSize(QSize(160, 0));

        verticalLayout_10->addWidget(labelInterface);


        gridLayout->addLayout(verticalLayout_10, 1, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        labelContractAddress = new QLabel(frameContract);
        labelContractAddress->setObjectName(QString::fromUtf8("labelContractAddress"));
        labelContractAddress->setMinimumSize(QSize(160, 0));

        verticalLayout_11->addWidget(labelContractAddress);


        gridLayout->addLayout(verticalLayout_11, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_5->addWidget(frameContract);


        verticalLayout_4->addLayout(verticalLayout_5);

        hContractLine = new QFrame(callContractPage);
        hContractLine->setObjectName(QString::fromUtf8("hContractLine"));
        hContractLine->setFrameShape(QFrame::HLine);
        hContractLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(hContractLine);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(9, 0, 9, 0);
        groupBoxFunction = new QGroupBox(callContractPage);
        groupBoxFunction->setObjectName(QString::fromUtf8("groupBoxFunction"));
        verticalLayout_3 = new QVBoxLayout(groupBoxFunction);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 15, -1, -1);
        scrollAreaFunction = new QScrollArea(groupBoxFunction);
        scrollAreaFunction->setObjectName(QString::fromUtf8("scrollAreaFunction"));
        scrollAreaFunction->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 640, 116));
        scrollAreaFunction->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollAreaFunction);


        verticalLayout_7->addWidget(groupBoxFunction);


        verticalLayout_4->addLayout(verticalLayout_7);

        hContractLine2 = new QFrame(callContractPage);
        hContractLine2->setObjectName(QString::fromUtf8("hContractLine2"));
        hContractLine2->setFrameShape(QFrame::HLine);
        hContractLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(hContractLine2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(9, 0, 9, 0);
        groupBoxOptional = new QGroupBox(callContractPage);
        groupBoxOptional->setObjectName(QString::fromUtf8("groupBoxOptional"));
        gridLayout_3 = new QGridLayout(groupBoxOptional);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(15, 15, -1, -1);
        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QString::fromUtf8("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_3->addWidget(lineEditSenderAddress, 0, 1, 1, 1);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QString::fromUtf8("labelSenderAddress"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_3->addWidget(labelSenderAddress, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBoxOptional);


        verticalLayout_4->addLayout(verticalLayout_8);

        stackedWidget->addWidget(callContractPage);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(18, 9, 18, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(CallContract);
        pushButtonClearAll->setObjectName(QString::fromUtf8("pushButtonClearAll"));

        horizontalLayout->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonCallContract = new QPushButton(CallContract);
        pushButtonCallContract->setObjectName(QString::fromUtf8("pushButtonCallContract"));

        horizontalLayout->addWidget(pushButtonCallContract);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CallContract);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CallContract);
    } // setupUi

    void retranslateUi(QWidget *CallContract)
    {
        CallContract->setWindowTitle(QCoreApplication::translate("CallContract", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("CallContract", "Call Smart Contract", nullptr));
#if QT_CONFIG(tooltip)
        loadInfoButton->setToolTip(QCoreApplication::translate("CallContract", "Choose from contract book page", nullptr));
#endif // QT_CONFIG(tooltip)
        loadInfoButton->setText(QString());
#if QT_CONFIG(tooltip)
        pasteAddressButton->setToolTip(QCoreApplication::translate("CallContract", "Paste contract address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteAddressButton->setText(QString());
#if QT_CONFIG(tooltip)
        saveInfoButton->setToolTip(QCoreApplication::translate("CallContract", "Save contract info", nullptr));
#endif // QT_CONFIG(tooltip)
        saveInfoButton->setText(QString());
        labelInterface->setText(QCoreApplication::translate("CallContract", "Interface (ABI)", nullptr));
        labelContractAddress->setText(QCoreApplication::translate("CallContract", "Contract Address", nullptr));
        groupBoxFunction->setTitle(QCoreApplication::translate("CallContract", "Function", nullptr));
        groupBoxOptional->setTitle(QCoreApplication::translate("CallContract", "Optional", nullptr));
        labelSenderAddress->setText(QCoreApplication::translate("CallContract", "Sender Address", nullptr));
        pushButtonClearAll->setText(QCoreApplication::translate("CallContract", "Clear All", nullptr));
        pushButtonCallContract->setText(QCoreApplication::translate("CallContract", "Call Contract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CallContract: public Ui_CallContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLCONTRACT_H
