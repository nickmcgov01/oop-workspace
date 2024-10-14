#inclde <iostream>
#include "GardenHose.h"

int main() {
    GardenHose myHose(1,100);
    int water_per_day = 5;

    std::cout << "Watering needs before: " << water_per_day << std::endl;
    myHose.reduce_water(water_per_day);
    std::cout << "Watering needs after using garden hose: " << water_per_day << std::endl;
    return 0;
}