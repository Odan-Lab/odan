/********************************************************************************
** Form generated from reading UI file 'signverifymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNVERIFYMESSAGEDIALOG_H
#define UI_SIGNVERIFYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/odanpushbutton.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SignVerifyMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSignMessage;
    QVBoxLayout *verticalLayout_SM;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_1_SM;
    QValidatedLineEdit *addressIn_SM;
    OdanPushButton *addressBookButton_SM;
    QFrame *vLine;
    OdanPushButton *pasteButton_SM;
    QPlainTextEdit *messageIn_SM;
    QHBoxLayout *horizontalLayout_2_SM;
    QLineEdit *signatureOut_SM;
    OdanPushButton *copySignatureButton_SM;
    QLabel *signatureLabel_SM;
    QLabel *infoLabel_SM;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_1_SM;
    QLabel *statusLabel_SM;
    QSpacerItem *horizontalSpacer_2_SM;
    OdanPushButton *clearButton_SM;
    OdanPushButton *signMessageButton_SM;
    QWidget *tabVerifyMessage;
    QVBoxLayout *verticalLayout_VM;
    QVBoxLayout *verticalLayout_2;
    QLabel *infoLabel_VM;
    QHBoxLayout *horizontalLayout_1_VM;
    QValidatedLineEdit *addressIn_VM;
    OdanPushButton *addressBookButton_VM;
    QPlainTextEdit *messageIn_VM;
    QValidatedLineEdit *signatureIn_VM;
    QWidget *buttonsContainerWhite_;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_1_VM;
    QLabel *statusLabel_VM;
    QSpacerItem *horizontalSpacer_2_VM;
    OdanPushButton *clearButton_VM;
    OdanPushButton *verifyMessageButton_VM;

    void setupUi(QDialog *SignVerifyMessageDialog)
    {
        if (SignVerifyMessageDialog->objectName().isEmpty())
            SignVerifyMessageDialog->setObjectName(QString::fromUtf8("SignVerifyMessageDialog"));
        SignVerifyMessageDialog->resize(800, 450);
        SignVerifyMessageDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SignVerifyMessageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(SignVerifyMessageDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabSignMessage = new QWidget();
        tabSignMessage->setObjectName(QString::fromUtf8("tabSignMessage"));
        verticalLayout_SM = new QVBoxLayout(tabSignMessage);
        verticalLayout_SM->setObjectName(QString::fromUtf8("verticalLayout_SM"));
        verticalLayout_SM->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 20, 30, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_1_SM = new QHBoxLayout();
        horizontalLayout_1_SM->setSpacing(6);
        horizontalLayout_1_SM->setObjectName(QString::fromUtf8("horizontalLayout_1_SM"));
        addressIn_SM = new QValidatedLineEdit(tabSignMessage);
        addressIn_SM->setObjectName(QString::fromUtf8("addressIn_SM"));

        horizontalLayout_1_SM->addWidget(addressIn_SM);

        addressBookButton_SM = new OdanPushButton(tabSignMessage);
        addressBookButton_SM->setObjectName(QString::fromUtf8("addressBookButton_SM"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton_SM->setIcon(icon);
        addressBookButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(addressBookButton_SM);

        vLine = new QFrame(tabSignMessage);
        vLine->setObjectName(QString::fromUtf8("vLine"));
        vLine->setMaximumSize(QSize(1, 22));
        vLine->setFrameShape(QFrame::VLine);
        vLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_1_SM->addWidget(vLine);

        pasteButton_SM = new OdanPushButton(tabSignMessage);
        pasteButton_SM->setObjectName(QString::fromUtf8("pasteButton_SM"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton_SM->setIcon(icon1);
        pasteButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(pasteButton_SM);


        gridLayout->addLayout(horizontalLayout_1_SM, 1, 1, 1, 1);

        messageIn_SM = new QPlainTextEdit(tabSignMessage);
        messageIn_SM->setObjectName(QString::fromUtf8("messageIn_SM"));

        gridLayout->addWidget(messageIn_SM, 2, 1, 1, 1);

        horizontalLayout_2_SM = new QHBoxLayout();
        horizontalLayout_2_SM->setSpacing(6);
        horizontalLayout_2_SM->setObjectName(QString::fromUtf8("horizontalLayout_2_SM"));
        signatureOut_SM = new QLineEdit(tabSignMessage);
        signatureOut_SM->setObjectName(QString::fromUtf8("signatureOut_SM"));
        QFont font;
        font.setItalic(true);
        signatureOut_SM->setFont(font);
        signatureOut_SM->setReadOnly(true);

        horizontalLayout_2_SM->addWidget(signatureOut_SM);

        copySignatureButton_SM = new OdanPushButton(tabSignMessage);
        copySignatureButton_SM->setObjectName(QString::fromUtf8("copySignatureButton_SM"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copySignatureButton_SM->setIcon(icon2);
        copySignatureButton_SM->setAutoDefault(false);

        horizontalLayout_2_SM->addWidget(copySignatureButton_SM);


        gridLayout->addLayout(horizontalLayout_2_SM, 3, 1, 1, 1);

        signatureLabel_SM = new QLabel(tabSignMessage);
        signatureLabel_SM->setObjectName(QString::fromUtf8("signatureLabel_SM"));
        signatureLabel_SM->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(signatureLabel_SM, 3, 0, 1, 1);

        infoLabel_SM = new QLabel(tabSignMessage);
        infoLabel_SM->setObjectName(QString::fromUtf8("infoLabel_SM"));
        infoLabel_SM->setTextFormat(Qt::PlainText);
        infoLabel_SM->setWordWrap(true);

        gridLayout->addWidget(infoLabel_SM, 0, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_SM->addLayout(verticalLayout_3);

        buttonsContainerWhite = new QWidget(tabSignMessage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer_1_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1_SM);

        statusLabel_SM = new QLabel(buttonsContainerWhite);
        statusLabel_SM->setObjectName(QString::fromUtf8("statusLabel_SM"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        statusLabel_SM->setFont(font1);
        statusLabel_SM->setWordWrap(true);

        horizontalLayout->addWidget(statusLabel_SM);

        horizontalSpacer_2_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2_SM);

        clearButton_SM = new OdanPushButton(buttonsContainerWhite);
        clearButton_SM->setObjectName(QString::fromUtf8("clearButton_SM"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_SM->setIcon(icon3);
        clearButton_SM->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton_SM);

        signMessageButton_SM = new OdanPushButton(buttonsContainerWhite);
        signMessageButton_SM->setObjectName(QString::fromUtf8("signMessageButton_SM"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signMessageButton_SM->setIcon(icon4);
        signMessageButton_SM->setAutoDefault(false);

        horizontalLayout->addWidget(signMessageButton_SM);


        verticalLayout_SM->addWidget(buttonsContainerWhite);

        tabWidget->addTab(tabSignMessage, QString());
        tabVerifyMessage = new QWidget();
        tabVerifyMessage->setObjectName(QString::fromUtf8("tabVerifyMessage"));
        verticalLayout_VM = new QVBoxLayout(tabVerifyMessage);
        verticalLayout_VM->setObjectName(QString::fromUtf8("verticalLayout_VM"));
        verticalLayout_VM->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        infoLabel_VM = new QLabel(tabVerifyMessage);
        infoLabel_VM->setObjectName(QString::fromUtf8("infoLabel_VM"));
        infoLabel_VM->setTextFormat(Qt::PlainText);
        infoLabel_VM->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel_VM->setWordWrap(true);

        verticalLayout_2->addWidget(infoLabel_VM);

        horizontalLayout_1_VM = new QHBoxLayout();
        horizontalLayout_1_VM->setSpacing(6);
        horizontalLayout_1_VM->setObjectName(QString::fromUtf8("horizontalLayout_1_VM"));
        addressIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        addressIn_VM->setObjectName(QString::fromUtf8("addressIn_VM"));

        horizontalLayout_1_VM->addWidget(addressIn_VM);

        addressBookButton_VM = new OdanPushButton(tabVerifyMessage);
        addressBookButton_VM->setObjectName(QString::fromUtf8("addressBookButton_VM"));
        addressBookButton_VM->setIcon(icon);
        addressBookButton_VM->setAutoDefault(false);

        horizontalLayout_1_VM->addWidget(addressBookButton_VM);


        verticalLayout_2->addLayout(horizontalLayout_1_VM);

        messageIn_VM = new QPlainTextEdit(tabVerifyMessage);
        messageIn_VM->setObjectName(QString::fromUtf8("messageIn_VM"));

        verticalLayout_2->addWidget(messageIn_VM);

        signatureIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        signatureIn_VM->setObjectName(QString::fromUtf8("signatureIn_VM"));

        verticalLayout_2->addWidget(signatureIn_VM);


        verticalLayout_VM->addLayout(verticalLayout_2);

        buttonsContainerWhite_ = new QWidget(tabVerifyMessage);
        buttonsContainerWhite_->setObjectName(QString::fromUtf8("buttonsContainerWhite_"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite_);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer_1_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1_VM);

        statusLabel_VM = new QLabel(buttonsContainerWhite_);
        statusLabel_VM->setObjectName(QString::fromUtf8("statusLabel_VM"));
        statusLabel_VM->setFont(font1);
        statusLabel_VM->setWordWrap(true);

        horizontalLayout_2->addWidget(statusLabel_VM);

        horizontalSpacer_2_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2_VM);

        clearButton_VM = new OdanPushButton(buttonsContainerWhite_);
        clearButton_VM->setObjectName(QString::fromUtf8("clearButton_VM"));
        clearButton_VM->setIcon(icon3);
        clearButton_VM->setAutoDefault(false);

        horizontalLayout_2->addWidget(clearButton_VM);

        verifyMessageButton_VM = new OdanPushButton(buttonsContainerWhite_);
        verifyMessageButton_VM->setObjectName(QString::fromUtf8("verifyMessageButton_VM"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessageButton_VM->setIcon(icon5);
        verifyMessageButton_VM->setAutoDefault(false);

        horizontalLayout_2->addWidget(verifyMessageButton_VM);


        verticalLayout_VM->addWidget(buttonsContainerWhite_);

        tabWidget->addTab(tabVerifyMessage, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(SignVerifyMessageDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SignVerifyMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignVerifyMessageDialog)
    {
        SignVerifyMessageDialog->setWindowTitle(QCoreApplication::translate("SignVerifyMessageDialog", "Signatures - Sign / Verify a Message", nullptr));
#if QT_CONFIG(tooltip)
        addressIn_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The Odan address to sign the message with", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressBookButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton_SM->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton_SM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pasteButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Paste address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton_SM->setText(QString());
#if QT_CONFIG(shortcut)
        pasteButton_SM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        messageIn_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Enter the message you want to sign here", nullptr));
#endif // QT_CONFIG(tooltip)
        messageIn_SM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter the message you want to sign here", nullptr));
        signatureOut_SM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Click \"Sign Message\" to generate signature", nullptr));
#if QT_CONFIG(tooltip)
        copySignatureButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Copy the current signature to the system clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copySignatureButton_SM->setText(QString());
        signatureLabel_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Signature", nullptr));
        infoLabel_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "You can sign messages/agreements with your addresses to prove you can receive odans sent to them. Be careful not to sign anything vague or random, as phishing attacks may try to trick you into signing your identity over to them. Only sign fully-detailed statements you agree to.", nullptr));
        statusLabel_SM->setText(QString());
#if QT_CONFIG(tooltip)
        clearButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Reset all sign message fields", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
#if QT_CONFIG(tooltip)
        signMessageButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Sign the message to prove you own this Odan address", nullptr));
#endif // QT_CONFIG(tooltip)
        signMessageButton_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Sign &Message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSignMessage), QCoreApplication::translate("SignVerifyMessageDialog", "&Sign Message", nullptr));
        infoLabel_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter the receiver's address, message (ensure you copy line breaks, spaces, tabs, etc. exactly) and signature below to verify the message. Be careful not to read more into the signature than what is in the signed message itself, to avoid being tricked by a man-in-the-middle attack. Note that this only proves the signing party receives with the address, it cannot prove sendership of any transaction!", nullptr));
#if QT_CONFIG(tooltip)
        addressIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The Odan address the message was signed with", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressBookButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton_VM->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton_VM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        messageIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The signed message to verify", nullptr));
#endif // QT_CONFIG(tooltip)
        messageIn_VM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "The signed message to verify", nullptr));
#if QT_CONFIG(tooltip)
        signatureIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The signature given when the message was signed", nullptr));
#endif // QT_CONFIG(tooltip)
        signatureIn_VM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "The signature given when the message was signed", nullptr));
        statusLabel_VM->setText(QString());
#if QT_CONFIG(tooltip)
        clearButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Reset all verify message fields", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
#if QT_CONFIG(tooltip)
        verifyMessageButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Verify the message to ensure it was signed with the specified Odan address", nullptr));
#endif // QT_CONFIG(tooltip)
        verifyMessageButton_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Verify &Message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabVerifyMessage), QCoreApplication::translate("SignVerifyMessageDialog", "&Verify Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignVerifyMessageDialog: public Ui_SignVerifyMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNVERIFYMESSAGEDIALOG_H
