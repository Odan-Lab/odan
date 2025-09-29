/********************************************************************************
** Form generated from reading UI file 'addsuperstakerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPERSTAKERPAGE_H
#define UI_ADDSUPERSTAKERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/addressfield.h"

QT_BEGIN_NAMESPACE

class Ui_AddSuperStakerPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    AddressField *lineEditStakerAddress;
    QLabel *labelStakerAddress;
    QLabel *labelStakerName;
    QLineEdit *lineEditStakerName;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addSuperStakerButton;

    void setupUi(QDialog *AddSuperStakerPage)
    {
        if (AddSuperStakerPage->objectName().isEmpty())
            AddSuperStakerPage->setObjectName(QString::fromUtf8("AddSuperStakerPage"));
        AddSuperStakerPage->resize(600, 360);
        AddSuperStakerPage->setMinimumSize(QSize(100, 0));
        verticalLayout = new QVBoxLayout(AddSuperStakerPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        lineEditStakerAddress = new AddressField(AddSuperStakerPage);
        lineEditStakerAddress->setObjectName(QString::fromUtf8("lineEditStakerAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditStakerAddress->sizePolicy().hasHeightForWidth());
        lineEditStakerAddress->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditStakerAddress, 1, 1, 1, 1);

        labelStakerAddress = new QLabel(AddSuperStakerPage);
        labelStakerAddress->setObjectName(QString::fromUtf8("labelStakerAddress"));
        labelStakerAddress->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerAddress, 1, 0, 1, 1);

        labelStakerName = new QLabel(AddSuperStakerPage);
        labelStakerName->setObjectName(QString::fromUtf8("labelStakerName"));
        labelStakerName->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerName, 0, 0, 1, 1);

        lineEditStakerName = new QLineEdit(AddSuperStakerPage);
        lineEditStakerName->setObjectName(QString::fromUtf8("lineEditStakerName"));
        lineEditStakerName->setMaxLength(50);

        gridLayout->addWidget(lineEditStakerName, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(AddSuperStakerPage);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addSuperStakerButton = new QPushButton(buttonsContainerWhite);
        addSuperStakerButton->setObjectName(QString::fromUtf8("addSuperStakerButton"));

        horizontalLayout_2->addWidget(addSuperStakerButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(AddSuperStakerPage);

        QMetaObject::connectSlotsByName(AddSuperStakerPage);
    } // setupUi

    void retranslateUi(QDialog *AddSuperStakerPage)
    {
        AddSuperStakerPage->setWindowTitle(QCoreApplication::translate("AddSuperStakerPage", "Dialog", nullptr));
        labelStakerAddress->setText(QCoreApplication::translate("AddSuperStakerPage", "Staker address", nullptr));
        labelStakerName->setText(QCoreApplication::translate("AddSuperStakerPage", "Staker name", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddSuperStakerPage", "Cancel", nullptr));
        addSuperStakerButton->setText(QCoreApplication::translate("AddSuperStakerPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSuperStakerPage: public Ui_AddSuperStakerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPERSTAKERPAGE_H
