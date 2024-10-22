#include "GameEntity.h"
#include <iostream>

int main() {
    // Creating GameEntity objects with different types
    GameEntity entity1(10, 20, GameEntity::ShipType);
    GameEntity entity2(30, 40, GameEntity::MineType);

    // Output entity positions and types
    std::cout << "Entity 1 Position: (" << std::get<0>(entity1.getPos()) << ", " 
              << std::get<1>(entity1.getPos()) << "), Type: Ship\n";

    std::cout << "Entity 2 Position: (" << std::get<0>(entity2.getPos()) << ", " 
              << std::get<1>(entity2.getPos()) << "), Type: Mine\n";

    return 0;
}
