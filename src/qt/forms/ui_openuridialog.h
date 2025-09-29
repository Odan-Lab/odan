/********************************************************************************
** Form generated from reading UI file 'openuridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENURIDIALOG_H
#define UI_OPENURIDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_OpenURIDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QValidatedLineEdit *uriEdit;
    QToolButton *pasteButton;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenURIDialog)
    {
        if (OpenURIDialog->objectName().isEmpty())
            OpenURIDialog->setObjectName(QString::fromUtf8("OpenURIDialog"));
        OpenURIDialog->resize(564, 148);
        verticalLayout = new QVBoxLayout(OpenURIDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 15, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, -1, 30, -1);
        label = new QLabel(OpenURIDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        uriEdit = new QValidatedLineEdit(OpenURIDialog);
        uriEdit->setObjectName(QString::fromUtf8("uriEdit"));
        uriEdit->setPlaceholderText(QString::fromUtf8("odan:"));

        horizontalLayout->addWidget(uriEdit);

        pasteButton = new QToolButton(OpenURIDialog);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon);
        pasteButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(pasteButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonsContainerWhite = new QWidget(OpenURIDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, 15);
        buttonBox = new QDialogButtonBox(buttonsContainerWhite);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(OpenURIDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenURIDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenURIDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenURIDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenURIDialog)
    {
        OpenURIDialog->setWindowTitle(QCoreApplication::translate("OpenURIDialog", "Open odan URI", nullptr));
        label->setText(QCoreApplication::translate("OpenURIDialog", "URI:", nullptr));
#if QT_CONFIG(tooltip)
        pasteButton->setToolTip(QCoreApplication::translate("OpenURIDialog", "Paste address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenURIDialog: public Ui_OpenURIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENURIDIALOG_H
