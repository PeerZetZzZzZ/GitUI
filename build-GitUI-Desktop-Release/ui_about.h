/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelProgramName;
    QLabel *labelVersion;
    QLabel *labelAuthor;
    QLabel *labelEmail;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(415, 203);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelProgramName = new QLabel(About);
        labelProgramName->setObjectName(QStringLiteral("labelProgramName"));

        verticalLayout->addWidget(labelProgramName);

        labelVersion = new QLabel(About);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));

        verticalLayout->addWidget(labelVersion);

        labelAuthor = new QLabel(About);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));

        verticalLayout->addWidget(labelAuthor);

        labelEmail = new QLabel(About);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        verticalLayout->addWidget(labelEmail);

        pushButtonBack = new QPushButton(About);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonBack->sizePolicy().hasHeightForWidth());
        pushButtonBack->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButtonBack);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "GitUI About", 0));
        labelProgramName->setText(QApplication::translate("About", "programName", 0));
        labelVersion->setText(QApplication::translate("About", "version", 0));
        labelAuthor->setText(QApplication::translate("About", "Author", 0));
        labelEmail->setText(QApplication::translate("About", "e-mail", 0));
        pushButtonBack->setText(QApplication::translate("About", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
