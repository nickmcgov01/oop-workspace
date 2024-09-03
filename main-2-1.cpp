#include "Fridge.h"
#include "iostream"

int main(void){
    Fridge joe;
    std::cout << "Volume before: " << joe.getVolume() << std::endl;
    joe.setVolume(100);
    std::cout << "Volume after: " << joe.getVolume() << std::endl;
    joe.set_powerRating(1000);
    std::cout << "Power rating: " << joe.get_powerRating() << "\nPower consumption: " << joe.getPowerConsumption() << std::endl;




    return 0;
}