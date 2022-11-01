#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class registercust;
class registerseller;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sellpb_clicked();

    void on_buypb_clicked();

private:
    Ui::MainWindow *ui;
    registercust * custwin;
    registerseller * sellerwin;
};
#endif // MAINWINDOW_H
