#include "customer.h"
#include "ui_customer.h"
#include "mainwindow.h"

customer::customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_pushButton_5_clicked()
{
   // homewin = new mainwindow();
   // homewin->show();
    //this->close();
}

