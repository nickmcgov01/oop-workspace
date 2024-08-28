#include "player.h"


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
