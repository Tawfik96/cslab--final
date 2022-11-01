#ifndef SELLER_H
#define SELLER_H

#include <QDialog>

namespace Ui {
class seller;
}

class seller : public QDialog
{
    Q_OBJECT

public:
    explicit seller(QWidget *parent = nullptr);
    ~seller();

private:
    Ui::seller *ui;
    QString name, email;
};

#endif // SELLER_H
