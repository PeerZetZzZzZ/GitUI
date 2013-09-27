/********************************************************************************
** Form generated from reading UI file 'helpindeks.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPINDEKS_H
#define UI_HELPINDEKS_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelpIndeks
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButtonBack;
    QWebView *webView;

    void setupUi(QDialog *HelpIndeks)
    {
        if (HelpIndeks->objectName().isEmpty())
            HelpIndeks->setObjectName(QStringLiteral("HelpIndeks"));
        HelpIndeks->resize(714, 516);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpIndeks->sizePolicy().hasHeightForWidth());
        HelpIndeks->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(HelpIndeks);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(HelpIndeks);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButtonBack = new QPushButton(HelpIndeks);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        sizePolicy1.setHeightForWidth(pushButtonBack->sizePolicy().hasHeightForWidth());
        pushButtonBack->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonBack, 3, 0, 1, 1);

        webView = new QWebView(HelpIndeks);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout->addWidget(webView, 2, 0, 1, 2);


        retranslateUi(HelpIndeks);

        QMetaObject::connectSlotsByName(HelpIndeks);
    } // setupUi

    void retranslateUi(QDialog *HelpIndeks)
    {
        HelpIndeks->setWindowTitle(QApplication::translate("HelpIndeks", "GitUI Help Indeks", 0));
        label->setText(QApplication::translate("HelpIndeks", "GitUI Index", 0));
        pushButtonBack->setText(QApplication::translate("HelpIndeks", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpIndeks: public Ui_HelpIndeks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPINDEKS_H
