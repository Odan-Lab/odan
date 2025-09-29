/********************************************************************************
** Form generated from reading UI file 'editcontractinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCONTRACTINFODIALOG_H
#define UI_EDITCONTRACTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"
#include "qt/qvalidatedtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditContractInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelName;
    QLineEdit *labelEdit;
    QLabel *labelAddress;
    QValidatedLineEdit *addressEdit;
    QValidatedTextEdit *ABIEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelABI;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditContractInfoDialog)
    {
        if (EditContractInfoDialog->objectName().isEmpty())
            EditContractInfoDialog->setObjectName(QString::fromUtf8("EditContractInfoDialog"));
        EditContractInfoDialog->resize(590, 350);
        verticalLayout = new QVBoxLayout(EditContractInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 15, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        labelName = new QLabel(EditContractInfoDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        labelEdit = new QLineEdit(EditContractInfoDialog);
        labelEdit->setObjectName(QString::fromUtf8("labelEdit"));

        gridLayout->addWidget(labelEdit, 0, 1, 1, 1);

        labelAddress = new QLabel(EditContractInfoDialog);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        gridLayout->addWidget(labelAddress, 1, 0, 1, 1);

        addressEdit = new QValidatedLineEdit(EditContractInfoDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));

        gridLayout->addWidget(addressEdit, 1, 1, 1, 1);

        ABIEdit = new QValidatedTextEdit(EditContractInfoDialog);
        ABIEdit->setObjectName(QString::fromUtf8("ABIEdit"));

        gridLayout->addWidget(ABIEdit, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelABI = new QLabel(EditContractInfoDialog);
        labelABI->setObjectName(QString::fromUtf8("labelABI"));

        verticalLayout_3->addWidget(labelABI);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonsContainerWhite = new QWidget(EditContractInfoDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, 15);
        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(EditContractInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditContractInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditContractInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditContractInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *EditContractInfoDialog)
    {
        EditContractInfoDialog->setWindowTitle(QCoreApplication::translate("EditContractInfoDialog", "Dialog", nullptr));
        labelName->setText(QCoreApplication::translate("EditContractInfoDialog", "Label", nullptr));
        labelAddress->setText(QCoreApplication::translate("EditContractInfoDialog", "Contract Address", nullptr));
        labelABI->setText(QCoreApplication::translate("EditContractInfoDialog", "Interface (ABI)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditContractInfoDialog: public Ui_EditContractInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCONTRACTINFODIALOG_H
