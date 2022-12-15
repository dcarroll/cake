#include "cake.h"
#include <array>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cake::isvalidShape(std::string shape) {
    std::string testshape = tolower(shape);
    return(shape == "round" || shape == "sheet");
}

std::string cake::tolower(std::string orderType) {
    for (int i = 0; i < orderType.length(); i++) {
        orderType[i] = std::tolower(orderType[i]);
    }
    return orderType;
}

cake::cake() {
    string pbf("peanut butter fudge");
    string vfrr("vanilla french rum raspberry");
    string off("old fashion fudge");
    string ce("chocolate espresso");
    cake_flavors.push_back(pbf);
    cake_flavors.push_back(vfrr);
    cake_flavors.push_back(off);
    cake_flavors.push_back(ce);
    //"vanilla french rum rasberry", "vanilla hazelnut cream", "old fashion fudge", "chocalate espresso"};
};

void cake::getCakeInfo() {
    std::cout << "Are you ordering a round or sheet cake?\n";
    std::cin >> cake_shape;
    while (!isvalidShape(cake_shape)) {
        std::cout << "Please enter round or sheet" << std::endl;
        std::cin >> cake_shape;
    }
    if (cake_shape == "round") {
        std::cout << "What size cake do you want?(6,8,9,10,12)" << std::endl;
        std::cin >> cake_size;
    }
    else if (cake_shape == "sheet") {
        std::cout << "What size cake do you want(quater, half, full)" << std::endl;
        std::getline(std::cin, sheet_size);
    }
    priceReturn();
    std::cout << "Would you like any complimentary writing on the top of the cake?" << std::endl;
    getline(std::cin, writing);
}

void cake::printReceipt() {
    cout << "Ok, let's see we have 1 " << cake_shape << endl;
    cout << "And it is " << cake_size << " in diameter" << endl;
    cout << "And the writing on it should say '" << writing << "'" << endl;
    cout << endl << "Right that will be $" << cost << " today. Will that be credit card or cash?" << endl;
}

void cake::priceReturn() {
    if (cake_shape == "round") {
        if (cake_size == 6) {
            cost = 39;
        }
        else if (cake_size == 8) {
            cost = 46;
        }
        else if (cake_size == 9) {
            cost = 56;
        }
        else if (cake_size == 10) {
            cost = 64;
        }
        else if (cake_size == 12) {
            cost = 81;
        }
    }
    else if (cake_shape == "sheet") {
        if (sheet_size == "quater") {
            cost = 51;
        }
        else if (sheet_size == "half") {
            cost = 84;
        }
        else if (sheet_size == "full")
            cost = 120;
    }
}