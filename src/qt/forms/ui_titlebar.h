/********************************************************************************
** Form generated from reading UI file 'titlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEBAR_H
#define UI_TITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleBar
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widgetLogo;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QTabBar *tabWidget;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *lblBalance;
    QWidget *widgetWallet;
    QHBoxLayout *horizontalLayout_5;

    void setupUi(QWidget *TitleBar)
    {
        if (TitleBar->objectName().isEmpty())
            TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->resize(453, 37);
        horizontalLayout_4 = new QHBoxLayout(TitleBar);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetLogo = new QWidget(TitleBar);
        widgetLogo->setObjectName(QString::fromUtf8("widgetLogo"));
        widgetLogo->setMinimumSize(QSize(43, 0));
        widgetLogo->setMaximumSize(QSize(150, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widgetLogo);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 0, 0, 0);

        horizontalLayout_4->addWidget(widgetLogo);

        widgetTitle = new QWidget(TitleBar);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTitle->sizePolicy().hasHeightForWidth());
        widgetTitle->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widgetTitle);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 10, 0);
        horizontalSpacer_3 = new QSpacerItem(17, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget = new QTabBar(widgetTitle);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 35));

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(0, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblBalance = new QLabel(widgetTitle);
        lblBalance->setObjectName(QString::fromUtf8("lblBalance"));
        lblBalance->setMinimumSize(QSize(20, 0));
        QFont font;
        font.setPointSize(17);
        lblBalance->setFont(font);
        lblBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblBalance);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(widgetTitle);

        widgetWallet = new QWidget(TitleBar);
        widgetWallet->setObjectName(QString::fromUtf8("widgetWallet"));
        horizontalLayout_5 = new QHBoxLayout(widgetWallet);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 10, 0);

        horizontalLayout_4->addWidget(widgetWallet);


        retranslateUi(TitleBar);

        QMetaObject::connectSlotsByName(TitleBar);
    } // setupUi

    void retranslateUi(QWidget *TitleBar)
    {
        TitleBar->setWindowTitle(QCoreApplication::translate("TitleBar", "Form", nullptr));
        lblBalance->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TitleBar: public Ui_TitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEBAR_H
