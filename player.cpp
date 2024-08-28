#include "player.h"  // Include the header file with the correct name

// Constructor definition
Player::Player(std::string playerName, int playerHealth, int playerDamage) {
    name = playerName;
    health = playerHealth;
    damage = playerDamage;
}

// Method definitions
void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: "<< health << "\n";
}

// Getter definitions
std::string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getDamage() {
    return damage;
}


