//
// Created by Jared Gray on 11/27/21.
//

#include "Cake.h"
#include <string>

Cake::Cake(string cakeFlavor, string frostingType = "none")
        : BakedGood() {
    this->cakeFlavor = cakeFlavor;
    this->frostingType = frostingType;
}