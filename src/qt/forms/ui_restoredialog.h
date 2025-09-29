/********************************************************************************
** Form generated from reading UI file 'restoredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREDIALOG_H
#define UI_RESTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RestoreDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbWalletPath;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtWalletPath;
    QPushButton *toolWalletPath;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbRestoreFile;
    QRadioButton *rbReindex;
    QRadioButton *rbInitialBlocksDownload;
    QRadioButton *rbLocalDeleteData;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblInfo;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnReset;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *btnBoxRestore;

    void setupUi(QDialog *RestoreDialog)
    {
        if (RestoreDialog->objectName().isEmpty())
            RestoreDialog->setObjectName(QString::fromUtf8("RestoreDialog"));
        RestoreDialog->resize(580, 429);
        verticalLayout_3 = new QVBoxLayout(RestoreDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        gbWalletPath = new QGroupBox(RestoreDialog);
        gbWalletPath->setObjectName(QString::fromUtf8("gbWalletPath"));
        horizontalLayout = new QHBoxLayout(gbWalletPath);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtWalletPath = new QLineEdit(gbWalletPath);
        txtWalletPath->setObjectName(QString::fromUtf8("txtWalletPath"));
        txtWalletPath->setReadOnly(true);

        horizontalLayout->addWidget(txtWalletPath);

        toolWalletPath = new QPushButton(gbWalletPath);
        toolWalletPath->setObjectName(QString::fromUtf8("toolWalletPath"));

        horizontalLayout->addWidget(toolWalletPath);


        verticalLayout_2->addWidget(gbWalletPath);

        groupBox = new QGroupBox(RestoreDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbRestoreFile = new QRadioButton(groupBox);
        rbRestoreFile->setObjectName(QString::fromUtf8("rbRestoreFile"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rbRestoreFile->sizePolicy().hasHeightForWidth());
        rbRestoreFile->setSizePolicy(sizePolicy1);
        rbRestoreFile->setChecked(true);

        verticalLayout->addWidget(rbRestoreFile);

        rbReindex = new QRadioButton(groupBox);
        rbReindex->setObjectName(QString::fromUtf8("rbReindex"));
        sizePolicy1.setHeightForWidth(rbReindex->sizePolicy().hasHeightForWidth());
        rbReindex->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(rbReindex);

        rbInitialBlocksDownload = new QRadioButton(groupBox);
        rbInitialBlocksDownload->setObjectName(QString::fromUtf8("rbInitialBlocksDownload"));

        verticalLayout->addWidget(rbInitialBlocksDownload);

        rbLocalDeleteData = new QRadioButton(groupBox);
        rbLocalDeleteData->setObjectName(QString::fromUtf8("rbLocalDeleteData"));
        sizePolicy1.setHeightForWidth(rbLocalDeleteData->sizePolicy().hasHeightForWidth());
        rbLocalDeleteData->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(rbLocalDeleteData);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lblInfo = new QLabel(RestoreDialog);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setWordWrap(true);

        verticalLayout_2->addWidget(lblInfo);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(RestoreDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 25, 30, 15);
        btnReset = new QPushButton(buttonsContainerWhite);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        horizontalLayout_2->addWidget(btnReset);

        horizontalSpacer = new QSpacerItem(196, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnBoxRestore = new QDialogButtonBox(buttonsContainerWhite);
        btnBoxRestore->setObjectName(QString::fromUtf8("btnBoxRestore"));
        btnBoxRestore->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(btnBoxRestore);


        verticalLayout_3->addWidget(buttonsContainerWhite);


        retranslateUi(RestoreDialog);

        QMetaObject::connectSlotsByName(RestoreDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreDialog)
    {
        RestoreDialog->setWindowTitle(QCoreApplication::translate("RestoreDialog", "Restore Wallet", nullptr));
        gbWalletPath->setTitle(QCoreApplication::translate("RestoreDialog", "Select wallet file to restore from", nullptr));
        toolWalletPath->setText(QCoreApplication::translate("RestoreDialog", "...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RestoreDialog", "Choose wallet restore option", nullptr));
        rbRestoreFile->setText(QCoreApplication::translate("RestoreDialog", "Restore file", nullptr));
        rbReindex->setText(QCoreApplication::translate("RestoreDialog", "Rebuild blockchain index", nullptr));
        rbInitialBlocksDownload->setText(QCoreApplication::translate("RestoreDialog", "Force initial blocks download mode - fix the blockchain data.", nullptr));
        rbLocalDeleteData->setText(QCoreApplication::translate("RestoreDialog", "Delete the local copy of the block chain", nullptr));
        lblInfo->setText(QCoreApplication::translate("RestoreDialog", "The wallet.dat will be restored from the selected location and the Qt Wallet will be restarted with the -reindex or -deleteblockchaindata option.", nullptr));
        btnReset->setText(QCoreApplication::translate("RestoreDialog", "&Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestoreDialog: public Ui_RestoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREDIALOG_H
