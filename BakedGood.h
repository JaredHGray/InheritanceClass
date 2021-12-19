//
// Created by Jared Gray on 11/27/21.
//
//BaseLevel
#ifndef LAB9___INHERITANCE_BAKEDGOOD_H
#define LAB9___INHERITANCE_BAKEDGOOD_H
#include <string>
#include <vector>
using namespace std;

class BakedGood {

public:
    BakedGood();
    virtual string ToString() = 0;
    virtual double DiscountedPrice(int itemQuantity) = 0;

};


#endif //LAB9___INHERITANCE_BAKEDGOOD_H
