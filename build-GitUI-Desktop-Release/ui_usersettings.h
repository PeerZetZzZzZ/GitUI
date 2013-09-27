/********************************************************************************
** Form generated from reading UI file 'usersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSETTINGS_H
#define UI_USERSETTINGS_H

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

QT_BEGIN_NAMESPACE

class Ui_UserSettings
{
public:
    QGridLayout *gridLayout;
    QLabel *labelInfo;
    QLabel *labelGit;
    QLabel *label_2DeveloperINfo;
    QLineEdit *lineEditChangeName;
    QPushButton *pushButtonChangeName;
    QLineEdit *lineEdit_2ChangeEmail;
    QPushButton *pushButton_2ChangeEmail;
    QLabel *labelGitSettings;
    QLineEdit *lineEditChangeEditor;
    QPushButton *pushButtonChangeEditor;
    QLabel *label_3DefaultRepo;
    QLineEdit *lineEdit_3DefaultRepo;
    QPushButton *pushButtonSetNull;
    QPushButton *pushButton_3SetRepo;
    QPushButton *pushButtonBack;
    QLabel *labelRepositoryInfo;

    void setupUi(QDialog *UserSettings)
    {
        if (UserSettings->objectName().isEmpty())
            UserSettings->setObjectName(QStringLiteral("UserSettings"));
        UserSettings->resize(710, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserSettings->sizePolicy().hasHeightForWidth());
        UserSettings->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(UserSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelInfo = new QLabel(UserSettings);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman L"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        labelInfo->setFont(font);

        gridLayout->addWidget(labelInfo, 1, 0, 1, 2);

        labelGit = new QLabel(UserSettings);
        labelGit->setObjectName(QStringLiteral("labelGit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelGit->sizePolicy().hasHeightForWidth());
        labelGit->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(14);
        labelGit->setFont(font1);

        gridLayout->addWidget(labelGit, 0, 0, 1, 3);

        label_2DeveloperINfo = new QLabel(UserSettings);
        label_2DeveloperINfo->setObjectName(QStringLiteral("label_2DeveloperINfo"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2DeveloperINfo->sizePolicy().hasHeightForWidth());
        label_2DeveloperINfo->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_2DeveloperINfo, 2, 0, 1, 1);

        lineEditChangeName = new QLineEdit(UserSettings);
        lineEditChangeName->setObjectName(QStringLiteral("lineEditChangeName"));

        gridLayout->addWidget(lineEditChangeName, 3, 0, 1, 1);

        pushButtonChangeName = new QPushButton(UserSettings);
        pushButtonChangeName->setObjectName(QStringLiteral("pushButtonChangeName"));

        gridLayout->addWidget(pushButtonChangeName, 3, 1, 1, 1);

        lineEdit_2ChangeEmail = new QLineEdit(UserSettings);
        lineEdit_2ChangeEmail->setObjectName(QStringLiteral("lineEdit_2ChangeEmail"));

        gridLayout->addWidget(lineEdit_2ChangeEmail, 4, 0, 1, 1);

        pushButton_2ChangeEmail = new QPushButton(UserSettings);
        pushButton_2ChangeEmail->setObjectName(QStringLiteral("pushButton_2ChangeEmail"));

        gridLayout->addWidget(pushButton_2ChangeEmail, 4, 1, 1, 1);

        labelGitSettings = new QLabel(UserSettings);
        labelGitSettings->setObjectName(QStringLiteral("labelGitSettings"));
        sizePolicy2.setHeightForWidth(labelGitSettings->sizePolicy().hasHeightForWidth());
        labelGitSettings->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelGitSettings, 5, 0, 1, 1);

        lineEditChangeEditor = new QLineEdit(UserSettings);
        lineEditChangeEditor->setObjectName(QStringLiteral("lineEditChangeEditor"));

        gridLayout->addWidget(lineEditChangeEditor, 6, 0, 1, 1);

        pushButtonChangeEditor = new QPushButton(UserSettings);
        pushButtonChangeEditor->setObjectName(QStringLiteral("pushButtonChangeEditor"));

        gridLayout->addWidget(pushButtonChangeEditor, 6, 1, 1, 1);

        label_3DefaultRepo = new QLabel(UserSettings);
        label_3DefaultRepo->setObjectName(QStringLiteral("label_3DefaultRepo"));
        sizePolicy2.setHeightForWidth(label_3DefaultRepo->sizePolicy().hasHeightForWidth());
        label_3DefaultRepo->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3DefaultRepo, 7, 0, 1, 1);

        lineEdit_3DefaultRepo = new QLineEdit(UserSettings);
        lineEdit_3DefaultRepo->setObjectName(QStringLiteral("lineEdit_3DefaultRepo"));

        gridLayout->addWidget(lineEdit_3DefaultRepo, 9, 0, 1, 1);

        pushButtonSetNull = new QPushButton(UserSettings);
        pushButtonSetNull->setObjectName(QStringLiteral("pushButtonSetNull"));

        gridLayout->addWidget(pushButtonSetNull, 9, 2, 1, 1);

        pushButton_3SetRepo = new QPushButton(UserSettings);
        pushButton_3SetRepo->setObjectName(QStringLiteral("pushButton_3SetRepo"));

        gridLayout->addWidget(pushButton_3SetRepo, 9, 1, 1, 1);

        pushButtonBack = new QPushButton(UserSettings);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        sizePolicy2.setHeightForWidth(pushButtonBack->sizePolicy().hasHeightForWidth());
        pushButtonBack->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonBack, 10, 0, 1, 1);

        labelRepositoryInfo = new QLabel(UserSettings);
        labelRepositoryInfo->setObjectName(QStringLiteral("labelRepositoryInfo"));
        sizePolicy1.setHeightForWidth(labelRepositoryInfo->sizePolicy().hasHeightForWidth());
        labelRepositoryInfo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelRepositoryInfo, 8, 0, 1, 1);


        retranslateUi(UserSettings);

        QMetaObject::connectSlotsByName(UserSettings);
    } // setupUi

    void retranslateUi(QDialog *UserSettings)
    {
        UserSettings->setWindowTitle(QApplication::translate("UserSettings", "GitUI User Settings", 0));
        labelInfo->setText(QString());
        labelGit->setText(QApplication::translate("UserSettings", "Your repository in ", 0));
        label_2DeveloperINfo->setText(QApplication::translate("UserSettings", "<html><head/><body><p><span style=\" font-weight:600;\">Developer information</span></p></body></html>", 0));
        pushButtonChangeName->setText(QApplication::translate("UserSettings", "Change name", 0));
        pushButton_2ChangeEmail->setText(QApplication::translate("UserSettings", "Change e-mail", 0));
        labelGitSettings->setText(QApplication::translate("UserSettings", "<html><head/><body><p><span style=\" font-weight:600;\">Other settings</span></p></body></html>", 0));
        pushButtonChangeEditor->setText(QApplication::translate("UserSettings", "Change editor", 0));
        label_3DefaultRepo->setText(QApplication::translate("UserSettings", "<html><head/><body><p><span style=\" font-weight:600;\">Set current repository as a default repository</span></p></body></html>", 0));
        pushButtonSetNull->setText(QApplication::translate("UserSettings", "Clear!", 0));
        pushButton_3SetRepo->setText(QApplication::translate("UserSettings", "Set repo", 0));
        pushButtonBack->setText(QApplication::translate("UserSettings", "Back", 0));
        labelRepositoryInfo->setText(QApplication::translate("UserSettings", "<html><head/><body><p><span style=\" font-style:italic;\">TextLabel</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class UserSettings: public Ui_UserSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSETTINGS_H
