#include "player.h"

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