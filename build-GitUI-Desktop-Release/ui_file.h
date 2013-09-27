/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QGridLayout *gridLayout_2;
    QLabel *labelOperacja;
    QTextBrowser *wyswietlacz;
    QGridLayout *gridLayout;
    QLabel *labelGit;
    QPushButton *pushButtonCommit;
    QPushButton *pushButtonCancel;
    QTreeView *wyswietlaczDrzewiak;
    QPushButton *pushButtonAdd;

    void setupUi(QDialog *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QStringLiteral("File"));
        File->resize(1035, 401);
        gridLayout_2 = new QGridLayout(File);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelOperacja = new QLabel(File);
        labelOperacja->setObjectName(QStringLiteral("labelOperacja"));

        gridLayout_2->addWidget(labelOperacja, 0, 0, 1, 1);

        wyswietlacz = new QTextBrowser(File);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wyswietlacz->sizePolicy().hasHeightForWidth());
        wyswietlacz->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(wyswietlacz, 1, 4, 7, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelGit = new QLabel(File);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QFont font;
        font.setPointSize(12);
        labelGit->setFont(font);

        gridLayout->addWidget(labelGit, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 4, 1, 1);

        pushButtonCommit = new QPushButton(File);
        pushButtonCommit->setObjectName(QStringLiteral("pushButtonCommit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonCommit->sizePolicy().hasHeightForWidth());
        pushButtonCommit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButtonCommit, 3, 1, 1, 1);

        pushButtonCancel = new QPushButton(File);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        sizePolicy1.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButtonCancel, 4, 1, 1, 1);

        wyswietlaczDrzewiak = new QTreeView(File);
        wyswietlaczDrzewiak->setObjectName(QStringLiteral("wyswietlaczDrzewiak"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wyswietlaczDrzewiak->sizePolicy().hasHeightForWidth());
        wyswietlaczDrzewiak->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(wyswietlaczDrzewiak, 1, 0, 7, 1);

        pushButtonAdd = new QPushButton(File);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        sizePolicy1.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButtonAdd, 2, 1, 1, 1);


        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QDialog *File)
    {
        File->setWindowTitle(QApplication::translate("File", "GitUI File", 0));
        labelOperacja->setText(QApplication::translate("File", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select files</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">you want to add to repository...</span></p></body></html>", 0));
        labelGit->setText(QApplication::translate("File", "<html><head/><body><p>Your .../.git  repository</p><p><br/></p></body></html>", 0));
        pushButtonCommit->setText(QApplication::translate("File", "Commit", 0));
        pushButtonCancel->setText(QApplication::translate("File", "Back", 0));
        pushButtonAdd->setText(QApplication::translate("File", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
