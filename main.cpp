#include<iostream>
#include<vector>
#include "cake.h"
using namespace std;

struct customer {
    int phone;
    string name;
};

void greeting();
string tolower(string& orderType);
bool isvalidOrder(string orderType);

int main() {
    cake cust;
    greeting();
    cust.getCakeInfo();
    cust.printReceipt();
}

void greeting() {
    customer crust;
    string name_order;
    int num_orders = 0;
    cout << "Thank you for ordering from upper crust bakery!" << endl;
    cout << "Please provide your full name" << endl;
    getline(cin, crust.name);
    cout << "Please provide your phone number" << endl;
    cin >> crust.phone;
    cout << "How many orders do you want to do today?" << endl;
    cin >> num_orders;
    for (int i = 0; i < num_orders; i++) {
        do {
            cout << "What do you want for order " << i + 1 << " of " << num_orders << std::endl;
            cin >> name_order;
        } while (!isvalidOrder(name_order));
    }
}

bool isvalidOrder(string orderType) {
    string testOrder = tolower(orderType);
    return (testOrder == "cake" || testOrder == "pie" || testOrder == "pasteries" || testOrder == "desserts");
}

string tolower(string& orderType) {
    for (int i = 0; i < orderType.length(); i++) {
        orderType[i] = std::tolower(orderType[i]);
    }
    return orderType;
}