/********************************************************************************
** Form generated from reading UI file 'branch.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRANCH_H
#define UI_BRANCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Branch
{
public:
    QGridLayout *gridLayout_2;
    QTextBrowser *wyswietlacz;
    QComboBox *comboBox;
    QFormLayout *formLayout;
    QLabel *labelError;
    QPushButton *pushButtonAddBranch;
    QLabel *labelInfo;
    QLineEdit *lineEditBranchName;
    QPushButton *pushButtonDeleteBranch;
    QPushButton *pushButtonMerge;
    QComboBox *comboBox_2;
    QPushButton *pushButtonCheckout;
    QPushButton *pushButtonBack;
    QLabel *label;
    QLabel *labelBranch;
    QRadioButton *radioButton;
    QLabel *label_2;

    void setupUi(QDialog *Branch)
    {
        if (Branch->objectName().isEmpty())
            Branch->setObjectName(QStringLiteral("Branch"));
        Branch->resize(835, 474);
        gridLayout_2 = new QGridLayout(Branch);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        wyswietlacz = new QTextBrowser(Branch);
        wyswietlacz->setObjectName(QStringLiteral("wyswietlacz"));

        gridLayout_2->addWidget(wyswietlacz, 3, 3, 5, 1);

        comboBox = new QComboBox(Branch);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 3, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelError = new QLabel(Branch);
        labelError->setObjectName(QStringLiteral("labelError"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, labelError);

        pushButtonAddBranch = new QPushButton(Branch);
        pushButtonAddBranch->setObjectName(QStringLiteral("pushButtonAddBranch"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButtonAddBranch);

        labelInfo = new QLabel(Branch);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        labelInfo->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelInfo);

        lineEditBranchName = new QLineEdit(Branch);
        lineEditBranchName->setObjectName(QStringLiteral("lineEditBranchName"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, lineEditBranchName);

        pushButtonDeleteBranch = new QPushButton(Branch);
        pushButtonDeleteBranch->setObjectName(QStringLiteral("pushButtonDeleteBranch"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButtonDeleteBranch);

        pushButtonMerge = new QPushButton(Branch);
        pushButtonMerge->setObjectName(QStringLiteral("pushButtonMerge"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButtonMerge);

        comboBox_2 = new QComboBox(Branch);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_2);

        pushButtonCheckout = new QPushButton(Branch);
        pushButtonCheckout->setObjectName(QStringLiteral("pushButtonCheckout"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButtonCheckout);


        gridLayout_2->addLayout(formLayout, 5, 0, 3, 3);

        pushButtonBack = new QPushButton(Branch);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));

        gridLayout_2->addWidget(pushButtonBack, 8, 0, 1, 1);

        label = new QLabel(Branch);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        gridLayout_2->addWidget(label, 1, 3, 1, 1);

        labelBranch = new QLabel(Branch);
        labelBranch->setObjectName(QStringLiteral("labelBranch"));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        labelBranch->setFont(font2);

        gridLayout_2->addWidget(labelBranch, 3, 0, 1, 1);

        radioButton = new QRadioButton(Branch);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 4, 0, 1, 1);

        label_2 = new QLabel(Branch);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Nimbus Roman No9 L"));
        font3.setPointSize(16);
        font3.setItalic(false);
        label_2->setFont(font3);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(Branch);

        QMetaObject::connectSlotsByName(Branch);
    } // setupUi

    void retranslateUi(QDialog *Branch)
    {
        Branch->setWindowTitle(QApplication::translate("Branch", "GitUI Branch", 0));
        labelError->setText(QApplication::translate("Branch", "labelError", 0));
        pushButtonAddBranch->setText(QApplication::translate("Branch", "Add branch", 0));
        labelInfo->setText(QApplication::translate("Branch", "labelInfo", 0));
        pushButtonDeleteBranch->setText(QApplication::translate("Branch", "Delete selected branch:", 0));
        pushButtonMerge->setText(QApplication::translate("Branch", "Merge", 0));
        pushButtonCheckout->setText(QApplication::translate("Branch", "Checkout", 0));
        pushButtonBack->setText(QApplication::translate("Branch", "Back", 0));
        label->setText(QApplication::translate("Branch", "Your branches in ", 0));
        labelBranch->setText(QApplication::translate("Branch", "Currently on branch:", 0));
        radioButton->setText(QApplication::translate("Branch", "Modify branches", 0));
        label_2->setText(QApplication::translate("Branch", "Change branch", 0));
    } // retranslateUi

};

namespace Ui {
    class Branch: public Ui_Branch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRANCH_H
