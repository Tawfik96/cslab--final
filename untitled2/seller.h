#ifndef SELLER_H
#define SELLER_H

#include <QDialog>
class home;
namespace Ui {
class seller;
}

class seller : public QDialog
{
    Q_OBJECT

public:
    explicit seller(QWidget *parent = nullptr);
    ~seller();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::seller *ui;
    QString name, email;
    home *homewin;
};

#endif // SELLER_H
