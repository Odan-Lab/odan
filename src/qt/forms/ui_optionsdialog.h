/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"
#include "qt/qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3_Main;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_3_Main;
    QHBoxLayout *horizontalLayout2;
    QLineEdit *txtStakeLedgerId;
    QPushButton *toolStakeLedgerId;
    QHBoxLayout *horizontalLayout_3_Main_3;
    BitcoinAmountField *reserveBalance;
    QSpacerItem *horizontalSpacer_3_Main_3;
    QLabel *threadsScriptVerifLabel;
    QLabel *databaseCacheLabel;
    QLabel *pruneWarning;
    QLabel *HWIToolLabel;
    QCheckBox *prune;
    QHBoxLayout *horizontalLayout_2_Main;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *horizontalSpacer_2_Main;
    QCheckBox *bitcoinAtStartup;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtHWIToolPath;
    QPushButton *toolHWIPath;
    QLabel *reserveBalanceLabel;
    QHBoxLayout *horizontalLayout_Main_Prune;
    QSpinBox *pruneSize;
    QLabel *pruneSizeUnitLabel;
    QSpacerItem *horizontalSpacer_Main_Prune;
    QLabel *stakeLedgerIdlabel;
    QCheckBox *enableServer;
    QCheckBox *logEvents;
    QCheckBox *superStaking;
    QSpacerItem *verticalSpacer_Main;
    QWidget *tabWallet;
    QVBoxLayout *verticalLayout_Wallet;
    QCheckBox *subFeeFromAmount;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coinControlFeatures;
    QCheckBox *spendZeroConfChange;
    QCheckBox *m_enable_psbt_controls;
    QCheckBox *zeroBalanceAddressToken;
    QCheckBox *useChangeAddress;
    QCheckBox *checkForUpdates;
    QCheckBox *signPSBTHWITool;
    QGroupBox *groupBoxHww;
    QVBoxLayout *verticalLayoutHww;
    QHBoxLayout *horizontalLayoutHww;
    QLabel *externalSignerPathLabel;
    QLineEdit *externalSignerPath;
    QSpacerItem *verticalSpacer_Wallet;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *mapPortNatpmp;
    QCheckBox *allowIncoming;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *horizontalSpacer_1_Network;
    QHBoxLayout *horizontalLayout_2_Network;
    QLabel *proxyActiveNets;
    QCheckBox *proxyReachIPv4;
    QLabel *proxyReachIPv4Label;
    QCheckBox *proxyReachIPv6;
    QLabel *proxyReachIPv6Label;
    QCheckBox *proxyReachTor;
    QLabel *proxyReachTorLabel;
    QSpacerItem *horizontalSpacer_2_Network;
    QCheckBox *connectSocksTor;
    QHBoxLayout *horizontalLayout_3_Network;
    QLabel *proxyIpTorLabel;
    QValidatedLineEdit *proxyIpTor;
    QLabel *proxyPortTorLabel;
    QLineEdit *proxyPortTor;
    QSpacerItem *horizontalSpacer_4_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *showTrayIcon;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QGridLayout *gridLayout_2;
    QLabel *langLabel;
    QValueComboBox *lang;
    QLabel *unitLabel;
    QLabel *thirdPartyTxUrlsLabel;
    QValueComboBox *unit;
    QLineEdit *thirdPartyTxUrls;
    QLabel *themeLabel;
    QValueComboBox *theme;
    QLabel *moneyFontLabel;
    QHBoxLayout *horizontalLayout_4_Display;
    QComboBox *moneyFont;
    QLabel *moneyFont_preview;
    QSpacerItem *verticalSpacer_Display;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineInfoLabel;
    QSpacerItem *horizontalSpacer_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QWidget *buttonsContainerWhite;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_Buttons;
    QPushButton *openBitcoinConfButton;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(832, 646);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabMain = new QWidget();
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
        verticalLayout_3 = new QVBoxLayout(tabMain);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 20, 30, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        horizontalLayout_3_Main = new QHBoxLayout();
        horizontalLayout_3_Main->setObjectName(QString::fromUtf8("horizontalLayout_3_Main"));
        threadsScriptVerif = new QSpinBox(tabMain);
        threadsScriptVerif->setObjectName(QString::fromUtf8("threadsScriptVerif"));
        threadsScriptVerif->setMinimumSize(QSize(100, 0));

        horizontalLayout_3_Main->addWidget(threadsScriptVerif);

        horizontalSpacer_3_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(horizontalSpacer_3_Main);


        gridLayout->addLayout(horizontalLayout_3_Main, 4, 1, 1, 1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName(QString::fromUtf8("horizontalLayout2"));
        txtStakeLedgerId = new QLineEdit(tabMain);
        txtStakeLedgerId->setObjectName(QString::fromUtf8("txtStakeLedgerId"));

        horizontalLayout2->addWidget(txtStakeLedgerId);

        toolStakeLedgerId = new QPushButton(tabMain);
        toolStakeLedgerId->setObjectName(QString::fromUtf8("toolStakeLedgerId"));

        horizontalLayout2->addWidget(toolStakeLedgerId);


        gridLayout->addLayout(horizontalLayout2, 8, 1, 1, 1);

        horizontalLayout_3_Main_3 = new QHBoxLayout();
        horizontalLayout_3_Main_3->setObjectName(QString::fromUtf8("horizontalLayout_3_Main_3"));
        reserveBalance = new BitcoinAmountField(tabMain);
        reserveBalance->setObjectName(QString::fromUtf8("reserveBalance"));

        horizontalLayout_3_Main_3->addWidget(reserveBalance);

        horizontalSpacer_3_Main_3 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main_3->addItem(horizontalSpacer_3_Main_3);


        gridLayout->addLayout(horizontalLayout_3_Main_3, 6, 1, 1, 1);

        threadsScriptVerifLabel = new QLabel(tabMain);
        threadsScriptVerifLabel->setObjectName(QString::fromUtf8("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(threadsScriptVerifLabel, 4, 0, 1, 1);

        databaseCacheLabel = new QLabel(tabMain);
        databaseCacheLabel->setObjectName(QString::fromUtf8("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(databaseCacheLabel, 3, 0, 1, 1);

        pruneWarning = new QLabel(tabMain);
        pruneWarning->setObjectName(QString::fromUtf8("pruneWarning"));
        pruneWarning->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(pruneWarning, 2, 0, 1, 2);

        HWIToolLabel = new QLabel(tabMain);
        HWIToolLabel->setObjectName(QString::fromUtf8("HWIToolLabel"));

        gridLayout->addWidget(HWIToolLabel, 7, 0, 1, 1);

        prune = new QCheckBox(tabMain);
        prune->setObjectName(QString::fromUtf8("prune"));

        gridLayout->addWidget(prune, 1, 0, 1, 1);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QString::fromUtf8("horizontalLayout_2_Main"));
        databaseCache = new QSpinBox(tabMain);
        databaseCache->setObjectName(QString::fromUtf8("databaseCache"));
        databaseCache->setMinimumSize(QSize(100, 0));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(tabMain);
        databaseCacheUnitLabel->setObjectName(QString::fromUtf8("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);


        gridLayout->addLayout(horizontalLayout_2_Main, 3, 1, 1, 1);

        bitcoinAtStartup = new QCheckBox(tabMain);
        bitcoinAtStartup->setObjectName(QString::fromUtf8("bitcoinAtStartup"));

        gridLayout->addWidget(bitcoinAtStartup, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtHWIToolPath = new QLineEdit(tabMain);
        txtHWIToolPath->setObjectName(QString::fromUtf8("txtHWIToolPath"));

        horizontalLayout->addWidget(txtHWIToolPath);

        toolHWIPath = new QPushButton(tabMain);
        toolHWIPath->setObjectName(QString::fromUtf8("toolHWIPath"));

        horizontalLayout->addWidget(toolHWIPath);


        gridLayout->addLayout(horizontalLayout, 7, 1, 1, 1);

        reserveBalanceLabel = new QLabel(tabMain);
        reserveBalanceLabel->setObjectName(QString::fromUtf8("reserveBalanceLabel"));
        reserveBalanceLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(reserveBalanceLabel, 6, 0, 1, 1);

        horizontalLayout_Main_Prune = new QHBoxLayout();
        horizontalLayout_Main_Prune->setObjectName(QString::fromUtf8("horizontalLayout_Main_Prune"));
        pruneSize = new QSpinBox(tabMain);
        pruneSize->setObjectName(QString::fromUtf8("pruneSize"));

        horizontalLayout_Main_Prune->addWidget(pruneSize);

        pruneSizeUnitLabel = new QLabel(tabMain);
        pruneSizeUnitLabel->setObjectName(QString::fromUtf8("pruneSizeUnitLabel"));
        pruneSizeUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Main_Prune->addWidget(pruneSizeUnitLabel);

        horizontalSpacer_Main_Prune = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Main_Prune->addItem(horizontalSpacer_Main_Prune);


        gridLayout->addLayout(horizontalLayout_Main_Prune, 1, 1, 1, 1);

        stakeLedgerIdlabel = new QLabel(tabMain);
        stakeLedgerIdlabel->setObjectName(QString::fromUtf8("stakeLedgerIdlabel"));

        gridLayout->addWidget(stakeLedgerIdlabel, 8, 0, 1, 1);

        enableServer = new QCheckBox(tabMain);
        enableServer->setObjectName(QString::fromUtf8("enableServer"));

        gridLayout->addWidget(enableServer, 5, 0, 1, 2);

        logEvents = new QCheckBox(tabMain);
        logEvents->setObjectName(QString::fromUtf8("logEvents"));

        gridLayout->addWidget(logEvents, 9, 0, 1, 2);

        superStaking = new QCheckBox(tabMain);
        superStaking->setObjectName(QString::fromUtf8("superStaking"));

        gridLayout->addWidget(superStaking, 10, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_Main);

        tabWidget->addTab(tabMain, QString());
        tabWallet = new QWidget();
        tabWallet->setObjectName(QString::fromUtf8("tabWallet"));
        verticalLayout_Wallet = new QVBoxLayout(tabWallet);
        verticalLayout_Wallet->setSpacing(10);
        verticalLayout_Wallet->setObjectName(QString::fromUtf8("verticalLayout_Wallet"));
        verticalLayout_Wallet->setContentsMargins(30, 20, 30, 20);
        subFeeFromAmount = new QCheckBox(tabWallet);
        subFeeFromAmount->setObjectName(QString::fromUtf8("subFeeFromAmount"));

        verticalLayout_Wallet->addWidget(subFeeFromAmount);

        groupBox = new QGroupBox(tabWallet);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        coinControlFeatures = new QCheckBox(groupBox);
        coinControlFeatures->setObjectName(QString::fromUtf8("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        spendZeroConfChange = new QCheckBox(groupBox);
        spendZeroConfChange->setObjectName(QString::fromUtf8("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);

        m_enable_psbt_controls = new QCheckBox(groupBox);
        m_enable_psbt_controls->setObjectName(QString::fromUtf8("m_enable_psbt_controls"));

        verticalLayout_2->addWidget(m_enable_psbt_controls);

        zeroBalanceAddressToken = new QCheckBox(groupBox);
        zeroBalanceAddressToken->setObjectName(QString::fromUtf8("zeroBalanceAddressToken"));

        verticalLayout_2->addWidget(zeroBalanceAddressToken);

        useChangeAddress = new QCheckBox(groupBox);
        useChangeAddress->setObjectName(QString::fromUtf8("useChangeAddress"));

        verticalLayout_2->addWidget(useChangeAddress);

        checkForUpdates = new QCheckBox(groupBox);
        checkForUpdates->setObjectName(QString::fromUtf8("checkForUpdates"));

        verticalLayout_2->addWidget(checkForUpdates);

        signPSBTHWITool = new QCheckBox(groupBox);
        signPSBTHWITool->setObjectName(QString::fromUtf8("signPSBTHWITool"));

        verticalLayout_2->addWidget(signPSBTHWITool);


        verticalLayout_Wallet->addWidget(groupBox);

        groupBoxHww = new QGroupBox(tabWallet);
        groupBoxHww->setObjectName(QString::fromUtf8("groupBoxHww"));
        verticalLayoutHww = new QVBoxLayout(groupBoxHww);
        verticalLayoutHww->setObjectName(QString::fromUtf8("verticalLayoutHww"));
        horizontalLayoutHww = new QHBoxLayout();
        horizontalLayoutHww->setObjectName(QString::fromUtf8("horizontalLayoutHww"));
        externalSignerPathLabel = new QLabel(groupBoxHww);
        externalSignerPathLabel->setObjectName(QString::fromUtf8("externalSignerPathLabel"));

        horizontalLayoutHww->addWidget(externalSignerPathLabel);

        externalSignerPath = new QLineEdit(groupBoxHww);
        externalSignerPath->setObjectName(QString::fromUtf8("externalSignerPath"));

        horizontalLayoutHww->addWidget(externalSignerPath);


        verticalLayoutHww->addLayout(horizontalLayoutHww);


        verticalLayout_Wallet->addWidget(groupBoxHww);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet->addItem(verticalSpacer_Wallet);

        tabWidget->addTab(tabWallet, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        verticalLayout_Network = new QVBoxLayout(tabNetwork);
        verticalLayout_Network->setSpacing(10);
        verticalLayout_Network->setObjectName(QString::fromUtf8("verticalLayout_Network"));
        verticalLayout_Network->setContentsMargins(30, 20, 30, 20);
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QString::fromUtf8("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        mapPortNatpmp = new QCheckBox(tabNetwork);
        mapPortNatpmp->setObjectName(QString::fromUtf8("mapPortNatpmp"));

        verticalLayout_Network->addWidget(mapPortNatpmp);

        allowIncoming = new QCheckBox(tabNetwork);
        allowIncoming->setObjectName(QString::fromUtf8("allowIncoming"));

        verticalLayout_Network->addWidget(allowIncoming);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QString::fromUtf8("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QString::fromUtf8("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QString::fromUtf8("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QString::fromUtf8("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 0));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QString::fromUtf8("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));
        proxyPort->setMinimumSize(QSize(55, 0));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        horizontalSpacer_1_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(horizontalSpacer_1_Network);


        verticalLayout_Network->addLayout(horizontalLayout_1_Network);

        horizontalLayout_2_Network = new QHBoxLayout();
        horizontalLayout_2_Network->setObjectName(QString::fromUtf8("horizontalLayout_2_Network"));
        proxyActiveNets = new QLabel(tabNetwork);
        proxyActiveNets->setObjectName(QString::fromUtf8("proxyActiveNets"));
        proxyActiveNets->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyActiveNets);

        proxyReachIPv4 = new QCheckBox(tabNetwork);
        proxyReachIPv4->setObjectName(QString::fromUtf8("proxyReachIPv4"));
        proxyReachIPv4->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4);

        proxyReachIPv4Label = new QLabel(tabNetwork);
        proxyReachIPv4Label->setObjectName(QString::fromUtf8("proxyReachIPv4Label"));
        proxyReachIPv4Label->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4Label);

        proxyReachIPv6 = new QCheckBox(tabNetwork);
        proxyReachIPv6->setObjectName(QString::fromUtf8("proxyReachIPv6"));
        proxyReachIPv6->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6);

        proxyReachIPv6Label = new QLabel(tabNetwork);
        proxyReachIPv6Label->setObjectName(QString::fromUtf8("proxyReachIPv6Label"));
        proxyReachIPv6Label->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6Label);

        proxyReachTor = new QCheckBox(tabNetwork);
        proxyReachTor->setObjectName(QString::fromUtf8("proxyReachTor"));
        proxyReachTor->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachTor);

        proxyReachTorLabel = new QLabel(tabNetwork);
        proxyReachTorLabel->setObjectName(QString::fromUtf8("proxyReachTorLabel"));
        proxyReachTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyReachTorLabel);

        horizontalSpacer_2_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Network->addItem(horizontalSpacer_2_Network);


        verticalLayout_Network->addLayout(horizontalLayout_2_Network);

        connectSocksTor = new QCheckBox(tabNetwork);
        connectSocksTor->setObjectName(QString::fromUtf8("connectSocksTor"));

        verticalLayout_Network->addWidget(connectSocksTor);

        horizontalLayout_3_Network = new QHBoxLayout();
        horizontalLayout_3_Network->setObjectName(QString::fromUtf8("horizontalLayout_3_Network"));
        proxyIpTorLabel = new QLabel(tabNetwork);
        proxyIpTorLabel->setObjectName(QString::fromUtf8("proxyIpTorLabel"));
        proxyIpTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyIpTorLabel);

        proxyIpTor = new QValidatedLineEdit(tabNetwork);
        proxyIpTor->setObjectName(QString::fromUtf8("proxyIpTor"));
        proxyIpTor->setMinimumSize(QSize(140, 0));
        proxyIpTor->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_3_Network->addWidget(proxyIpTor);

        proxyPortTorLabel = new QLabel(tabNetwork);
        proxyPortTorLabel->setObjectName(QString::fromUtf8("proxyPortTorLabel"));
        proxyPortTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyPortTorLabel);

        proxyPortTor = new QLineEdit(tabNetwork);
        proxyPortTor->setObjectName(QString::fromUtf8("proxyPortTor"));
        proxyPortTor->setMinimumSize(QSize(55, 0));
        proxyPortTor->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_3_Network->addWidget(proxyPortTor);

        horizontalSpacer_4_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Network->addItem(horizontalSpacer_4_Network);


        verticalLayout_Network->addLayout(horizontalLayout_3_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QString::fromUtf8("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setSpacing(10);
        verticalLayout_Window->setObjectName(QString::fromUtf8("verticalLayout_Window"));
        verticalLayout_Window->setContentsMargins(30, 20, 30, 20);
        showTrayIcon = new QCheckBox(tabWindow);
        showTrayIcon->setObjectName(QString::fromUtf8("showTrayIcon"));
        showTrayIcon->setChecked(true);

        verticalLayout_Window->addWidget(showTrayIcon);

        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QString::fromUtf8("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QString::fromUtf8("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QString::fromUtf8("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setSpacing(10);
        verticalLayout_Display->setObjectName(QString::fromUtf8("verticalLayout_Display"));
        verticalLayout_Display->setContentsMargins(30, 20, 30, 20);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(langLabel, 0, 0, 1, 1);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QString::fromUtf8("lang"));

        gridLayout_2->addWidget(lang, 0, 1, 1, 1);

        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QString::fromUtf8("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(unitLabel, 1, 0, 1, 1);

        thirdPartyTxUrlsLabel = new QLabel(tabDisplay);
        thirdPartyTxUrlsLabel->setObjectName(QString::fromUtf8("thirdPartyTxUrlsLabel"));

        gridLayout_2->addWidget(thirdPartyTxUrlsLabel, 2, 0, 1, 1);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QString::fromUtf8("unit"));

        gridLayout_2->addWidget(unit, 1, 1, 1, 1);

        thirdPartyTxUrls = new QLineEdit(tabDisplay);
        thirdPartyTxUrls->setObjectName(QString::fromUtf8("thirdPartyTxUrls"));
        thirdPartyTxUrls->setPlaceholderText(QString::fromUtf8("https://example.com/tx/%s"));

        gridLayout_2->addWidget(thirdPartyTxUrls, 2, 1, 1, 1);

        themeLabel = new QLabel(tabDisplay);
        themeLabel->setObjectName(QString::fromUtf8("themeLabel"));
        themeLabel->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(themeLabel, 3, 0, 1, 1);

        theme = new QValueComboBox(tabDisplay);
        theme->setObjectName(QString::fromUtf8("theme"));

        gridLayout_2->addWidget(theme, 3, 1, 1, 1);

        moneyFontLabel = new QLabel(tabDisplay);
        moneyFontLabel->setObjectName(QString::fromUtf8("moneyFontLabel"));

        gridLayout_2->addWidget(moneyFontLabel, 4, 0, 1, 1);

        horizontalLayout_4_Display = new QHBoxLayout();
        horizontalLayout_4_Display->setObjectName(QString::fromUtf8("horizontalLayout_4_Display"));
        moneyFont = new QComboBox(tabDisplay);
        moneyFont->setObjectName(QString::fromUtf8("moneyFont"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moneyFont->sizePolicy().hasHeightForWidth());
        moneyFont->setSizePolicy(sizePolicy);

        horizontalLayout_4_Display->addWidget(moneyFont);

        moneyFont_preview = new QLabel(tabDisplay);
        moneyFont_preview->setObjectName(QString::fromUtf8("moneyFont_preview"));
        moneyFont_preview->setText(QString::fromUtf8("111.11111111 ODAN\n"
"909.09090909 ODAN"));

        horizontalLayout_4_Display->addWidget(moneyFont_preview);


        gridLayout_2->addLayout(horizontalLayout_4_Display, 4, 1, 1, 1);


        verticalLayout_Display->addLayout(gridLayout_2);

        verticalSpacer_Display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_Display);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        frame = new QFrame(OptionsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QString::fromUtf8("verticalLayout_Bottom"));
        verticalLayout_Bottom->setContentsMargins(30, -1, 30, -1);
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QString::fromUtf8("horizontalLayout_Bottom"));
        overriddenByCommandLineInfoLabel = new QLabel(frame);
        overriddenByCommandLineInfoLabel->setObjectName(QString::fromUtf8("overriddenByCommandLineInfoLabel"));
        overriddenByCommandLineInfoLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Bottom->addWidget(overriddenByCommandLineInfoLabel);

        horizontalSpacer_Bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Bottom->addItem(horizontalSpacer_Bottom);


        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QString::fromUtf8("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        buttonsContainerWhite = new QWidget(OptionsDialog);
        buttonsContainerWhite->setObjectName(QString::fromUtf8("buttonsContainerWhite"));
        horizontalLayout_2 = new QHBoxLayout(buttonsContainerWhite);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, 30, -1);
        verticalLayout_Buttons = new QVBoxLayout();
        verticalLayout_Buttons->setObjectName(QString::fromUtf8("verticalLayout_Buttons"));
        openBitcoinConfButton = new QPushButton(buttonsContainerWhite);
        openBitcoinConfButton->setObjectName(QString::fromUtf8("openBitcoinConfButton"));
        openBitcoinConfButton->setAutoDefault(false);

        verticalLayout_Buttons->addWidget(openBitcoinConfButton);

        resetButton = new QPushButton(buttonsContainerWhite);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setAutoDefault(false);

        verticalLayout_Buttons->addWidget(resetButton);


        horizontalLayout_2->addLayout(verticalLayout_Buttons);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        statusLabel = new QLabel(buttonsContainerWhite);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(buttonsContainerWhite);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(buttonsContainerWhite);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addWidget(buttonsContainerWhite);

#if QT_CONFIG(shortcut)
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
        databaseCacheLabel->setBuddy(databaseCache);
        reserveBalanceLabel->setBuddy(threadsScriptVerif);
        externalSignerPathLabel->setBuddy(externalSignerPath);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        proxyIpTorLabel->setBuddy(proxyIpTor);
        proxyPortTorLabel->setBuddy(proxyPortTor);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        thirdPartyTxUrlsLabel->setBuddy(thirdPartyTxUrls);
        themeLabel->setBuddy(lang);
        moneyFontLabel->setBuddy(moneyFont);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(0);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        threadsScriptVerif->setToolTip(QCoreApplication::translate("OptionsDialog", "(0 = auto, <0 = leave that many cores free)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        txtStakeLedgerId->setToolTip(QCoreApplication::translate("OptionsDialog", "Fingerprint of the ledger that you want to be used for staking with hardware wallet", nullptr));
#endif // QT_CONFIG(tooltip)
        toolStakeLedgerId->setText(QCoreApplication::translate("OptionsDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        reserveBalance->setToolTip(QCoreApplication::translate("OptionsDialog", "Reserve amount that will not be used for staking", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        threadsScriptVerifLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Set the number of script verification threads. Negative values correspond to the number of cores you want to leave free to the system.", nullptr));
#endif // QT_CONFIG(tooltip)
        threadsScriptVerifLabel->setText(QCoreApplication::translate("OptionsDialog", "Number of script &verification threads", nullptr));
#if QT_CONFIG(tooltip)
        databaseCacheLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Maximum database cache size. A larger cache can contribute to faster sync, after which the benefit is less pronounced for most use cases. Lowering the cache size will reduce memory usage. Unused mempool memory is shared for this cache.", nullptr));
#endif // QT_CONFIG(tooltip)
        databaseCacheLabel->setText(QCoreApplication::translate("OptionsDialog", "Size of &database cache", nullptr));
        pruneWarning->setText(QCoreApplication::translate("OptionsDialog", "Reverting this setting requires re-downloading the entire blockchain.", nullptr));
        HWIToolLabel->setText(QCoreApplication::translate("OptionsDialog", "HWI tool path", nullptr));
#if QT_CONFIG(tooltip)
        prune->setToolTip(QCoreApplication::translate("OptionsDialog", "Enabling pruning significantly reduces the disk space required to store transactions. All blocks are still fully validated. Reverting this setting requires re-downloading the entire blockchain.", nullptr));
#endif // QT_CONFIG(tooltip)
        prune->setText(QCoreApplication::translate("OptionsDialog", "Prune &block storage to", nullptr));
        databaseCacheUnitLabel->setText(QCoreApplication::translate("OptionsDialog", "MiB", nullptr));
#if QT_CONFIG(tooltip)
        bitcoinAtStartup->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically start %1 after logging in to the system.", nullptr));
#endif // QT_CONFIG(tooltip)
        bitcoinAtStartup->setText(QCoreApplication::translate("OptionsDialog", "&Start %1 on system login", nullptr));
#if QT_CONFIG(tooltip)
        txtHWIToolPath->setToolTip(QCoreApplication::translate("OptionsDialog", "Hardware wallet interface tool location on disk", nullptr));
#endif // QT_CONFIG(tooltip)
        toolHWIPath->setText(QCoreApplication::translate("OptionsDialog", "...", nullptr));
        reserveBalanceLabel->setText(QCoreApplication::translate("OptionsDialog", "Reserve", nullptr));
        pruneSizeUnitLabel->setText(QCoreApplication::translate("OptionsDialog", "GB", nullptr));
        stakeLedgerIdlabel->setText(QCoreApplication::translate("OptionsDialog", "Select Ledger device for staking", nullptr));
#if QT_CONFIG(tooltip)
        enableServer->setToolTip(QCoreApplication::translate("OptionsDialog", "This allows you or a third party tool to communicate with the node through command-line and JSON-RPC commands.", nullptr));
#endif // QT_CONFIG(tooltip)
        enableServer->setText(QCoreApplication::translate("OptionsDialog", "Enable R&PC server", nullptr));
        logEvents->setText(QCoreApplication::translate("OptionsDialog", "Enable  log &events", nullptr));
        superStaking->setText(QCoreApplication::translate("OptionsDialog", "Enable s&uper staking", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QCoreApplication::translate("OptionsDialog", "&Main", nullptr));
#if QT_CONFIG(tooltip)
        subFeeFromAmount->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to set subtract fee from amount as default or not.", nullptr));
#endif // QT_CONFIG(tooltip)
        subFeeFromAmount->setText(QCoreApplication::translate("OptionsDialog", "Subtract &fee from amount by default", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionsDialog", "Expert", nullptr));
#if QT_CONFIG(tooltip)
        coinControlFeatures->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to show coin control features or not.", nullptr));
#endif // QT_CONFIG(tooltip)
        coinControlFeatures->setText(QCoreApplication::translate("OptionsDialog", "Enable coin &control features", nullptr));
#if QT_CONFIG(tooltip)
        spendZeroConfChange->setToolTip(QCoreApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction cannot be used until that transaction has at least one confirmation. This also affects how your balance is computed.", nullptr));
#endif // QT_CONFIG(tooltip)
        spendZeroConfChange->setText(QCoreApplication::translate("OptionsDialog", "&Spend unconfirmed change", nullptr));
#if QT_CONFIG(tooltip)
        m_enable_psbt_controls->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to show PSBT controls.", nullptr));
#endif // QT_CONFIG(tooltip)
        m_enable_psbt_controls->setText(QCoreApplication::translate("OptionsDialog", "Enable &PSBT controls", nullptr));
        zeroBalanceAddressToken->setText(QCoreApplication::translate("OptionsDialog", "Enable &zero balance for receiver token address", nullptr));
        useChangeAddress->setText(QCoreApplication::translate("OptionsDialog", "Use change &address", nullptr));
        checkForUpdates->setText(QCoreApplication::translate("OptionsDialog", "Check for &updates", nullptr));
        signPSBTHWITool->setText(QCoreApplication::translate("OptionsDialog", "Sign PSBT with HWI tool", nullptr));
        groupBoxHww->setTitle(QCoreApplication::translate("OptionsDialog", "External Signer (e.g. hardware wallet)", nullptr));
        externalSignerPathLabel->setText(QCoreApplication::translate("OptionsDialog", "&External signer script path", nullptr));
#if QT_CONFIG(tooltip)
        externalSignerPath->setToolTip(QCoreApplication::translate("OptionsDialog", "Full path to a %1 compatible script (e.g. C:\\Downloads\\hwi.exe or /Users/you/Downloads/hwi.py). Beware: malware can steal your coins!", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabWallet), QCoreApplication::translate("OptionsDialog", "W&allet", nullptr));
#if QT_CONFIG(tooltip)
        mapPortUpnp->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically open the Odan client port on the router. This only works when your router supports UPnP and it is enabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        mapPortUpnp->setText(QCoreApplication::translate("OptionsDialog", "Map port using &UPnP", nullptr));
#if QT_CONFIG(tooltip)
        mapPortNatpmp->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically open the Odan client port on the router. This only works when your router supports NAT-PMP and it is enabled. The external port could be random.", nullptr));
#endif // QT_CONFIG(tooltip)
        mapPortNatpmp->setText(QCoreApplication::translate("OptionsDialog", "Map port using NA&T-PMP", nullptr));
#if QT_CONFIG(tooltip)
        allowIncoming->setToolTip(QCoreApplication::translate("OptionsDialog", "Accept connections from outside.", nullptr));
#endif // QT_CONFIG(tooltip)
        allowIncoming->setText(QCoreApplication::translate("OptionsDialog", "Allow incomin&g connections", nullptr));
#if QT_CONFIG(tooltip)
        connectSocks->setToolTip(QCoreApplication::translate("OptionsDialog", "Connect to the Odan network through a SOCKS5 proxy.", nullptr));
#endif // QT_CONFIG(tooltip)
        connectSocks->setText(QCoreApplication::translate("OptionsDialog", "&Connect through SOCKS5 proxy (default proxy):", nullptr));
        proxyIpLabel->setText(QCoreApplication::translate("OptionsDialog", "Proxy &IP:", nullptr));
#if QT_CONFIG(tooltip)
        proxyIp->setToolTip(QCoreApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyPortLabel->setText(QCoreApplication::translate("OptionsDialog", "&Port:", nullptr));
#if QT_CONFIG(tooltip)
        proxyPort->setToolTip(QCoreApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyActiveNets->setText(QCoreApplication::translate("OptionsDialog", "Used for reaching peers via:", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachIPv4->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachIPv4->setText(QString());
        proxyReachIPv4Label->setText(QCoreApplication::translate("OptionsDialog", "IPv4", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachIPv6->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachIPv6->setText(QString());
        proxyReachIPv6Label->setText(QCoreApplication::translate("OptionsDialog", "IPv6", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachTor->setText(QString());
        proxyReachTorLabel->setText(QCoreApplication::translate("OptionsDialog", "Tor", nullptr));
#if QT_CONFIG(tooltip)
        connectSocksTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Connect to the Odan network through a separate SOCKS5 proxy for Tor onion services.", nullptr));
#endif // QT_CONFIG(tooltip)
        connectSocksTor->setText(QCoreApplication::translate("OptionsDialog", "Use separate SOCKS&5 proxy to reach peers via Tor onion services:", nullptr));
        proxyIpTorLabel->setText(QCoreApplication::translate("OptionsDialog", "Proxy &IP:", nullptr));
#if QT_CONFIG(tooltip)
        proxyIpTor->setToolTip(QCoreApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyPortTorLabel->setText(QCoreApplication::translate("OptionsDialog", "&Port:", nullptr));
#if QT_CONFIG(tooltip)
        proxyPortTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QCoreApplication::translate("OptionsDialog", "&Network", nullptr));
#if QT_CONFIG(tooltip)
        showTrayIcon->setToolTip(QCoreApplication::translate("OptionsDialog", "Show the icon in the system tray.", nullptr));
#endif // QT_CONFIG(tooltip)
        showTrayIcon->setText(QCoreApplication::translate("OptionsDialog", "&Show tray icon", nullptr));
#if QT_CONFIG(tooltip)
        minimizeToTray->setToolTip(QCoreApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeToTray->setText(QCoreApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", nullptr));
#if QT_CONFIG(tooltip)
        minimizeOnClose->setToolTip(QCoreApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Exit in the menu.", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeOnClose->setText(QCoreApplication::translate("OptionsDialog", "M&inimize on close", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QCoreApplication::translate("OptionsDialog", "&Window", nullptr));
        langLabel->setText(QCoreApplication::translate("OptionsDialog", "User Interface &language:", nullptr));
#if QT_CONFIG(tooltip)
        lang->setToolTip(QCoreApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        unitLabel->setText(QCoreApplication::translate("OptionsDialog", "&Unit to show amounts in:", nullptr));
#if QT_CONFIG(tooltip)
        thirdPartyTxUrlsLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Third-party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", nullptr));
#endif // QT_CONFIG(tooltip)
        thirdPartyTxUrlsLabel->setText(QCoreApplication::translate("OptionsDialog", "&Third-party transaction URLs", nullptr));
#if QT_CONFIG(tooltip)
        unit->setToolTip(QCoreApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        thirdPartyTxUrls->setToolTip(QCoreApplication::translate("OptionsDialog", "Third-party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", nullptr));
#endif // QT_CONFIG(tooltip)
        themeLabel->setText(QCoreApplication::translate("OptionsDialog", "User Interface &style:", nullptr));
#if QT_CONFIG(tooltip)
        theme->setToolTip(QCoreApplication::translate("OptionsDialog", "The user interface style can be set here. This setting will take effect after restarting %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        moneyFontLabel->setText(QCoreApplication::translate("OptionsDialog", "Font in the Overview tab: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDisplay), QCoreApplication::translate("OptionsDialog", "&Display", nullptr));
        overriddenByCommandLineInfoLabel->setText(QCoreApplication::translate("OptionsDialog", "Options set in this dialog are overridden by the command line:", nullptr));
        overriddenByCommandLineLabel->setText(QString());
#if QT_CONFIG(tooltip)
        openBitcoinConfButton->setToolTip(QCoreApplication::translate("OptionsDialog", "Open the %1 configuration file from the working directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        openBitcoinConfButton->setText(QCoreApplication::translate("OptionsDialog", "Open Configuration File", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("OptionsDialog", "Reset all client options to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("OptionsDialog", "&Reset Options", nullptr));
        statusLabel->setText(QString());
        okButton->setText(QCoreApplication::translate("OptionsDialog", "&OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("OptionsDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
