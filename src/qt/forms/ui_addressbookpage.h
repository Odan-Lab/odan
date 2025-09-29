/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/odanpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelExplanation;
    QLineEdit *searchLineEdit;
    QTableView *tableView;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout;
    OdanPushButton *newAddress;
    OdanPushButton *copyAddress;
    OdanPushButton *deleteAddress;
    QSpacerItem *horizontalSpacer;
    OdanPushButton *exportButton;
    QPushButton *closeButton;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QString::fromUtf8("AddressBookPage"));
        AddressBookPage->resize(760, 380);
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        labelExplanation = new QLabel(AddressBookPage);
        labelExplanation->setObjectName(QString::fromUtf8("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout_2->addWidget(labelExplanation);

        searchLineEdit = new QLineEdit(AddressBookPage);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        verticalLayout_2->addWidget(searchLineEdit);

        tableView = new QTableView(AddressBookPage);
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

        buttonsContainerWhite = new QWidget(AddressBookPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 25, 30, 15);
        newAddress = new OdanPushButton(buttonsContainerWhite);
        newAddress->setObjectName(QString::fromUtf8("newAddress"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        newAddress->setIcon(icon);
        newAddress->setAutoDefault(false);

        horizontalLayout->addWidget(newAddress);

        copyAddress = new OdanPushButton(buttonsContainerWhite);
        copyAddress->setObjectName(QString::fromUtf8("copyAddress"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copyAddress->setIcon(icon1);
        copyAddress->setAutoDefault(false);

        horizontalLayout->addWidget(copyAddress);

        deleteAddress = new OdanPushButton(buttonsContainerWhite);
        deleteAddress->setObjectName(QString::fromUtf8("deleteAddress"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAddress->setIcon(icon2);
        deleteAddress->setAutoDefault(false);

        horizontalLayout->addWidget(deleteAddress);

        horizontalSpacer = new QSpacerItem(267, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exportButton = new OdanPushButton(buttonsContainerWhite);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/export"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon3);
        exportButton->setAutoDefault(false);

        horizontalLayout->addWidget(exportButton);

        closeButton = new QPushButton(buttonsContainerWhite);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setAutoDefault(false);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("AddressBookPage", "Enter address or label to search", nullptr));
#if QT_CONFIG(tooltip)
        tableView->setToolTip(QCoreApplication::translate("AddressBookPage", "Right-click to edit address or label", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        newAddress->setToolTip(QCoreApplication::translate("AddressBookPage", "Create a new address", nullptr));
#endif // QT_CONFIG(tooltip)
        newAddress->setText(QCoreApplication::translate("AddressBookPage", "&New", nullptr));
#if QT_CONFIG(tooltip)
        copyAddress->setToolTip(QCoreApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyAddress->setText(QCoreApplication::translate("AddressBookPage", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        deleteAddress->setToolTip(QCoreApplication::translate("AddressBookPage", "Delete the currently selected address from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteAddress->setText(QCoreApplication::translate("AddressBookPage", "&Delete", nullptr));
#if QT_CONFIG(tooltip)
        exportButton->setToolTip(QCoreApplication::translate("AddressBookPage", "Export the data in the current tab to a file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportButton->setText(QCoreApplication::translate("AddressBookPage", "&Export", nullptr));
        closeButton->setText(QCoreApplication::translate("AddressBookPage", "C&lose", nullptr));
        (void)AddressBookPage;
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
