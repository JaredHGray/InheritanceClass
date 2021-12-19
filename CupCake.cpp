//
// Created by Jared Gray on 11/27/21.
//

#include "CupCake.h"
#include <string>

CupCake::CupCake(string cakeFlavor, string frostingType = "none", string sprinkleColor = "none")
        : Cake(cakeFlavor, frostingType) {
    this->sprinkleColor = sprinkleColor;
}

string CupCake::TotalCost() {
    if(frostingType == "cream-cheese"){
        totalPrice = frostingPrice + itemPrice;
    }
    else{
        totalPrice = itemPrice;
    }
    return to_string(totalPrice);
}

string CupCake::ToString() {
    string test = cakeFlavor + " cupcake with " + frostingType + " frosting and " + sprinkleColor + " sprinkles ($" + TotalCost() + ")";
    return test;
}

double CupCake::DiscountedPrice(int itemQuantity){
    if(itemQuantity >= 2 && itemQuantity < 4){
        discountPrice = itemQuantity * totalPrice - (itemQuantity * 0.30);
    }
    else if(itemQuantity >= 4){
        discountPrice = itemQuantity * totalPrice - (itemQuantity * 0.40);
    }
    else{
        discountPrice = itemQuantity * totalPrice;
    }
    return discountPrice;
}