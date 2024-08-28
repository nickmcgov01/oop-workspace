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
        std::cout << name << " attacks " << opponent->getName() << " for " << damage << " damage!" << std::endl;
        opponent->takeDamage(damage);
        
    }
    
    void takeDamage(int damage){
        health -= damage;
        std::cout << name << " took " << damage << " damage, remaining health is " << health << std::endl;
    }

    std::string getName(){
        return name;
    }

    int getHealth(){
        return health;
    }

    int getDamage(){
        return damage;
    }

};

class Wizard : public Player{
    private:
    int mana;
    public:
   Wizard(std::string playerName, int playerHealth, int playerDamage, int playerMana) 
    : Player(playerName, playerHealth, playerDamage), mana(playerMana) {}

    void castSpell(Player* opponent){
        std::cout << name << " used spell! " << " Opponent took "  << mana << " Damage " << std::endl;
        opponent->takeDamage(mana);
    }
};

class Warrior : public Player{
    private:
    std::string weapon;
    public:
     Warrior(std::string playerName, int playerHealth, int playerDamage, std::string playerWeapon) 
        : Player(playerName, playerHealth, playerDamage), weapon(playerWeapon) {}
    void swingWeapon(Player* opponent){
        std::cout << name << " swings their " << weapon << " Opponent took " << damage << " damage " << std::endl;
        opponent ->takeDamage(damage);
    }
    std::string getWeapon() const {
        return weapon;
    }
};
