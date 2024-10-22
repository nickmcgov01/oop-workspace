#include "GameEntity.h"
#include "Utils.h"
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed for randomness

    // Generating random positions
    auto pos1 = Utils::generateRandomPos(100, 100);
    auto pos2 = Utils::generateRandomPos(100, 100);

    // Creating two GameEntity objects
    GameEntity entity1(std::get<0>(pos1), std::get<1>(pos1), GameEntity::ShipType);
    GameEntity entity2(std::get<0>(pos2), std::get<1>(pos2), GameEntity::MineType);

    // Output the positions and types
    std::cout << "Entity 1 Position: (" << std::get<0>(entity1.getPos()) << ", " 
              << std::get<1>(entity1.getPos()) << "), Type: Ship\n";

    std::cout << "Entity 2 Position: (" << std::get<0>(entity2.getPos()) << ", " 
              << std::get<1>(entity2.getPos()) << "), Type: Mine\n";

    // Calculating and outputting the distance between the two entities
    double distance = Utils::calculateDistance(entity1.getPos(), entity2.getPos());
    std::cout << "Distance between Entity 1 and Entity 2: " << distance << std::endl;

    return 0;
}
