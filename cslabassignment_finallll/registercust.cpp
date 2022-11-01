#include "registercust.h"
#include "ui_registercust.h"
#include "customer.h"

registercust::registercust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registercust)
{
    ui->setupUi(this);
}

registercust::~registercust()
{
    delete ui;
}

void registercust::on_registerpb_clicked()
{
    custwin = new customer();
    custwin->show();
    this->close();



}

