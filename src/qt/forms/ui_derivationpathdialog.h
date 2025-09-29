/********************************************************************************
** Form generated from reading UI file 'derivationpathdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DERIVATIONPATHDIALOG_H
#define UI_DERIVATIONPATHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_DerivationPathDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblAddressType;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cbLegacy;
    QCheckBox *cbP2SH;
    QCheckBox *cbSegWit;
    QSpacerItem *verticalSpacer;
    QLabel *lblPath;
    QGridLayout *gridLayout;
    QLabel *lblLegacy;
    QValidatedLineEdit *txtLegacy;
    QLabel *lblP2SH;
    QValidatedLineEdit *txtP2SH;
    QLabel *lblSegWit;
    QValidatedLineEdit *txtSegWit;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblRescan;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *cbRescan;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DerivationPathDialog)
    {
        if (DerivationPathDialog->objectName().isEmpty())
            DerivationPathDialog->setObjectName(QString::fromUtf8("DerivationPathDialog"));
        DerivationPathDialog->resize(574, 507);
        DerivationPathDialog->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(DerivationPathDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, 30, -1);
        labelTitle = new QLabel(DerivationPathDialog);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout->addWidget(labelTitle);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lblAddressType = new QLabel(DerivationPathDialog);
        lblAddressType->setObjectName(QString::fromUtf8("lblAddressType"));

        verticalLayout_3->addWidget(lblAddressType);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        cbLegacy = new QCheckBox(DerivationPathDialog);
        cbLegacy->setObjectName(QString::fromUtf8("cbLegacy"));
        cbLegacy->setEnabled(true);
        cbLegacy->setChecked(false);

        verticalLayout_4->addWidget(cbLegacy);

        cbP2SH = new QCheckBox(DerivationPathDialog);
        cbP2SH->setObjectName(QString::fromUtf8("cbP2SH"));
        cbP2SH->setChecked(false);

        verticalLayout_4->addWidget(cbP2SH);

        cbSegWit = new QCheckBox(DerivationPathDialog);
        cbSegWit->setObjectName(QString::fromUtf8("cbSegWit"));
        cbSegWit->setChecked(false);

        verticalLayout_4->addWidget(cbSegWit);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        lblPath = new QLabel(DerivationPathDialog);
        lblPath->setObjectName(QString::fromUtf8("lblPath"));

        verticalLayout_3->addWidget(lblPath);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        lblLegacy = new QLabel(DerivationPathDialog);
        lblLegacy->setObjectName(QString::fromUtf8("lblLegacy"));

        gridLayout->addWidget(lblLegacy, 0, 0, 1, 1);

        txtLegacy = new QValidatedLineEdit(DerivationPathDialog);
        txtLegacy->setObjectName(QString::fromUtf8("txtLegacy"));

        gridLayout->addWidget(txtLegacy, 0, 1, 1, 1);

        lblP2SH = new QLabel(DerivationPathDialog);
        lblP2SH->setObjectName(QString::fromUtf8("lblP2SH"));

        gridLayout->addWidget(lblP2SH, 1, 0, 1, 1);

        txtP2SH = new QValidatedLineEdit(DerivationPathDialog);
        txtP2SH->setObjectName(QString::fromUtf8("txtP2SH"));

        gridLayout->addWidget(txtP2SH, 1, 1, 1, 1);

        lblSegWit = new QLabel(DerivationPathDialog);
        lblSegWit->setObjectName(QString::fromUtf8("lblSegWit"));

        gridLayout->addWidget(lblSegWit, 2, 0, 1, 1);

        txtSegWit = new QValidatedLineEdit(DerivationPathDialog);
        txtSegWit->setObjectName(QString::fromUtf8("txtSegWit"));

        gridLayout->addWidget(txtSegWit, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        lblRescan = new QLabel(DerivationPathDialog);
        lblRescan->setObjectName(QString::fromUtf8("lblRescan"));

        verticalLayout_3->addWidget(lblRescan);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        cbRescan = new QCheckBox(DerivationPathDialog);
        cbRescan->setObjectName(QString::fromUtf8("cbRescan"));
        cbRescan->setChecked(false);

        verticalLayout_5->addWidget(cbRescan);


        verticalLayout_3->addLayout(verticalLayout_5);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonsContainerWhite = new QWidget(DerivationPathDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(buttonsContainerWhite);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_2->addWidget(buttonsContainerWhite);


        retranslateUi(DerivationPathDialog);

        QMetaObject::connectSlotsByName(DerivationPathDialog);
    } // setupUi

    void retranslateUi(QDialog *DerivationPathDialog)
    {
        DerivationPathDialog->setWindowTitle(QCoreApplication::translate("DerivationPathDialog", "Select script type and derivation path", nullptr));
        labelTitle->setText(QCoreApplication::translate("DerivationPathDialog", "Script type and derivation path", nullptr));
        lblAddressType->setText(QCoreApplication::translate("DerivationPathDialog", "Choose the type of addresses in your wallet.", nullptr));
        cbLegacy->setText(QCoreApplication::translate("DerivationPathDialog", "legacy (p2pkh)", nullptr));
        cbP2SH->setText(QCoreApplication::translate("DerivationPathDialog", "p2sh-segwit (p2wpkh-p2sh)", nullptr));
        cbSegWit->setText(QCoreApplication::translate("DerivationPathDialog", "native segwit (p2wpkh)", nullptr));
        lblPath->setText(QCoreApplication::translate("DerivationPathDialog", "You can override the suggested derivation path.\n"
"If you are not sure what this is, leave this field unchanged.", nullptr));
        lblLegacy->setText(QCoreApplication::translate("DerivationPathDialog", "legacy", nullptr));
        lblP2SH->setText(QCoreApplication::translate("DerivationPathDialog", "p2sh-segwit", nullptr));
        lblSegWit->setText(QCoreApplication::translate("DerivationPathDialog", "native segwit", nullptr));
        lblRescan->setText(QCoreApplication::translate("DerivationPathDialog", "Rescan the local blockchain for wallet related transactions.", nullptr));
        cbRescan->setText(QCoreApplication::translate("DerivationPathDialog", "rescan blockchain", nullptr));
        okButton->setText(QCoreApplication::translate("DerivationPathDialog", "&OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("DerivationPathDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DerivationPathDialog: public Ui_DerivationPathDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DERIVATIONPATHDIALOG_H
