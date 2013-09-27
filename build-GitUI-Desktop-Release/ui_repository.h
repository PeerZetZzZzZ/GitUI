/********************************************************************************
** Form generated from reading UI file 'repository.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPOSITORY_H
#define UI_REPOSITORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_Repository
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *labelInformacja;
    QLabel *labelOperacja;
    QTreeView *wyswietlaczDrzewiak;
    QPushButton *pushButtonWybierz;
    QPushButton *pushButtonAnuluj;

    void setupUi(QDialog *Repository)
    {
        if (Repository->objectName().isEmpty())
            Repository->setObjectName(QStringLiteral("Repository"));
        Repository->resize(682, 412);
        gridLayout = new QGridLayout(Repository);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelInformacja = new QLabel(Repository);
        labelInformacja->setObjectName(QStringLiteral("labelInformacja"));
        QFont font;
        font.setPointSize(13);
        labelInformacja->setFont(font);

        gridLayout_2->addWidget(labelInformacja, 1, 1, 1, 1);

        labelOperacja = new QLabel(Repository);
        labelOperacja->setObjectName(QStringLiteral("labelOperacja"));
        QFont font1;
        font1.setFamily(QStringLiteral("URW Bookman L"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        labelOperacja->setFont(font1);

        gridLayout_2->addWidget(labelOperacja, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        wyswietlaczDrzewiak = new QTreeView(Repository);
        wyswietlaczDrzewiak->setObjectName(QStringLiteral("wyswietlaczDrzewiak"));

        gridLayout->addWidget(wyswietlaczDrzewiak, 0, 1, 1, 1);

        pushButtonWybierz = new QPushButton(Repository);
        pushButtonWybierz->setObjectName(QStringLiteral("pushButtonWybierz"));

        gridLayout->addWidget(pushButtonWybierz, 1, 0, 1, 1);

        pushButtonAnuluj = new QPushButton(Repository);
        pushButtonAnuluj->setObjectName(QStringLiteral("pushButtonAnuluj"));

        gridLayout->addWidget(pushButtonAnuluj, 2, 0, 1, 1);


        retranslateUi(Repository);

        QMetaObject::connectSlotsByName(Repository);
    } // setupUi

    void retranslateUi(QDialog *Repository)
    {
        Repository->setWindowTitle(QApplication::translate("Repository", "GitUI Repository", 0));
        labelInformacja->setText(QApplication::translate("Repository", "Select \".git\" folder", 0));
        labelOperacja->setText(QString());
        pushButtonWybierz->setText(QApplication::translate("Repository", "Select", 0));
        pushButtonAnuluj->setText(QApplication::translate("Repository", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class Repository: public Ui_Repository {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPOSITORY_H
