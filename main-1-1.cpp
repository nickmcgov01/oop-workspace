#include "Player.h"  
#include <iostream>

int main() {
    // Step 1: Create instances of Wizard and Warrior
    Wizard wizard("Gandalf", 100, 10, 20);    // Name: Gandalf, Health: 100, Damage: 10, Mana: 20
    Warrior warrior("Aragorn", 120, 15, "Sword");  // Name: Aragorn, Health: 120, Damage: 15, Weapon: Sword

    // Step 2: Simulate the battle
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
   
        wizard.castSpell(&warrior);  
       
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " has been defeated!" << std::endl;
            break;  

        warrior.swingWeapon(&wizard);  

      
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " has been defeated!" << std::endl;
            break;  
        }
    }

  
    if (wizard.getHealth() > 0) {
        std::cout << wizard.getName() << " is the winner!" << std::endl;
    } else {
        std::cout << warrior.getName() << " is the winner!" << std::endl;
    }

    return 0;
}
