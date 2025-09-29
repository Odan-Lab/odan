/********************************************************************************
** Form generated from reading UI file 'contractbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACTBOOKPAGE_H
#define UI_CONTRACTBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/odanpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ContractBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelExplanation;
    QTableView *tableView;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    OdanPushButton *newContractInfo;
    OdanPushButton *copyAddress;
    OdanPushButton *deleteContractInfo;
    QSpacerItem *horizontalSpacer;
    OdanPushButton *exportButton;
    QPushButton *chooseContractInfo;

    void setupUi(QWidget *ContractBookPage)
    {
        if (ContractBookPage->objectName().isEmpty())
            ContractBookPage->setObjectName(QString::fromUtf8("ContractBookPage"));
        ContractBookPage->resize(760, 380);
        verticalLayout = new QVBoxLayout(ContractBookPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        labelExplanation = new QLabel(ContractBookPage);
        labelExplanation->setObjectName(QString::fromUtf8("labelExplanation"));

        verticalLayout_2->addWidget(labelExplanation);

        tableView = new QTableView(ContractBookPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addLayout(verticalLayout_2);

        buttonsContainerWhite = new QWidget(ContractBookPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 25, 30, 15);
        newContractInfo = new OdanPushButton(buttonsContainerWhite);
        newContractInfo->setObjectName(QString::fromUtf8("newContractInfo"));

        horizontalLayout_2->addWidget(newContractInfo);

        copyAddress = new OdanPushButton(buttonsContainerWhite);
        copyAddress->setObjectName(QString::fromUtf8("copyAddress"));

        horizontalLayout_2->addWidget(copyAddress);

        deleteContractInfo = new OdanPushButton(buttonsContainerWhite);
        deleteContractInfo->setObjectName(QString::fromUtf8("deleteContractInfo"));

        horizontalLayout_2->addWidget(deleteContractInfo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        exportButton = new OdanPushButton(buttonsContainerWhite);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        horizontalLayout_2->addWidget(exportButton);

        chooseContractInfo = new QPushButton(buttonsContainerWhite);
        chooseContractInfo->setObjectName(QString::fromUtf8("chooseContractInfo"));

        horizontalLayout_2->addWidget(chooseContractInfo);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(ContractBookPage);

        QMetaObject::connectSlotsByName(ContractBookPage);
    } // setupUi

    void retranslateUi(QWidget *ContractBookPage)
    {
        ContractBookPage->setWindowTitle(QCoreApplication::translate("ContractBookPage", "Form", nullptr));
        labelExplanation->setText(QString());
#if QT_CONFIG(tooltip)
        newContractInfo->setToolTip(QCoreApplication::translate("ContractBookPage", "Create a new contract info", nullptr));
#endif // QT_CONFIG(tooltip)
        newContractInfo->setText(QCoreApplication::translate("ContractBookPage", "New", nullptr));
#if QT_CONFIG(tooltip)
        copyAddress->setToolTip(QCoreApplication::translate("ContractBookPage", "Copy the currently selected contract address to the system clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyAddress->setText(QCoreApplication::translate("ContractBookPage", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        deleteContractInfo->setToolTip(QCoreApplication::translate("ContractBookPage", "Delete the currently selected contract info from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteContractInfo->setText(QCoreApplication::translate("ContractBookPage", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        exportButton->setToolTip(QCoreApplication::translate("ContractBookPage", "Export the data to a file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportButton->setText(QCoreApplication::translate("ContractBookPage", "Export", nullptr));
        chooseContractInfo->setText(QCoreApplication::translate("ContractBookPage", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContractBookPage: public Ui_ContractBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACTBOOKPAGE_H
