#include "wizard.h"

Wizard::Wizard(std::string playerName, int playerHealth, int playerDamage, int playerMana) 
    : Player(playerName, playerHealth, playerDamage), mana(playerMana) {}

    void Wizard::castSpell(Player* opponent){
        std::cout << name << " casts a spell on " << opponent->getName() << " for "  << mana << " damage.\n";
        opponent->takeDamage(mana);
    }