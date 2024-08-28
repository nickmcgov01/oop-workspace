#include "player.h"
#pragma once
class Wizard : public Player{
    private:
    int mana;
    public:
   Wizard(std::string playerName, int playerHealth, int playerDamage, int playerMana);
    void castSpell(Player* opponent);
};