#include "WashingMachine.h"
#include "iostream"

int main(void){
    WashingMachine samsung;
    std::cout << "Drum size before: " << samsung.get_drumSize() << std::endl;
    samsung.set_drumSize(100);
    std::cout << "Drum size after: " << samsung.get_drumSize() << std::endl;
    samsung.set_drumSize(1000);
    std::cout << "Power rating: " << samsung.get_drumSize() << "\nPower consumption: " << samsung.get_drumSize() << std::endl;

    return 0;
}
