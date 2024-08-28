#include "warrior.h"

  Warrior::Warrior(std::string playerName, int playerHealth, int playerDamage, std::string playerWeapon) 
        : Player(playerName, playerHealth, playerDamage), weapon(playerWeapon) {}
    void Warrior::swingWeapon(Player* opponent){
        std::cout << name << " swings their " <<  weapon  << " at " <<  opponent->getName()  << "!\n";
        opponent ->takeDamage(damage);
    }
    std::string Warrior::getWeapon(){
        return weapon;
    }