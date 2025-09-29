/********************************************************************************
** Form generated from reading UI file 'transactiondescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONDESCDIALOG_H
#define UI_TRANSACTIONDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *detailText;

    void setupUi(QDialog *TransactionDescDialog)
    {
        if (TransactionDescDialog->objectName().isEmpty())
            TransactionDescDialog->setObjectName(QString::fromUtf8("TransactionDescDialog"));
        TransactionDescDialog->resize(660, 360);
        TransactionDescDialog->setWindowTitle(QString::fromUtf8("Transaction details"));
        verticalLayout = new QVBoxLayout(TransactionDescDialog);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 35, 30, 45);
        label = new QLabel(TransactionDescDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        detailText = new QTextBrowser(TransactionDescDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);
        detailText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        detailText->setOpenExternalLinks(true);

        verticalLayout->addWidget(detailText);


        retranslateUi(TransactionDescDialog);

        QMetaObject::connectSlotsByName(TransactionDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionDescDialog)
    {
        label->setText(QCoreApplication::translate("TransactionDescDialog", "Transaction details", nullptr));
#if QT_CONFIG(tooltip)
        detailText->setToolTip(QCoreApplication::translate("TransactionDescDialog", "This pane shows a detailed description of the transaction", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)TransactionDescDialog;
    } // retranslateUi

};

namespace Ui {
    class TransactionDescDialog: public Ui_TransactionDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONDESCDIALOG_H
