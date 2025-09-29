/********************************************************************************
** Form generated from reading UI file 'delegationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELEGATIONPAGE_H
#define UI_DELEGATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DelegationPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *delegationViewLayout;

    void setupUi(QWidget *DelegationPage)
    {
        if (DelegationPage->objectName().isEmpty())
            DelegationPage->setObjectName(QString::fromUtf8("DelegationPage"));
        DelegationPage->resize(723, 467);
        verticalLayout_2 = new QVBoxLayout(DelegationPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(DelegationPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 409));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        delegationViewLayout = new QVBoxLayout();
        delegationViewLayout->setObjectName(QString::fromUtf8("delegationViewLayout"));

        verticalLayout_2->addLayout(delegationViewLayout);


        retranslateUi(DelegationPage);

        QMetaObject::connectSlotsByName(DelegationPage);
    } // setupUi

    void retranslateUi(QWidget *DelegationPage)
    {
        DelegationPage->setWindowTitle(QCoreApplication::translate("DelegationPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelegationPage: public Ui_DelegationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELEGATIONPAGE_H
