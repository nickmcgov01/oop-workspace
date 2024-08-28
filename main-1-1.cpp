#include "player.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream>

int main(void) {
    // Step 1: Create instances of Wizard and Warrior
    Wizard wizard("Gandalf", 100, 10, 20);    // Name: Gandalf, Health: 100, Damage: 10, Mana: 20
    Warrior warrior("Aragorn", 120, 15, "Sword");  // Name: Aragorn, Health: 120, Damage: 15, Weapon: Sword

    // Step 2: Simulate the battle
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        // Wizard's turn to attack
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " has been defeated!" << std::endl;
            break;  // Wizard wins
        }

        // Warrior's turn to attack
        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " has been defeated!" << std::endl;
            break;  // Warrior wins
        }

        // Additional attacks (optional)
        wizard.attack(&warrior, 5);
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " has been defeated!" << std::endl;
            break;  // Wizard wins
        }

        warrior.attack(&wizard, 10);
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " has been defeated!" << std::endl;
            break;  // Warrior wins
        }
    }

    // Determine and output the winner
    if (wizard.getHealth() > 0) {
        std::cout << wizard.getName() << " is the winner!" << std::endl;
    } else {
        std::cout << warrior.getName() << " is the winner!" << std::endl;
    }

    return 0;
}
