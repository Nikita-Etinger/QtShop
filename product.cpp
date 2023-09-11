#include "product.h"

QString Product::getName() const
{
    return name;
}

void Product::setName(const QString &value)
{
    name = value;
}

QString Product::getCategory() const
{
    return category;
}

void Product::setCategory(const QString &value)
{
    category = value;
}

float Product::getPrice() const
{
    return price;
}

void Product::setPrice(float value)
{
    price = value;
}

int Product::getUniqId()
{
    return uniqId;
}

Product::Product()
{
    Product::id++;
    uniqId=id;

}

Product::Product(QString &name,QString &category, float price)
{
    this->name=name;
    this->category=category;
    this->price=price;
    Product::id++;
    uniqId=id;
}

int Product::id=0;
