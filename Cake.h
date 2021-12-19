//
// Created by Jared Gray on 11/27/21.
//
#include "BakedGood.h"
#include <string>

#ifndef LAB9___INHERITANCE_CAKE_H
#define LAB9___INHERITANCE_CAKE_H

using namespace std;

class Cake : public BakedGood{

protected:
    string cakeFlavor  = "none";
    string frostingType;

public:
    Cake(string cakeFlavor, string frostingType);

};


#endif //LAB9___INHERITANCE_CAKE_H
