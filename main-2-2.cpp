#include "TV.h"
#include "iostream"

int main(void){
    TV samsung;
    std::cout << "Screen size before: " << samsung.getScreenSize() << std::endl;
    samsung.setScreenSize(100);
    std::cout << "Screen size after: " << samsung.getScreenSize() << std::endl;
    samsung.set_powerRating(1000);
    std::cout << "Power rating: " << samsung.get_powerRating() << "\nPower consumption: " << samsung.getPowerConsumption() << std::endl;

    return 0;
}