/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionManually;
    QAction *actionQRCode;
    QAction *actionQRCodeFromFile;
    QAction *actionURI;
    QAction *actionDelete;
    QAction *actionEdit;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionGeneralSettings;
    QAction *actionShare;
    QAction *actionReportBug;
    QAction *actionTestLatency;
    QAction *actionTestAllLatency;
    QAction *actionImportGUIJson;
    QAction *actionFromConfigJson;
    QAction *actionSaveManually;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionShowFilterBar;
    QAction *actionExportGUIJson;
    QAction *actionScanQRCodeCapturer;
    QAction *actionForceConnect;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *filterLineEdit;
    QTableView *connectionView;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuConnection;
    QMenu *menuAdd;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 480);
        MainWindow->setMinimumSize(QSize(400, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/shadowsocks-qt5.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        actionManually = new QAction(MainWindow);
        actionManually->setObjectName(QString::fromUtf8("actionManually"));
        actionQRCode = new QAction(MainWindow);
        actionQRCode->setObjectName(QString::fromUtf8("actionQRCode"));
        actionQRCodeFromFile = new QAction(MainWindow);
        actionQRCodeFromFile->setObjectName(QString::fromUtf8("actionQRCodeFromFile"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQRCodeFromFile->setIcon(icon1);
        actionURI = new QAction(MainWindow);
        actionURI->setObjectName(QString::fromUtf8("actionURI"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDelete->setIcon(icon2);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon4);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionGeneralSettings = new QAction(MainWindow);
        actionGeneralSettings->setObjectName(QString::fromUtf8("actionGeneralSettings"));
        actionShare = new QAction(MainWindow);
        actionShare->setObjectName(QString::fromUtf8("actionShare"));
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        actionTestLatency = new QAction(MainWindow);
        actionTestLatency->setObjectName(QString::fromUtf8("actionTestLatency"));
        actionTestAllLatency = new QAction(MainWindow);
        actionTestAllLatency->setObjectName(QString::fromUtf8("actionTestAllLatency"));
        actionImportGUIJson = new QAction(MainWindow);
        actionImportGUIJson->setObjectName(QString::fromUtf8("actionImportGUIJson"));
        actionFromConfigJson = new QAction(MainWindow);
        actionFromConfigJson->setObjectName(QString::fromUtf8("actionFromConfigJson"));
        actionFromConfigJson->setIcon(icon1);
        actionSaveManually = new QAction(MainWindow);
        actionSaveManually->setObjectName(QString::fromUtf8("actionSaveManually"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("document-save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSaveManually->setIcon(icon5);
        actionMoveUp = new QAction(MainWindow);
        actionMoveUp->setObjectName(QString::fromUtf8("actionMoveUp"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionMoveUp->setIcon(icon6);
        actionMoveDown = new QAction(MainWindow);
        actionMoveDown->setObjectName(QString::fromUtf8("actionMoveDown"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("go-down");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionMoveDown->setIcon(icon7);
        actionShowFilterBar = new QAction(MainWindow);
        actionShowFilterBar->setObjectName(QString::fromUtf8("actionShowFilterBar"));
        actionShowFilterBar->setCheckable(true);
        actionShowFilterBar->setChecked(true);
        actionExportGUIJson = new QAction(MainWindow);
        actionExportGUIJson->setObjectName(QString::fromUtf8("actionExportGUIJson"));
        actionScanQRCodeCapturer = new QAction(MainWindow);
        actionScanQRCodeCapturer->setObjectName(QString::fromUtf8("actionScanQRCodeCapturer"));
        actionForceConnect = new QAction(MainWindow);
        actionForceConnect->setObjectName(QString::fromUtf8("actionForceConnect"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filterLineEdit = new QLineEdit(centralWidget);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));
        filterLineEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(filterLineEdit);

        connectionView = new QTableView(centralWidget);
        connectionView->setObjectName(QString::fromUtf8("connectionView"));
        connectionView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connectionView->setTabKeyNavigation(false);
        connectionView->setSelectionMode(QAbstractItemView::SingleSelection);
        connectionView->setSelectionBehavior(QAbstractItemView::SelectRows);
        connectionView->setShowGrid(false);
        connectionView->setSortingEnabled(true);
        connectionView->setWordWrap(false);
        connectionView->setCornerButtonEnabled(false);
        connectionView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(connectionView);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 26));
        menuConnection = new QMenu(menuBar);
        menuConnection->setObjectName(QString::fromUtf8("menuConnection"));
        menuAdd = new QMenu(menuConnection);
        menuAdd->setObjectName(QString::fromUtf8("menuAdd"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        menuAdd->setIcon(icon8);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        toolBar->addAction(actionConnect);
        toolBar->addAction(actionDisconnect);
        toolBar->addAction(actionTestLatency);
        toolBar->addSeparator();
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionShare);
        toolBar->addSeparator();
        toolBar->addAction(actionMoveUp);
        toolBar->addAction(actionMoveDown);
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConnection->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuConnection->addAction(menuAdd->menuAction());
        menuConnection->addAction(actionEdit);
        menuConnection->addAction(actionShare);
        menuConnection->addAction(actionDelete);
        menuConnection->addSeparator();
        menuConnection->addAction(actionConnect);
        menuConnection->addAction(actionForceConnect);
        menuConnection->addAction(actionDisconnect);
        menuConnection->addAction(actionTestLatency);
        menuConnection->addAction(actionTestAllLatency);
        menuConnection->addSeparator();
        menuConnection->addSeparator();
        menuConnection->addAction(actionMoveUp);
        menuConnection->addAction(actionMoveDown);
        menuAdd->addAction(actionManually);
        menuAdd->addAction(actionURI);
        menuAdd->addAction(actionQRCodeFromFile);
        menuAdd->addAction(actionQRCode);
        menuAdd->addAction(actionScanQRCodeCapturer);
        menuAdd->addAction(actionFromConfigJson);
        menuFile->addAction(actionImportGUIJson);
        menuFile->addAction(actionExportGUIJson);
        menuFile->addAction(actionSaveManually);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuSettings->addAction(actionGeneralSettings);
        menuSettings->addSeparator();
        menuSettings->addAction(actionShowFilterBar);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionReportBug);

        retranslateUi(MainWindow);
        QObject::connect(actionShowFilterBar, SIGNAL(toggled(bool)), filterLineEdit, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Connection Manager", nullptr));
        actionManually->setText(QCoreApplication::translate("MainWindow", "&Manually", nullptr));
#if QT_CONFIG(tooltip)
        actionManually->setToolTip(QCoreApplication::translate("MainWindow", "Add connection manually", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQRCode->setText(QCoreApplication::translate("MainWindow", "&Scan QR Code on Screen", nullptr));
        actionQRCodeFromFile->setText(QCoreApplication::translate("MainWindow", "&From QR Code Image File", nullptr));
#if QT_CONFIG(tooltip)
        actionQRCodeFromFile->setToolTip(QCoreApplication::translate("MainWindow", "From QR code image file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionURI->setText(QCoreApplication::translate("MainWindow", "&URI", nullptr));
#if QT_CONFIG(tooltip)
        actionURI->setToolTip(QCoreApplication::translate("MainWindow", "Add connection from URI", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "&Connect", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "D&isconnect", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
        actionGeneralSettings->setText(QCoreApplication::translate("MainWindow", "&General Settings", nullptr));
        actionShare->setText(QCoreApplication::translate("MainWindow", "&Share", nullptr));
        actionReportBug->setText(QCoreApplication::translate("MainWindow", "&Report Bug", nullptr));
        actionTestLatency->setText(QCoreApplication::translate("MainWindow", "&Test Latency", nullptr));
#if QT_CONFIG(tooltip)
        actionTestLatency->setToolTip(QCoreApplication::translate("MainWindow", "Test the latency of selected connection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTestAllLatency->setText(QCoreApplication::translate("MainWindow", "Test All C&onnections Latency", nullptr));
        actionImportGUIJson->setText(QCoreApplication::translate("MainWindow", "&Import Connections from gui-config.json", nullptr));
#if QT_CONFIG(tooltip)
        actionImportGUIJson->setToolTip(QCoreApplication::translate("MainWindow", "Import connections from old version configuration file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFromConfigJson->setText(QCoreApplication::translate("MainWindow", "From &config.json", nullptr));
        actionSaveManually->setText(QCoreApplication::translate("MainWindow", "&Save Manually", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveManually->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp->setText(QCoreApplication::translate("MainWindow", "&Move Up", nullptr));
        actionMoveDown->setText(QCoreApplication::translate("MainWindow", "Mo&ve Down", nullptr));
        actionShowFilterBar->setText(QCoreApplication::translate("MainWindow", "&Show Filter Bar", nullptr));
#if QT_CONFIG(shortcut)
        actionShowFilterBar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportGUIJson->setText(QCoreApplication::translate("MainWindow", "&Export as gui-config.json", nullptr));
        actionScanQRCodeCapturer->setText(QCoreApplication::translate("MainWindow", "Scan &QR Code using Capturer", nullptr));
#if QT_CONFIG(tooltip)
        actionScanQRCodeCapturer->setToolTip(QCoreApplication::translate("MainWindow", "Scan QR Code using Capturer", nullptr));
#endif // QT_CONFIG(tooltip)
        actionForceConnect->setText(QCoreApplication::translate("MainWindow", "&Force Connect", nullptr));
#if QT_CONFIG(tooltip)
        actionForceConnect->setToolTip(QCoreApplication::translate("MainWindow", "Connect to this connection and disconnect any connections currently using  the same local port", nullptr));
#endif // QT_CONFIG(tooltip)
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Input to filter", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Show Toolbar", nullptr));
        menuConnection->setTitle(QCoreApplication::translate("MainWindow", "&Connection", nullptr));
        menuAdd->setTitle(QCoreApplication::translate("MainWindow", "&Add", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Fi&le", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settin&gs", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
