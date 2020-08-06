#include <iostream>
#include "./Unit/Unit.h"
#include "./Unit/Soldier.h"
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"
#include "./Unit/Werewolf.h"
#include "./Unit/Spellcaster.h"
#include "./Unit/Necromancer.h"

int main() {
    
    // Unit* bob = new Unit(std::string("Bob"), 15000, 100);
    Soldier* andy = new Soldier(std::string("Andy"), 15000, 100);
    Rogue* jenny = new Rogue(std::string("Jenny"), 400, 150);
    // Vampire* frank = new Vampire(std::string("Frank"), 5000, 200);
    // Werewolf* vasya = new Werewolf(std::string("Vasya"), 5000, 100);
    // Spellcaster* vova = new Spellcaster(std::string("Vova"), 5000, 50, 1000);
    Necromancer* pavel = new Necromancer(std::string("Pavel"), 5000, 50, 1000);
    
    std::cout << *andy << std::endl << std::endl;
    std::cout << std::endl << *pavel << std::endl << std::endl;
    std::cout << *jenny << std::endl << std::endl;
    std::cout << "Necro attack" << std::endl;

    pavel->attack(jenny);
    
    std::cout << std::endl << *pavel << std::endl << std::endl;
    std::cout << std::endl << *jenny << std::endl << std::endl;
    // std::cout << *andy << std::endl << std::endl;
    
    for ( int i = 1; jenny->getHP() > 0 && andy->getHP() > 0 ; i++) {
        std::cout << "ITERATION NO " << i << std::endl;
        jenny->attack(andy);
        std::cout << *jenny << std::endl << std::endl;
        andy->attack(jenny);
        std::cout << std::endl;
    }
    std::cout << std::endl << *jenny << std::endl << std::endl;
    std::cout << *andy << std::endl << std::endl;
    std::cout << *pavel << std::endl << std::endl;
    
    return 0;
}