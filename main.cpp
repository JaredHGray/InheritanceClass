#include <iostream>
#include <iomanip>
#include "Bread.h"
#include "LayerCake.h"
#include "CupCake.h"
#include <string>
#include <vector>

using namespace std;

int main() {
    string orderedItem;
    string sprinkleColor;
    string frostingType;
    string breadType;
    string cakeFlavor;
    int layerCount;
    int itemQuantity;
    int itemCounter;
    int totalItemCount;
    double orderPrice;
    vector<BakedGood*> orderedItems;
    vector<string> alreadyCounted;

    cout << "**Bread and Cakes Bakery**" << endl << endl;
    cout << "Enter sub-order (enter \"done\" to finish)" << endl;
    breadType = "none";
    while(orderedItem != "done"){
        cout << "Sub-order: ";
        cin >> orderedItem;
        cin.ignore();
        if(orderedItem == "Bread"){
            cin >> breadType;
            cin.ignore();
            cin >> itemQuantity;
            cin.ignore();
            for(int i = 0; i < itemQuantity; ++i) {
                orderedItems.push_back(new Bread(breadType));
            }
        }
        if(orderedItem == "Cupcake"){
            cin >> cakeFlavor;
            cin.ignore();
            cin >> frostingType;
            cin.ignore();
            cin >> sprinkleColor;
            cin.ignore();
            cin >> itemQuantity;
            cin.ignore();
            for(int i = 0; i < itemQuantity; ++i) {
                orderedItems.push_back(new CupCake(cakeFlavor, frostingType, sprinkleColor));
            }
        }
        if(orderedItem == "Layer-cake"){
            cin >> cakeFlavor;
            cin.ignore();
            cin >> frostingType;
            cin.ignore();
            cin >> layerCount;
            cin.ignore();
            cin >> itemQuantity;
            cin.ignore();
            for(int i = 0; i < itemQuantity; ++i) {
                orderedItems.push_back(new LayerCake(cakeFlavor, frostingType, layerCount));
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Order Confirmations: " << endl;
    for(int i = 0; i < orderedItems.size(); ++i){
        cout << orderedItems[i]->ToString();
        cout << endl;
    }

    cout << endl;
    cout << "Invoice:" << endl;
    cout << "Baked Good" << setw(77) << "Quantity" << setw(9) << "Total" << endl;
    orderPrice = 0.0;
    totalItemCount = 0;
    for(int i = 0; i < orderedItems.size(); ++i){
        bool checker = false;
        itemCounter = 0;
        alreadyCounted.push_back("word");
        for(int k = 0; k < alreadyCounted.size(); ++k){
            if(alreadyCounted.at(k) == orderedItems.at(i)->ToString()){
                checker = true;
                continue;
            }
        }
        if(checker == true){
            continue;
        }
        else{
            for(int j = 0; j < orderedItems.size(); ++j){
                if(orderedItems.at(i)->ToString() == orderedItems.at(j)->ToString()){
                    ++itemCounter;
                }
            }
            totalItemCount += itemCounter;
            orderPrice += orderedItems.at(i)->DiscountedPrice(itemCounter);
            cout << orderedItems.at(i)->ToString() << setw(77) << itemCounter << setw(9);
            cout << fixed << setprecision(2) << orderedItems.at(i)->DiscountedPrice(itemCounter) << endl;
        }
        alreadyCounted.push_back(orderedItems.at(i)->ToString());
    }
    cout << "Totals" << setw(77) << totalItemCount << setw(9) << orderPrice << endl;
    cout << "Goodbye" << endl;
    return 0;
}
