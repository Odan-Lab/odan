/********************************************************************************
** Form generated from reading UI file 'editsuperstakerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSUPERSTAKERDIALOG_H
#define UI_EDITSUPERSTAKERDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_EditSuperStakerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *labelStakerAddress;
    QLineEdit *lineEditStakerName;
    QLabel *labelStakerName;
    QLineEdit *lineEditStakerAddress;
    QSpacerItem *verticalSpacer_2;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *editSuperStakerButton;

    void setupUi(QDialog *EditSuperStakerDialog)
    {
        if (EditSuperStakerDialog->objectName().isEmpty())
            EditSuperStakerDialog->setObjectName(QString::fromUtf8("EditSuperStakerDialog"));
        EditSuperStakerDialog->resize(600, 360);
        verticalLayout = new QVBoxLayout(EditSuperStakerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        labelStakerAddress = new QLabel(EditSuperStakerDialog);
        labelStakerAddress->setObjectName(QString::fromUtf8("labelStakerAddress"));
        labelStakerAddress->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerAddress, 1, 0, 1, 1);

        lineEditStakerName = new QLineEdit(EditSuperStakerDialog);
        lineEditStakerName->setObjectName(QString::fromUtf8("lineEditStakerName"));

        gridLayout->addWidget(lineEditStakerName, 0, 1, 1, 1);

        labelStakerName = new QLabel(EditSuperStakerDialog);
        labelStakerName->setObjectName(QString::fromUtf8("labelStakerName"));
        labelStakerName->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelStakerName, 0, 0, 1, 1);

        lineEditStakerAddress = new QLineEdit(EditSuperStakerDialog);
        lineEditStakerAddress->setObjectName(QString::fromUtf8("lineEditStakerAddress"));
        lineEditStakerAddress->setReadOnly(true);

        gridLayout->addWidget(lineEditStakerAddress, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonsContainerWhite = new QWidget(EditSuperStakerDialog);
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

        editSuperStakerButton = new QPushButton(buttonsContainerWhite);
        editSuperStakerButton->setObjectName(QString::fromUtf8("editSuperStakerButton"));

        horizontalLayout_2->addWidget(editSuperStakerButton);


        verticalLayout->addWidget(buttonsContainerWhite);


        retranslateUi(EditSuperStakerDialog);

        QMetaObject::connectSlotsByName(EditSuperStakerDialog);
    } // setupUi

    void retranslateUi(QDialog *EditSuperStakerDialog)
    {
        EditSuperStakerDialog->setWindowTitle(QCoreApplication::translate("EditSuperStakerDialog", "Dialog", nullptr));
        labelStakerAddress->setText(QCoreApplication::translate("EditSuperStakerDialog", "Staker address", nullptr));
        labelStakerName->setText(QCoreApplication::translate("EditSuperStakerDialog", "Staker name", nullptr));
        cancelButton->setText(QCoreApplication::translate("EditSuperStakerDialog", "Cancel", nullptr));
        editSuperStakerButton->setText(QCoreApplication::translate("EditSuperStakerDialog", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditSuperStakerDialog: public Ui_EditSuperStakerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSUPERSTAKERDIALOG_H
