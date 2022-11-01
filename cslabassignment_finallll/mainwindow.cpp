#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registerseller.h"
#include "registercust.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sellpb_clicked()
{
    sellerwin = new registerseller();
    sellerwin->show();
    this->close();

}


void MainWindow::on_buypb_clicked()
{
    custwin = new registercust();
    custwin->show();
    this->close();

}

