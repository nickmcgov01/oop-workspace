#include "Microwave.h"
#include "iostream"

int main(void){
    Microwave samsung;
    std::cout << "Capacity before: " << samsung.get_capacity() << std::endl;
    samsung.set_capacity(100);
    std::cout << "Capacity after: " << samsung.get_capacity() << std::endl;
    samsung.set_capacity(1000);
    std::cout << "Power rating: " << samsung.get_capacity() << "\nPower consumption: " << samsung.get_capacity() << std::endl;

    return 0;
}
