/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRepositoryOpen;
    QAction *actionRepositoryCreate;
    QAction *actionRepositoryDelete;
    QAction *actionAdd;
    QAction *actionFileAdd;
    QAction *actionFileDelete;
    QAction *actionBranchBranch;
    QAction *actionBranchCheckout;
    QAction *actionRemoteClone;
    QAction *actionRemotePush;
    QAction *actionRemoteFetch_2;
    QAction *actionRemoteFetch;
    QAction *actionUserSettings;
    QAction *actionModify_Repositories;
    QAction *actionIndex;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTextBrowser *wyswietlacz;
    QGridLayout *gridLayout;
    QPushButton *pushButtonStatus;
    QPushButton *pushButtonCommit;
    QPushButton *pushButtonLog;
    QLabel *labelGitui;
    QLabel *labelGit;
    QMenuBar *menuBar;
    QMenu *menuRepository;
    QMenu *menuFile;
    QMenu *menuBranch;
    QMenu *menuRemote;
    QMenu *menuUser;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(828, 470);
        actionRepositoryOpen = new QAction(MainWindow);
        actionRepositoryOpen->setObjectName(QStringLiteral("actionRepositoryOpen"));
        actionRepositoryCreate = new QAction(MainWindow);
        actionRepositoryCreate->setObjectName(QStringLiteral("actionRepositoryCreate"));
        actionRepositoryDelete = new QAction(MainWindow);
        actionRepositoryDelete->setObjectName(QStringLiteral("actionRepositoryDelete"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionFileAdd = new QAction(MainWindow);
        actionFileAdd->setObjectName(QStringLiteral("actionFileAdd"));
        actionFileDelete = new QAction(MainWindow);
        actionFileDelete->setObjectName(QStringLiteral("actionFileDelete"));
        actionBranchBranch = new QAction(MainWindow);
        actionBranchBranch->setObjectName(QStringLiteral("actionBranchBranch"));
        actionBranchCheckout = new QAction(MainWindow);
        actionBranchCheckout->setObjectName(QStringLiteral("actionBranchCheckout"));
        actionRemoteClone = new QAction(MainWindow);
        actionRemoteClone->setObjectName(QStringLiteral("actionRemoteClone"));
        actionRemotePush = new QAction(MainWindow);
        actionRemotePush->setObjectName(QStringLiteral("actionRemotePush"));
        actionRemoteFetch_2 = new QAction(MainWindow);
        actionRemoteFetch_2->setObjectName(QStringLiteral("actionRemoteFetch_2"));
        actionRemoteFetch = new QAction(MainWindow);
        actionRemoteFetch->setObjectName(QStringLiteral("actionRemoteFetch"));
        actionUserSettings = new QAction(MainWindow);
        actionUserSettings->setObjectName(QStringLiteral("actionUserSettings"));
        actionModify_Repositories = new QAction(MainWindow);
        actionModify_Repositories->setObjectName(QStringLiteral("actionModify_Repositories"));
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QStringLiteral("actionIndex"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        wyswietlacz = new QTextBrowser(centralWidget);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout_2->addWidget(wyswietlacz, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonStatus = new QPushButton(centralWidget);
        pushButtonStatus->setObjectName(QStringLiteral("pushButtonStatus"));

        gridLayout->addWidget(pushButtonStatus, 0, 0, 1, 1);

        pushButtonCommit = new QPushButton(centralWidget);
        pushButtonCommit->setObjectName(QStringLiteral("pushButtonCommit"));

        gridLayout->addWidget(pushButtonCommit, 2, 0, 1, 1);

        pushButtonLog = new QPushButton(centralWidget);
        pushButtonLog->setObjectName(QStringLiteral("pushButtonLog"));

        gridLayout->addWidget(pushButtonLog, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        labelGitui = new QLabel(centralWidget);
        labelGitui->setObjectName(QStringLiteral("labelGitui"));
        QFont font;
        font.setPointSize(26);
        labelGitui->setFont(font);

        gridLayout_2->addWidget(labelGitui, 0, 0, 1, 1);

        labelGit = new QLabel(centralWidget);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelGit->sizePolicy().hasHeightForWidth());
        labelGit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        labelGit->setFont(font1);

        gridLayout_2->addWidget(labelGit, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 19));
        menuRepository = new QMenu(menuBar);
        menuRepository->setObjectName(QStringLiteral("menuRepository"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuBranch = new QMenu(menuBar);
        menuBranch->setObjectName(QStringLiteral("menuBranch"));
        menuRemote = new QMenu(menuBar);
        menuRemote->setObjectName(QStringLiteral("menuRemote"));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuRepository->menuAction());
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBranch->menuAction());
        menuBar->addAction(menuRemote->menuAction());
        menuBar->addAction(menuUser->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuRepository->addAction(actionRepositoryOpen);
        menuRepository->addAction(actionRepositoryCreate);
        menuRepository->addAction(actionRepositoryDelete);
        menuFile->addAction(actionFileAdd);
        menuBranch->addAction(actionBranchBranch);
        menuRemote->addAction(actionModify_Repositories);
        menuRemote->addAction(actionRemoteClone);
        menuRemote->addAction(actionRemotePush);
        menuRemote->addAction(actionRemoteFetch_2);
        menuUser->addAction(actionUserSettings);
        menuHelp->addAction(actionIndex);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GitUI Main Window", 0));
        actionRepositoryOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionRepositoryCreate->setText(QApplication::translate("MainWindow", "Create", 0));
        actionRepositoryDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        actionFileAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        actionFileDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionBranchBranch->setText(QApplication::translate("MainWindow", "Branch / Merge", 0));
        actionBranchCheckout->setText(QApplication::translate("MainWindow", "Checkout", 0));
        actionRemoteClone->setText(QApplication::translate("MainWindow", "Clone", 0));
        actionRemotePush->setText(QApplication::translate("MainWindow", "Push/Pull", 0));
        actionRemotePush->setIconText(QApplication::translate("MainWindow", "Push&Pull", 0));
        actionRemoteFetch_2->setText(QApplication::translate("MainWindow", "Fetch", 0));
        actionRemoteFetch->setText(QApplication::translate("MainWindow", "Fetch", 0));
        actionUserSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionModify_Repositories->setText(QApplication::translate("MainWindow", "Modify Tracked Repositories", 0));
        actionIndex->setText(QApplication::translate("MainWindow", "Index", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        wyswietlacz->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600;\">Welcome to the</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600;\">GitUI</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">Select repository from </span><span style=\" font-size:24pt; font-style:italic;\">Reposito"
                        "ry-&gt;Open</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">and enjoy.</span></p></body></html>", 0));
        pushButtonStatus->setText(QApplication::translate("MainWindow", "Status", 0));
        pushButtonCommit->setText(QApplication::translate("MainWindow", "Commit", 0));
        pushButtonLog->setText(QApplication::translate("MainWindow", "Log", 0));
        labelGitui->setText(QApplication::translate("MainWindow", "GitUI", 0));
        labelGit->setText(QString());
        menuRepository->setTitle(QApplication::translate("MainWindow", "Repository", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuBranch->setTitle(QApplication::translate("MainWindow", "Branch", 0));
        menuRemote->setTitle(QApplication::translate("MainWindow", "Remote", 0));
        menuUser->setTitle(QApplication::translate("MainWindow", "User", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
