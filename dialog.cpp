#include "dialog.h"
#include "ui_dialog.h"
#include <QCheckBox>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QCheckBox *c;

void Dialog::on_pushButton_clicked()
{
    c = new QCheckBox("da", this);

    c->show();
    c->move(qrand()%20, 40);

}

void Dialog::on_pushButton_2_clicked()
{
    delete c;
    c = NULL;
}
