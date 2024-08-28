#include <iostream>
#include <string.h>
class Player{
    private:
    std::string name;
    int health;
    int damage;
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
};
class Wizard : public Player{
    private:
    int mana;
    void castSpell(Player* opponent){
        opponent -= mana;
    }
};