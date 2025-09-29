/********************************************************************************
** Form generated from reading UI file 'superstakerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERSTAKERPAGE_H
#define UI_SUPERSTAKERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuperStakerPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *superStakerViewLayout;

    void setupUi(QWidget *SuperStakerPage)
    {
        if (SuperStakerPage->objectName().isEmpty())
            SuperStakerPage->setObjectName(QString::fromUtf8("SuperStakerPage"));
        SuperStakerPage->resize(723, 467);
        verticalLayout_2 = new QVBoxLayout(SuperStakerPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(SuperStakerPage);
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

        superStakerViewLayout = new QVBoxLayout();
        superStakerViewLayout->setObjectName(QString::fromUtf8("superStakerViewLayout"));

        verticalLayout_2->addLayout(superStakerViewLayout);


        retranslateUi(SuperStakerPage);

        QMetaObject::connectSlotsByName(SuperStakerPage);
    } // setupUi

    void retranslateUi(QWidget *SuperStakerPage)
    {
        SuperStakerPage->setWindowTitle(QCoreApplication::translate("SuperStakerPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuperStakerPage: public Ui_SuperStakerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERSTAKERPAGE_H
