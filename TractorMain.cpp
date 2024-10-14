#include <iostream>
#include "Tractor.h"

int main() {
    Tractor myTractor;  // Instantiate the tractor
    int harvest_days = 10;

    std::cout << "Harvest days before: " << harvest_days << std::endl;
    myTractor.reduce_harvest(harvest_days);
    std::cout << "Harvest days after using tractor: " << harvest_days << std::endl;

    std::cout << "Tractor price: $" << Tractor::TRACTOR_PRICE << std::endl;

    return 0;
}
