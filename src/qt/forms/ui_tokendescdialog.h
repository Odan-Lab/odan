/********************************************************************************
** Form generated from reading UI file 'tokendescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOKENDESCDIALOG_H
#define UI_TOKENDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TokenDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *detailText;

    void setupUi(QDialog *TokenDescDialog)
    {
        if (TokenDescDialog->objectName().isEmpty())
            TokenDescDialog->setObjectName(QString::fromUtf8("TokenDescDialog"));
        TokenDescDialog->resize(660, 360);
        verticalLayout = new QVBoxLayout(TokenDescDialog);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 35, 30, 45);
        label = new QLabel(TokenDescDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        detailText = new QTextBrowser(TokenDescDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);
        detailText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        detailText->setOpenExternalLinks(true);

        verticalLayout->addWidget(detailText);


        retranslateUi(TokenDescDialog);

        QMetaObject::connectSlotsByName(TokenDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TokenDescDialog)
    {
        TokenDescDialog->setWindowTitle(QCoreApplication::translate("TokenDescDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TokenDescDialog", "Token transaction details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TokenDescDialog: public Ui_TokenDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOKENDESCDIALOG_H
