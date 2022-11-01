#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>
#include <vector>
class home;
using namespace std;
namespace Ui {class customer;}

class customer : public QDialog
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();
    void addtocart();
private slots:
    void on_pushButton_5_clicked();

private:
    Ui::customer *ui;
    QString name, address, phone_number, email;
    //vector <product> cart;
    home *homewin;
};

#endif // CUSTOMER_H
