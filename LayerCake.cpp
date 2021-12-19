//
// Created by Jared Gray on 11/27/21.
//

#include "LayerCake.h"
#include <string>

LayerCake::LayerCake(string cakeFlavor, string frostingType = "none", int layerCount = 0) : Cake(cakeFlavor, frostingType) {
    this->layerCount = layerCount;
}

string LayerCake::TotalCost() {
    totalPrice = itemPrice;
    if(layerCount > 1){
        totalPrice += (layerPrice * (layerCount - 1));
    }
    if(frostingType == "cream-cheese"){
        totalPrice += (frostingPrice * layerCount);
    }
    return to_string(totalPrice);
}

string LayerCake::ToString() {
    string test = to_string(layerCount) + "-layer " + cakeFlavor + " cake with " + frostingType + " frosting ($" + TotalCost() + ")";
    return test;
}

double LayerCake::DiscountedPrice(int itemQuantity){
    if(itemQuantity >= 3){
        discountCost = itemQuantity * totalPrice - (itemQuantity * 2);
    }
    else {
        discountCost = itemQuantity * totalPrice;
    }
    return discountCost;
}