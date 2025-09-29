/********************************************************************************
** Form generated from reading UI file 'oastoken.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OASTOKEN_H
#define UI_OASTOKEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OASToken
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *tokenViewLayout;

    void setupUi(QWidget *OASToken)
    {
        if (OASToken->objectName().isEmpty())
            OASToken->setObjectName(QString::fromUtf8("OASToken"));
        OASToken->resize(723, 467);
        verticalLayout_2 = new QVBoxLayout(OASToken);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(OASToken);
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

        tokenViewLayout = new QVBoxLayout();
        tokenViewLayout->setObjectName(QString::fromUtf8("tokenViewLayout"));

        verticalLayout_2->addLayout(tokenViewLayout);


        retranslateUi(OASToken);

        QMetaObject::connectSlotsByName(OASToken);
    } // setupUi

    void retranslateUi(QWidget *OASToken)
    {
        OASToken->setWindowTitle(QCoreApplication::translate("OASToken", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OASToken: public Ui_OASToken {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OASTOKEN_H
