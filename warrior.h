#pragma once
#include "player.h"  // Include the base class header

class Warrior : public Player {
private:
    std::string weapon;

public:
    // Constructor declaration
    Warrior(std::string playerName, int playerHealth, int playerDamage, std::string playerWeapon);
    
    void swingWeapon(Player* opponent);
    std::string getWeapon();
};
