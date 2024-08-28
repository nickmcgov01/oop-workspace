#pragma once
#include <iostream>
#include <string.h>

class Player{
    protected:
    std::string name;
    int health;
    int damage;
    public:
    Player(std:: string playerName, int playerHealth, int playerDamage){
        name = playerName;
        health = playerHealth;
        damage = playerDamage;
    }

    void attack(Player* opponent, int damage){
        opponent -= damage;
    }

    void takeDamage(int damage){
        health -= damage;
    }

    int getHealth(int addedHealth){
        health += addedHealth;
        return health;
    }


    
};

class Wizard : public Player{
    private:
    int mana;
    public:
    void castSpell(Player* opponent){
        opponent -= mana;
    }
};

class Warrior : public Player{
    private:
    std::string weapon;
    public:
    void swingWeapon(Player* opponent){
        opponent -= damage;
    }
};
