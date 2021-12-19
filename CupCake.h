//
// Created by Jared Gray on 11/27/21.
//
#include "Cake.h"
#include <string>
#ifndef LAB9___INHERITANCE_CUPCAKE_H
#define LAB9___INHERITANCE_CUPCAKE_H

using namespace std;

class CupCake : public Cake{
protected:
    string sprinkleColor;
    double itemPrice = 1.95;
    double frostingPrice = 0.2;
    double totalPrice = 0.0;
    double discountPrice = 0.0;
public:
    CupCake(string cakeFlavor, string frostingType, string sprinkleColor);
    string TotalCost();
    virtual string ToString();
    virtual double DiscountedPrice(int itemQuantity);
};


#endif //LAB9___INHERITANCE_CUPCAKE_H
