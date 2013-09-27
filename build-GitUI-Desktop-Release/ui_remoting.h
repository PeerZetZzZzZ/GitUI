/********************************************************************************
** Form generated from reading UI file 'remoting.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTING_H
#define UI_REMOTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Remoting
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *labelOperacja;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QTextBrowser *wyswietlacz;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *labelGit;
    QPushButton *pushButtonBack;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;

    void setupUi(QDialog *Remoting)
    {
        if (Remoting->objectName().isEmpty())
            Remoting->setObjectName(QStringLiteral("Remoting"));
        Remoting->resize(817, 498);
        gridLayout_3 = new QGridLayout(Remoting);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(Remoting);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        pushButton = new QPushButton(Remoting);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 1);

        labelOperacja = new QLabel(Remoting);
        labelOperacja->setObjectName(QStringLiteral("labelOperacja"));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Roman No9 L"));
        font.setPointSize(14);
        labelOperacja->setFont(font);

        gridLayout_3->addWidget(labelOperacja, 0, 0, 1, 1);

        comboBox = new QComboBox(Remoting);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 7, 0, 1, 1);

        pushButton_3 = new QPushButton(Remoting);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 8, 0, 1, 1);

        wyswietlacz = new QTextBrowser(Remoting);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout_3->addWidget(wyswietlacz, 1, 4, 13, 1);

        label_2 = new QLabel(Remoting);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Remoting);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 5, 0, 1, 2);

        lineEdit = new QLineEdit(Remoting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit, 3, 0, 1, 1);

        labelGit = new QLabel(Remoting);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QFont font1;
        font1.setPointSize(14);
        labelGit->setFont(font1);

        gridLayout_3->addWidget(labelGit, 0, 4, 1, 1);

        pushButtonBack = new QPushButton(Remoting);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));

        gridLayout_3->addWidget(pushButtonBack, 13, 0, 1, 1);

        pushButton_2 = new QPushButton(Remoting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 6, 0, 1, 1);

        radioButton = new QRadioButton(Remoting);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_3->addWidget(radioButton, 3, 1, 1, 1);


        retranslateUi(Remoting);

        QMetaObject::connectSlotsByName(Remoting);
    } // setupUi

    void retranslateUi(QDialog *Remoting)
    {
        Remoting->setWindowTitle(QApplication::translate("Remoting", "GitUI Remoting", 0));
        label->setText(QApplication::translate("Remoting", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Remoting", "PushButton", 0));
        labelOperacja->setText(QApplication::translate("Remoting", "Operacja", 0));
        pushButton_3->setText(QApplication::translate("Remoting", "PushButton", 0));
        label_2->setText(QApplication::translate("Remoting", "TextLabel", 0));
        labelGit->setText(QApplication::translate("Remoting", "Your repositories in", 0));
        pushButtonBack->setText(QApplication::translate("Remoting", "Back", 0));
        pushButton_2->setText(QApplication::translate("Remoting", "PushButton", 0));
        radioButton->setText(QApplication::translate("Remoting", "RadioButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Remoting: public Ui_Remoting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTING_H
