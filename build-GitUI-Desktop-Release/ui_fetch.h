/********************************************************************************
** Form generated from reading UI file 'fetch.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FETCH_H
#define UI_FETCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Fetch
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonBack;
    QLabel *labelGit;
    QPushButton *pushButton_2Merge;
    QTextBrowser *wyswietlacz;
    QComboBox *comboBoxBranch;
    QComboBox *comboBox_2BranchRemote;
    QLabel *label_2BranchRemote;
    QLabel *labelInfo;
    QPushButton *pushButtonFetch;
    QLabel *labelBranch;
    QComboBox *comboBoxRemotes;

    void setupUi(QDialog *Fetch)
    {
        if (Fetch->objectName().isEmpty())
            Fetch->setObjectName(QStringLiteral("Fetch"));
        Fetch->resize(751, 473);
        gridLayout = new QGridLayout(Fetch);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBack = new QPushButton(Fetch);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));

        gridLayout->addWidget(pushButtonBack, 7, 0, 1, 1);

        labelGit = new QLabel(Fetch);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QFont font;
        font.setPointSize(14);
        labelGit->setFont(font);

        gridLayout->addWidget(labelGit, 0, 2, 1, 1);

        pushButton_2Merge = new QPushButton(Fetch);
        pushButton_2Merge->setObjectName(QStringLiteral("pushButton_2Merge"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2Merge->sizePolicy().hasHeightForWidth());
        pushButton_2Merge->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2Merge, 5, 0, 1, 1);

        wyswietlacz = new QTextBrowser(Fetch);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout->addWidget(wyswietlacz, 1, 2, 7, 1);

        comboBoxBranch = new QComboBox(Fetch);
        comboBoxBranch->setObjectName(QStringLiteral("comboBoxBranch"));

        gridLayout->addWidget(comboBoxBranch, 3, 1, 1, 1);

        comboBox_2BranchRemote = new QComboBox(Fetch);
        comboBox_2BranchRemote->setObjectName(QStringLiteral("comboBox_2BranchRemote"));

        gridLayout->addWidget(comboBox_2BranchRemote, 4, 1, 1, 1);

        label_2BranchRemote = new QLabel(Fetch);
        label_2BranchRemote->setObjectName(QStringLiteral("label_2BranchRemote"));
        QFont font1;
        font1.setPointSize(11);
        label_2BranchRemote->setFont(font1);

        gridLayout->addWidget(label_2BranchRemote, 4, 0, 1, 1);

        labelInfo = new QLabel(Fetch);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Nimbus Roman No9 L"));
        font2.setPointSize(29);
        labelInfo->setFont(font2);

        gridLayout->addWidget(labelInfo, 0, 0, 1, 1);

        pushButtonFetch = new QPushButton(Fetch);
        pushButtonFetch->setObjectName(QStringLiteral("pushButtonFetch"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonFetch->sizePolicy().hasHeightForWidth());
        pushButtonFetch->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonFetch, 2, 0, 1, 1);

        labelBranch = new QLabel(Fetch);
        labelBranch->setObjectName(QStringLiteral("labelBranch"));
        labelBranch->setFont(font1);

        gridLayout->addWidget(labelBranch, 3, 0, 1, 1);

        comboBoxRemotes = new QComboBox(Fetch);
        comboBoxRemotes->setObjectName(QStringLiteral("comboBoxRemotes"));

        gridLayout->addWidget(comboBoxRemotes, 2, 1, 1, 1);


        retranslateUi(Fetch);

        QMetaObject::connectSlotsByName(Fetch);
    } // setupUi

    void retranslateUi(QDialog *Fetch)
    {
        Fetch->setWindowTitle(QApplication::translate("Fetch", "GitUI Fetch", 0));
        pushButtonBack->setText(QApplication::translate("Fetch", "Back", 0));
        labelGit->setText(QApplication::translate("Fetch", "Your repository in ", 0));
        pushButton_2Merge->setText(QApplication::translate("Fetch", "Merge", 0));
        label_2BranchRemote->setText(QApplication::translate("Fetch", "Remotes branches", 0));
        labelInfo->setText(QApplication::translate("Fetch", "<html><head/><body><p><span style=\" font-size:14pt;\">Download objects and refs </span></p><p><span style=\" font-size:14pt;\">from another repository </span></p></body></html>", 0));
        pushButtonFetch->setText(QApplication::translate("Fetch", "Fetch", 0));
        labelBranch->setText(QApplication::translate("Fetch", "Local branches", 0));
    } // retranslateUi

};

namespace Ui {
    class Fetch: public Ui_Fetch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FETCH_H
