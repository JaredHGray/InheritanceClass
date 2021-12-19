//
// Created by Jared Gray on 11/27/21.
//
#include "Cake.h"
#include <string>
#ifndef LAB9___INHERITANCE_LAYERCAKE_H
#define LAB9___INHERITANCE_LAYERCAKE_H

using namespace std;

class LayerCake : public Cake{

protected:
    int layerCount;
    double itemPrice = 9.0;
    double frostingPrice = 1.0;
    double layerPrice = 3.0;
    double totalPrice = 0.0;
    double discountCost = 0.0;

public:
    LayerCake(string cakeFlavor, string frostingType, int layerCount);
    virtual string ToString();
    string TotalCost();
    virtual double DiscountedPrice(int itemQuantity);
};


#endif //LAB9___INHERITANCE_LAYERCAKE_H
