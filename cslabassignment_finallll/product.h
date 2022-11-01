#ifndef PRODUCT_H
#define PRODUCT_H
#include<vector>
#include <QDialog>
using namespace std;
class product
{
public:
    product();
    struct QContainerInfo
    {
        QString name,quantity,category,price;

    };
    vector<QContainerInfo>products;
    void add(QString n, QString q,QString pric ,QString cat)
    {
        QContainerInfo t;
        t.name=n;
        t.category=cat;
        t.price=pric;
        t.quantity=q;
    }

};

#endif // PRODUCT_H
