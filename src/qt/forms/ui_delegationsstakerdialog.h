/********************************************************************************
** Form generated from reading UI file 'delegationsstakerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELEGATIONSSTAKERDIALOG_H
#define UI_DELEGATIONSSTAKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DelegationsStakerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStaker;
    QLineEdit *txtStaker;
    QWidget *widgetDelegations;
    QVBoxLayout *delegationViewLayout;
    QSpacerItem *verticalSpacer;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *DelegationsStakerDialog)
    {
        if (DelegationsStakerDialog->objectName().isEmpty())
            DelegationsStakerDialog->setObjectName(QString::fromUtf8("DelegationsStakerDialog"));
        DelegationsStakerDialog->resize(829, 452);
        verticalLayout = new QVBoxLayout(DelegationsStakerDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(15);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(30, 20, 30, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelStaker = new QLabel(DelegationsStakerDialog);
        labelStaker->setObjectName(QString::fromUtf8("labelStaker"));

        horizontalLayout->addWidget(labelStaker);

        txtStaker = new QLineEdit(DelegationsStakerDialog);
        txtStaker->setObjectName(QString::fromUtf8("txtStaker"));
        txtStaker->setReadOnly(true);

        horizontalLayout->addWidget(txtStaker);


        verticalLayout_1->addLayout(horizontalLayout);

        widgetDelegations = new QWidget(DelegationsStakerDialog);
        widgetDelegations->setObjectName(QString::fromUtf8("widgetDelegations"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetDelegations->sizePolicy().hasHeightForWidth());
        widgetDelegations->setSizePolicy(sizePolicy);
        delegationViewLayout = new QVBoxLayout(widgetDelegations);
        delegationViewLayout->setObjectName(QString::fromUtf8("delegationViewLayout"));
        delegationViewLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_1->addWidget(widgetDelegations);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_1);

        buttonsContainerWhite = new QWidget(DelegationsStakerDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(buttonsContainerWhite);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(DelegationsStakerDialog);

        QMetaObject::connectSlotsByName(DelegationsStakerDialog);
    } // setupUi

    void retranslateUi(QDialog *DelegationsStakerDialog)
    {
        DelegationsStakerDialog->setWindowTitle(QCoreApplication::translate("DelegationsStakerDialog", "Dialog", nullptr));
        labelStaker->setText(QCoreApplication::translate("DelegationsStakerDialog", "Staker", nullptr));
        okButton->setText(QCoreApplication::translate("DelegationsStakerDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelegationsStakerDialog: public Ui_DelegationsStakerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELEGATIONSSTAKERDIALOG_H
