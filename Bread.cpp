//
// Created by Jared Gray on 11/27/21.
//

#include "Bread.h"
#include <string>

Bread::Bread(string breadType) : BakedGood() {
    this->breadType = breadType;
}

string Bread::ToString() {
    string test = breadType + " bread ($" + to_string(itemPrice) + ")";
    return test;
}

double Bread::DiscountedPrice(int itemQuantity){
    double totalCost = itemQuantity * itemPrice;
    int discountedPrice = itemQuantity / 3;
    for(int i = 0; i < discountedPrice; ++i){
        totalCost = totalCost - itemPrice;
    }
    return totalCost;
}