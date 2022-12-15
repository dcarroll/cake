#ifndef CAKE_H
#define CAKE_H
#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

class cake {

private:
    int cost;
    int cake_size;
    int decor_price;
    string sheet_size;
    vector<string> cake_flavors;
    string writing;
    string deco;
    string cake_shape;
public:
    cake();
    void printReceipt();
    void getCakeInfo();
    void priceReturn();
    bool isvalidShape(string shape);
    string tolower(string orderType);
};
#endif