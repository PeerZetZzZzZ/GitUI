/********************************************************************************
** Form generated from reading UI file 'clone.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLONE_H
#define UI_CLONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_Clone
{
public:
    QGridLayout *gridLayout;
    QLabel *labelOperacja;
    QTreeView *wyswietlaczDrzewiak;
    QTextBrowser *wyswietlacz;
    QLabel *labelURL;
    QLineEdit *lineEditURL;
    QLineEdit *lineEdit_2Nazwa;
    QRadioButton *radioButton;
    QLabel *label_2Nazwa;
    QPushButton *pushButton;
    QPushButton *pushButton_2Back;

    void setupUi(QDialog *Clone)
    {
        if (Clone->objectName().isEmpty())
            Clone->setObjectName(QStringLiteral("Clone"));
        Clone->resize(761, 487);
        gridLayout = new QGridLayout(Clone);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelOperacja = new QLabel(Clone);
        labelOperacja->setObjectName(QStringLiteral("labelOperacja"));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Roman No9 L"));
        font.setPointSize(14);
        labelOperacja->setFont(font);

        gridLayout->addWidget(labelOperacja, 0, 0, 1, 1);

        wyswietlaczDrzewiak = new QTreeView(Clone);
        wyswietlaczDrzewiak->setObjectName(QStringLiteral("wyswietlaczDrzewiak"));

        gridLayout->addWidget(wyswietlaczDrzewiak, 1, 0, 6, 1);

        wyswietlacz = new QTextBrowser(Clone);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout->addWidget(wyswietlacz, 1, 1, 1, 2);

        labelURL = new QLabel(Clone);
        labelURL->setObjectName(QStringLiteral("labelURL"));

        gridLayout->addWidget(labelURL, 2, 1, 1, 1);

        lineEditURL = new QLineEdit(Clone);
        lineEditURL->setObjectName(QStringLiteral("lineEditURL"));

        gridLayout->addWidget(lineEditURL, 3, 1, 1, 1);

        lineEdit_2Nazwa = new QLineEdit(Clone);
        lineEdit_2Nazwa->setObjectName(QStringLiteral("lineEdit_2Nazwa"));

        gridLayout->addWidget(lineEdit_2Nazwa, 5, 1, 1, 1);

        radioButton = new QRadioButton(Clone);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 3, 2, 1, 1);

        label_2Nazwa = new QLabel(Clone);
        label_2Nazwa->setObjectName(QStringLiteral("label_2Nazwa"));

        gridLayout->addWidget(label_2Nazwa, 4, 1, 1, 1);

        pushButton = new QPushButton(Clone);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 6, 1, 1, 1);

        pushButton_2Back = new QPushButton(Clone);
        pushButton_2Back->setObjectName(QStringLiteral("pushButton_2Back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2Back->sizePolicy().hasHeightForWidth());
        pushButton_2Back->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2Back, 7, 1, 1, 1);


        retranslateUi(Clone);

        QMetaObject::connectSlotsByName(Clone);
    } // setupUi

    void retranslateUi(QDialog *Clone)
    {
        Clone->setWindowTitle(QApplication::translate("Clone", "GitUI Clone", 0));
        labelOperacja->setText(QApplication::translate("Clone", "TextLabel", 0));
        labelURL->setText(QApplication::translate("Clone", "TextLabel", 0));
        radioButton->setText(QApplication::translate("Clone", "RadioButton", 0));
        label_2Nazwa->setText(QApplication::translate("Clone", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Clone", "PushButton", 0));
        pushButton_2Back->setText(QApplication::translate("Clone", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class Clone: public Ui_Clone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLONE_H
