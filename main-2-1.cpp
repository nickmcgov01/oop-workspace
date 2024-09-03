#include "Fridge.h"
#include "iostream"

int main(void){
    Fridge joe;
    std::cout << " Volume before: " << joe.getVolume() << std::endl;
    joe.setVolume(100);
    std::cout << " Volume after: " << joe.getVolume() << std::endl;
    joe.set_PowerRating(1000);
    std::cout << "Power rating: " << joe.get_PowerRating() << "Power consumption: " << joe.getPowerConsumption() << std::endl;




    return 0;
}