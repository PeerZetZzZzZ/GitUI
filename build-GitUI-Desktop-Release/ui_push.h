/********************************************************************************
** Form generated from reading UI file 'push.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSH_H
#define UI_PUSH_H

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

class Ui_Push
{
public:
    QGridLayout *gridLayout;
    QLabel *labelInfo;
    QLabel *labelGit;
    QPushButton *pushButton_2Back;
    QLabel *labelRemote;
    QComboBox *comboBox_2Remote;
    QPushButton *pushButton;
    QLabel *labelBranch;
    QComboBox *comboBoxBranch;
    QTextBrowser *wyswietlacz;
    QPushButton *pushButton_3Pull;

    void setupUi(QDialog *Push)
    {
        if (Push->objectName().isEmpty())
            Push->setObjectName(QStringLiteral("Push"));
        Push->resize(635, 429);
        gridLayout = new QGridLayout(Push);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelInfo = new QLabel(Push);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Roman No9 L"));
        font.setPointSize(14);
        labelInfo->setFont(font);

        gridLayout->addWidget(labelInfo, 0, 0, 1, 1);

        labelGit = new QLabel(Push);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QFont font1;
        font1.setPointSize(14);
        labelGit->setFont(font1);

        gridLayout->addWidget(labelGit, 0, 1, 1, 1);

        pushButton_2Back = new QPushButton(Push);
        pushButton_2Back->setObjectName(QStringLiteral("pushButton_2Back"));

        gridLayout->addWidget(pushButton_2Back, 8, 0, 1, 1);

        labelRemote = new QLabel(Push);
        labelRemote->setObjectName(QStringLiteral("labelRemote"));
        QFont font2;
        font2.setPointSize(11);
        labelRemote->setFont(font2);

        gridLayout->addWidget(labelRemote, 1, 0, 1, 1);

        comboBox_2Remote = new QComboBox(Push);
        comboBox_2Remote->setObjectName(QStringLiteral("comboBox_2Remote"));

        gridLayout->addWidget(comboBox_2Remote, 2, 0, 1, 1);

        pushButton = new QPushButton(Push);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        labelBranch = new QLabel(Push);
        labelBranch->setObjectName(QStringLiteral("labelBranch"));
        labelBranch->setFont(font2);

        gridLayout->addWidget(labelBranch, 3, 0, 1, 1);

        comboBoxBranch = new QComboBox(Push);
        comboBoxBranch->setObjectName(QStringLiteral("comboBoxBranch"));

        gridLayout->addWidget(comboBoxBranch, 4, 0, 1, 1);

        wyswietlacz = new QTextBrowser(Push);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout->addWidget(wyswietlacz, 1, 1, 8, 1);

        pushButton_3Pull = new QPushButton(Push);
        pushButton_3Pull->setObjectName(QStringLiteral("pushButton_3Pull"));

        gridLayout->addWidget(pushButton_3Pull, 6, 0, 1, 1);


        retranslateUi(Push);

        QMetaObject::connectSlotsByName(Push);
    } // setupUi

    void retranslateUi(QDialog *Push)
    {
        Push->setWindowTitle(QApplication::translate("Push", "GitUI Push", 0));
        labelInfo->setText(QApplication::translate("Push", "TextLabel", 0));
        labelGit->setText(QApplication::translate("Push", "Your repository in", 0));
        pushButton_2Back->setText(QApplication::translate("Push", "Back", 0));
        labelRemote->setText(QApplication::translate("Push", "Select tracked repository ", 0));
        pushButton->setText(QApplication::translate("Push", "Push", 0));
        labelBranch->setText(QApplication::translate("Push", "Select branch to push/pull", 0));
        pushButton_3Pull->setText(QApplication::translate("Push", "Pull", 0));
    } // retranslateUi

};

namespace Ui {
    class Push: public Ui_Push {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSH_H
