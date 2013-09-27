#include "helpindeks.h"
#include "ui_helpindeks.h"
#include <QUrl>
#include <QFile>
#include <QTextStream>
#include <QDir>
HelpIndeks::HelpIndeks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpIndeks)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("file://"+okreslAktualnaSciezke()+"/HelpIndeksGitUi.html"));
    connect(ui->pushButtonBack,SIGNAL(clicked()),this,SLOT(close()));
}

HelpIndeks::~HelpIndeks()
{
    delete ui;
}
QString HelpIndeks::okreslAktualnaSciezke(){
    return QDir::currentPath();
}
