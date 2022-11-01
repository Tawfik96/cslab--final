#include "seller.h"
#include "ui_seller.h"
#include "home.h"
seller::seller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
}

seller::~seller()
{
    delete ui;
}

void seller::on_pushButton_2_clicked()
{
    homewin = new home();
    homewin->show();
    this->close();

}

