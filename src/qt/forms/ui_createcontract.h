/********************************************************************************
** Form generated from reading UI file 'createcontract.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECONTRACT_H
#define UI_CREATECONTRACT_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_CreateContract
{
public:
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *createContractPage;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameContract;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout;
    QValidatedTextEdit *textEditInterface;
    QValidatedTextEdit *textEditBytecode;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelInterface;
    QVBoxLayout *verticalLayout;
    QLabel *labelBytecode;
    QFrame *hContractLine;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBoxConstructor;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollAreaConstructor;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *hContractLine2;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBoxOptional;
    QGridLayout *gridLayout_2;
    AddressField *lineEditSenderAddress;
    QLabel *labelSenderAddress;
    QLabel *labelGasPrice;
    QLabel *labelGasLimit;
    QSpinBox *lineEditGasLimit;
    BitcoinAmountField *lineEditGasPrice;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClearAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonCreateContract;

    void setupUi(QWidget *CreateContract)
    {
        if (CreateContract->objectName().isEmpty())
            CreateContract->setObjectName(QString::fromUtf8("CreateContract"));
        CreateContract->resize(706, 587);
        verticalLayout_7 = new QVBoxLayout(CreateContract);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        stackedWidget = new QStackedWidget(CreateContract);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        createContractPage = new QWidget();
        createContractPage->setObjectName(QString::fromUtf8("createContractPage"));
        verticalLayout_8 = new QVBoxLayout(createContractPage);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(9, 0, 9, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 9, -1);
        labelTitle = new QLabel(createContractPage);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_11->addLayout(horizontalLayout);

        frameContract = new QFrame(createContractPage);
        frameContract->setObjectName(QString::fromUtf8("frameContract"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameContract->sizePolicy().hasHeightForWidth());
        frameContract->setSizePolicy(sizePolicy);
        frameContract->setFrameShape(QFrame::StyledPanel);
        frameContract->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frameContract);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 0, -1);
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

        gridLayout->addWidget(textEditInterface, 1, 1, 1, 1);

        textEditBytecode = new QValidatedTextEdit(frameContract);
        textEditBytecode->setObjectName(QString::fromUtf8("textEditBytecode"));
        sizePolicy1.setHeightForWidth(textEditBytecode->sizePolicy().hasHeightForWidth());
        textEditBytecode->setSizePolicy(sizePolicy1);
        textEditBytecode->setMaximumSize(QSize(16777215, 65));
        textEditBytecode->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(textEditBytecode, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelInterface = new QLabel(frameContract);
        labelInterface->setObjectName(QString::fromUtf8("labelInterface"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelInterface->sizePolicy().hasHeightForWidth());
        labelInterface->setSizePolicy(sizePolicy2);
        labelInterface->setMinimumSize(QSize(160, 0));

        verticalLayout_3->addWidget(labelInterface);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelBytecode = new QLabel(frameContract);
        labelBytecode->setObjectName(QString::fromUtf8("labelBytecode"));
        sizePolicy2.setHeightForWidth(labelBytecode->sizePolicy().hasHeightForWidth());
        labelBytecode->setSizePolicy(sizePolicy2);
        labelBytecode->setMinimumSize(QSize(160, 0));

        verticalLayout->addWidget(labelBytecode);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout);


        verticalLayout_11->addWidget(frameContract);


        verticalLayout_8->addLayout(verticalLayout_11);

        hContractLine = new QFrame(createContractPage);
        hContractLine->setObjectName(QString::fromUtf8("hContractLine"));
        hContractLine->setFrameShape(QFrame::HLine);
        hContractLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(hContractLine);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(9, -1, 9, -1);
        groupBoxConstructor = new QGroupBox(createContractPage);
        groupBoxConstructor->setObjectName(QString::fromUtf8("groupBoxConstructor"));
        verticalLayout_2 = new QVBoxLayout(groupBoxConstructor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, -1, -1);
        scrollAreaConstructor = new QScrollArea(groupBoxConstructor);
        scrollAreaConstructor->setObjectName(QString::fromUtf8("scrollAreaConstructor"));
        scrollAreaConstructor->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 656, 133));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        scrollAreaConstructor->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollAreaConstructor);


        verticalLayout_12->addWidget(groupBoxConstructor);


        verticalLayout_8->addLayout(verticalLayout_12);

        hContractLine2 = new QFrame(createContractPage);
        hContractLine2->setObjectName(QString::fromUtf8("hContractLine2"));
        hContractLine2->setFrameShape(QFrame::HLine);
        hContractLine2->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(hContractLine2);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(9, -1, 9, -1);
        groupBoxOptional = new QGroupBox(createContractPage);
        groupBoxOptional->setObjectName(QString::fromUtf8("groupBoxOptional"));
        gridLayout_2 = new QGridLayout(groupBoxOptional);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(15, 15, -1, -1);
        lineEditSenderAddress = new AddressField(groupBoxOptional);
        lineEditSenderAddress->setObjectName(QString::fromUtf8("lineEditSenderAddress"));
        lineEditSenderAddress->setMinimumSize(QSize(370, 0));

        gridLayout_2->addWidget(lineEditSenderAddress, 2, 1, 1, 4);

        labelSenderAddress = new QLabel(groupBoxOptional);
        labelSenderAddress->setObjectName(QString::fromUtf8("labelSenderAddress"));
        sizePolicy2.setHeightForWidth(labelSenderAddress->sizePolicy().hasHeightForWidth());
        labelSenderAddress->setSizePolicy(sizePolicy2);
        labelSenderAddress->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelSenderAddress, 2, 0, 1, 1);

        labelGasPrice = new QLabel(groupBoxOptional);
        labelGasPrice->setObjectName(QString::fromUtf8("labelGasPrice"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelGasPrice->sizePolicy().hasHeightForWidth());
        labelGasPrice->setSizePolicy(sizePolicy3);
        labelGasPrice->setMinimumSize(QSize(90, 0));

        gridLayout_2->addWidget(labelGasPrice, 0, 3, 1, 1);

        labelGasLimit = new QLabel(groupBoxOptional);
        labelGasLimit->setObjectName(QString::fromUtf8("labelGasLimit"));
        sizePolicy2.setHeightForWidth(labelGasLimit->sizePolicy().hasHeightForWidth());
        labelGasLimit->setSizePolicy(sizePolicy2);
        labelGasLimit->setMinimumSize(QSize(160, 0));

        gridLayout_2->addWidget(labelGasLimit, 0, 0, 1, 1);

        lineEditGasLimit = new QSpinBox(groupBoxOptional);
        lineEditGasLimit->setObjectName(QString::fromUtf8("lineEditGasLimit"));
        sizePolicy1.setHeightForWidth(lineEditGasLimit->sizePolicy().hasHeightForWidth());
        lineEditGasLimit->setSizePolicy(sizePolicy1);
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEditGasLimit, 0, 1, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(groupBoxOptional);
        lineEditGasPrice->setObjectName(QString::fromUtf8("lineEditGasPrice"));

        gridLayout_2->addWidget(lineEditGasPrice, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_14->addWidget(groupBoxOptional);


        verticalLayout_8->addLayout(verticalLayout_14);

        stackedWidget->addWidget(createContractPage);

        verticalLayout_7->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(18, 9, 18, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonClearAll = new QPushButton(CreateContract);
        pushButtonClearAll->setObjectName(QString::fromUtf8("pushButtonClearAll"));

        horizontalLayout_3->addWidget(pushButtonClearAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonCreateContract = new QPushButton(CreateContract);
        pushButtonCreateContract->setObjectName(QString::fromUtf8("pushButtonCreateContract"));

        horizontalLayout_3->addWidget(pushButtonCreateContract);


        verticalLayout_7->addLayout(horizontalLayout_3);


        retranslateUi(CreateContract);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateContract);
    } // setupUi

    void retranslateUi(QWidget *CreateContract)
    {
        CreateContract->setWindowTitle(QCoreApplication::translate("CreateContract", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("CreateContract", "Create Smart Contract", nullptr));
        labelInterface->setText(QCoreApplication::translate("CreateContract", "Interface (ABI)", nullptr));
        labelBytecode->setText(QCoreApplication::translate("CreateContract", "Bytecode", nullptr));
        groupBoxConstructor->setTitle(QCoreApplication::translate("CreateContract", "Constructor", nullptr));
        groupBoxOptional->setTitle(QCoreApplication::translate("CreateContract", "Optional", nullptr));
        labelSenderAddress->setText(QCoreApplication::translate("CreateContract", "Sender Address", nullptr));
        labelGasPrice->setText(QCoreApplication::translate("CreateContract", "Gas Price", nullptr));
        labelGasLimit->setText(QCoreApplication::translate("CreateContract", "Gas Limit", nullptr));
        pushButtonClearAll->setText(QCoreApplication::translate("CreateContract", "Clear All", nullptr));
        pushButtonCreateContract->setText(QCoreApplication::translate("CreateContract", "Create Contract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateContract: public Ui_CreateContract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECONTRACT_H
