/********************************************************************************
** Form generated from reading UI file 'superstakerconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERSTAKERCONFIGDIALOG_H
#define UI_SUPERSTAKERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SuperStakerConfigDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frameSuperStakeConfig;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelStaker;
    QLineEdit *txtStaker;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelConfiguration;
    QFrame *frameConfig;
    QVBoxLayout *verticalLayout;
    QFrame *frameStakerConfigTitle;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbRecommended;
    QCheckBox *cbCustom;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frameStakerConfig;
    QGridLayout *gridLayout;
    QLabel *labelMinUtxo;
    QLabel *labelListType;
    QComboBox *cbListType;
    QLabel *labelAddressList;
    QValidatedTextEdit *textAddressList;
    QSpacerItem *verticalSpacer;
    BitcoinAmountField *leMinUtxo;
    QLabel *labelMinFee;
    QSpinBox *sbMinFee;
    QFrame *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonCancel;

    void setupUi(QDialog *SuperStakerConfigDialog)
    {
        if (SuperStakerConfigDialog->objectName().isEmpty())
            SuperStakerConfigDialog->setObjectName(QString::fromUtf8("SuperStakerConfigDialog"));
        SuperStakerConfigDialog->resize(689, 486);
        verticalLayout_3 = new QVBoxLayout(SuperStakerConfigDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frameSuperStakeConfig = new QFrame(SuperStakerConfigDialog);
        frameSuperStakeConfig->setObjectName(QString::fromUtf8("frameSuperStakeConfig"));
        frameSuperStakeConfig->setFrameShape(QFrame::StyledPanel);
        frameSuperStakeConfig->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameSuperStakeConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelStaker = new QLabel(frameSuperStakeConfig);
        labelStaker->setObjectName(QString::fromUtf8("labelStaker"));

        horizontalLayout_2->addWidget(labelStaker);

        txtStaker = new QLineEdit(frameSuperStakeConfig);
        txtStaker->setObjectName(QString::fromUtf8("txtStaker"));
        txtStaker->setReadOnly(true);

        horizontalLayout_2->addWidget(txtStaker);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelConfiguration = new QLabel(frameSuperStakeConfig);
        labelConfiguration->setObjectName(QString::fromUtf8("labelConfiguration"));

        verticalLayout_2->addWidget(labelConfiguration);

        frameConfig = new QFrame(frameSuperStakeConfig);
        frameConfig->setObjectName(QString::fromUtf8("frameConfig"));
        frameConfig->setFrameShape(QFrame::StyledPanel);
        frameConfig->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameConfig);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameStakerConfigTitle = new QFrame(frameConfig);
        frameStakerConfigTitle->setObjectName(QString::fromUtf8("frameStakerConfigTitle"));
        frameStakerConfigTitle->setFrameShape(QFrame::StyledPanel);
        frameStakerConfigTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameStakerConfigTitle);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cbRecommended = new QCheckBox(frameStakerConfigTitle);
        cbRecommended->setObjectName(QString::fromUtf8("cbRecommended"));
        cbRecommended->setChecked(true);
        cbRecommended->setAutoExclusive(true);

        horizontalLayout_3->addWidget(cbRecommended);

        cbCustom = new QCheckBox(frameStakerConfigTitle);
        cbCustom->setObjectName(QString::fromUtf8("cbCustom"));
        cbCustom->setAutoExclusive(true);

        horizontalLayout_3->addWidget(cbCustom);

        horizontalSpacer_2 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frameStakerConfigTitle);

        frameStakerConfig = new QFrame(frameConfig);
        frameStakerConfig->setObjectName(QString::fromUtf8("frameStakerConfig"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameStakerConfig->sizePolicy().hasHeightForWidth());
        frameStakerConfig->setSizePolicy(sizePolicy);
        frameStakerConfig->setFrameShape(QFrame::StyledPanel);
        frameStakerConfig->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameStakerConfig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        labelMinUtxo = new QLabel(frameStakerConfig);
        labelMinUtxo->setObjectName(QString::fromUtf8("labelMinUtxo"));

        gridLayout->addWidget(labelMinUtxo, 1, 0, 1, 1);

        labelListType = new QLabel(frameStakerConfig);
        labelListType->setObjectName(QString::fromUtf8("labelListType"));

        gridLayout->addWidget(labelListType, 2, 0, 1, 1);

        cbListType = new QComboBox(frameStakerConfig);
        cbListType->setObjectName(QString::fromUtf8("cbListType"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbListType->sizePolicy().hasHeightForWidth());
        cbListType->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbListType, 2, 1, 1, 1);

        labelAddressList = new QLabel(frameStakerConfig);
        labelAddressList->setObjectName(QString::fromUtf8("labelAddressList"));

        gridLayout->addWidget(labelAddressList, 3, 0, 1, 1, Qt::AlignTop);

        textAddressList = new QValidatedTextEdit(frameStakerConfig);
        textAddressList->setObjectName(QString::fromUtf8("textAddressList"));

        gridLayout->addWidget(textAddressList, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        leMinUtxo = new BitcoinAmountField(frameStakerConfig);
        leMinUtxo->setObjectName(QString::fromUtf8("leMinUtxo"));

        gridLayout->addWidget(leMinUtxo, 1, 1, 1, 1);

        labelMinFee = new QLabel(frameStakerConfig);
        labelMinFee->setObjectName(QString::fromUtf8("labelMinFee"));

        gridLayout->addWidget(labelMinFee, 0, 0, 1, 1);

        sbMinFee = new QSpinBox(frameStakerConfig);
        sbMinFee->setObjectName(QString::fromUtf8("sbMinFee"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sbMinFee->sizePolicy().hasHeightForWidth());
        sbMinFee->setSizePolicy(sizePolicy2);
        sbMinFee->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sbMinFee, 0, 1, 1, 1);


        verticalLayout->addWidget(frameStakerConfig);


        verticalLayout_2->addWidget(frameConfig);


        verticalLayout_3->addWidget(frameSuperStakeConfig);

        buttonsContainerWhite = new QFrame(SuperStakerConfigDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        buttonsContainerWhite->setFrameShape(QFrame::StyledPanel);
        buttonsContainerWhite->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        horizontalSpacer = new QSpacerItem(206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(buttonsContainerWhite);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout->addWidget(buttonOk);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonCancel = new QPushButton(buttonsContainerWhite);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout_3->addWidget(buttonsContainerWhite);


        retranslateUi(SuperStakerConfigDialog);

        QMetaObject::connectSlotsByName(SuperStakerConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *SuperStakerConfigDialog)
    {
        SuperStakerConfigDialog->setWindowTitle(QCoreApplication::translate("SuperStakerConfigDialog", "Super staker options", nullptr));
        labelStaker->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Staker", nullptr));
        labelConfiguration->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Configuration:", nullptr));
        cbRecommended->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Recommended", nullptr));
        cbCustom->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Custom", nullptr));
        labelMinUtxo->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Minimum UTXO value", nullptr));
        labelListType->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Delegation list type", nullptr));
        labelAddressList->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Address list", nullptr));
        labelMinFee->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Minimum fee", nullptr));
        sbMinFee->setSuffix(QCoreApplication::translate("SuperStakerConfigDialog", "%", nullptr));
        buttonOk->setText(QCoreApplication::translate("SuperStakerConfigDialog", "OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("SuperStakerConfigDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuperStakerConfigDialog: public Ui_SuperStakerConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERSTAKERCONFIGDIALOG_H
