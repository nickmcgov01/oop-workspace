#include "Ship.h"
#include "Mine.h"
#include <iostream>

int main() {
    Ship ship(1,2);
    Mine mine(3,4);
    std::cout << "Ship before move" << std::get<0>(ship.getPos());
    ship.move(1,1);
    std::cout << "Ship after move" << std::get<0>(ship.getPos());



    return 0;
}