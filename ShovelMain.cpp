#include <iostream>
#include "Shovel.h"

int main() {
    Shovel myShovel;  // Instantiate the shovel
    int harvest_days = 10;

    std::cout << "Harvest days before: " << harvest_days << std::endl;
    myShovel.reduce_harvest(harvest_days);
    std::cout << "Harvest days after using shovel: " << harvest_days << std::endl;

    std::cout << "Shovel price: $" << Shovel::SHOVEL_PRICE << std::endl;

    return 0;
}
