/********************************************************************************
** Form generated from reading UI file 'hardwaredevicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREDEVICEDIALOG_H
#define UI_HARDWAREDEVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HardwareDeviceDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelHardwareDevice;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelLinuxPermissions;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelDebugMessage;
    QTextEdit *textEditDebugMessage;
    QSpacerItem *verticalSpacer_4;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *nextButton;

    void setupUi(QDialog *HardwareDeviceDialog)
    {
        if (HardwareDeviceDialog->objectName().isEmpty())
            HardwareDeviceDialog->setObjectName(QString::fromUtf8("HardwareDeviceDialog"));
        HardwareDeviceDialog->resize(615, 471);
        verticalLayout_2 = new QVBoxLayout(HardwareDeviceDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, 30, -1);
        labelTitle = new QLabel(HardwareDeviceDialog);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTitle->setFont(font);

        verticalLayout->addWidget(labelTitle);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, -1, -1, -1);
        labelHardwareDevice = new QLabel(HardwareDeviceDialog);
        labelHardwareDevice->setObjectName(QString::fromUtf8("labelHardwareDevice"));

        verticalLayout_4->addWidget(labelHardwareDevice);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        labelLinuxPermissions = new QLabel(HardwareDeviceDialog);
        labelLinuxPermissions->setObjectName(QString::fromUtf8("labelLinuxPermissions"));

        verticalLayout_4->addWidget(labelLinuxPermissions);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        labelDebugMessage = new QLabel(HardwareDeviceDialog);
        labelDebugMessage->setObjectName(QString::fromUtf8("labelDebugMessage"));

        verticalLayout_4->addWidget(labelDebugMessage);

        textEditDebugMessage = new QTextEdit(HardwareDeviceDialog);
        textEditDebugMessage->setObjectName(QString::fromUtf8("textEditDebugMessage"));
        textEditDebugMessage->setReadOnly(true);

        verticalLayout_4->addWidget(textEditDebugMessage);


        verticalLayout->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        buttonsContainerWhite = new QWidget(HardwareDeviceDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 15, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        nextButton = new QPushButton(buttonsContainerWhite);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_2->addWidget(nextButton);


        verticalLayout_2->addWidget(buttonsContainerWhite);


        retranslateUi(HardwareDeviceDialog);

        QMetaObject::connectSlotsByName(HardwareDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *HardwareDeviceDialog)
    {
        HardwareDeviceDialog->setWindowTitle(QCoreApplication::translate("HardwareDeviceDialog", "Search for hardware keystore", nullptr));
        labelTitle->setText(QCoreApplication::translate("HardwareDeviceDialog", "Hardware keystore", nullptr));
        labelHardwareDevice->setText(QCoreApplication::translate("HardwareDeviceDialog", "No hardware device detected.\n"
"to triger a rescan press 'Next'", nullptr));
        labelLinuxPermissions->setText(QCoreApplication::translate("HardwareDeviceDialog", "On linux, you might have to add a new permission to your udev rules.", nullptr));
        labelDebugMessage->setText(QCoreApplication::translate("HardwareDeviceDialog", "Debug message", nullptr));
        textEditDebugMessage->setHtml(QCoreApplication::translate("HardwareDeviceDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        cancelButton->setText(QCoreApplication::translate("HardwareDeviceDialog", "Cancel", nullptr));
        nextButton->setText(QCoreApplication::translate("HardwareDeviceDialog", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareDeviceDialog: public Ui_HardwareDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREDEVICEDIALOG_H
