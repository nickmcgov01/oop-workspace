#pragma once
#include <iostream>
#include <string.h>

class Player{
    protected:
    std::string name;
    int health;
    int damage;
    public:
    Player(std:: string playerName, int playerHealth, int playerDamage);

    void attack(Player* opponent, int damage);
    
    void takeDamage(int damage);

    std::string getName();

    int getHealth();

    
    int getDamage();

};


