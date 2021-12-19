//
// Created by Jared Gray on 11/27/21.
//
#include "BakedGood.h"
#ifndef LAB9___INHERITANCE_BREAD_H
#define LAB9___INHERITANCE_BREAD_H


class Bread : public BakedGood{
public:
    Bread(string breadType = "Bread");
    virtual string ToString();
    virtual double DiscountedPrice(int itemQuantity);

protected:
    string breadType;
    double itemPrice = 4.5;
};


#endif //LAB9___INHERITANCE_BREAD_H
