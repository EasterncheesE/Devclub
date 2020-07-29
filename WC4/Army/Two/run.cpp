#include <iostream>
#include "./Unit/Unit.h"
#include "./Unit/Soldier.h"
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"

int main() {
    Unit* bob = new Unit(std::string("Bob"), 15000, 100);
    Soldier* andy = new Soldier(std::string("Andy"), 500, 100);
    Rogue* jenny = new Rogue(std::string("Jenny"), 400, 150);
    Vampire* frank = new Vampire(std::string("Frank"), 5000, 200);
    
    
    std::cout << *bob << std::endl << std::endl;
    std::cout << *frank << std::endl;
    
    // frank->attack(bob);
    
    for ( int i = 1; bob->getHP() > 0 && frank->getHP() > 0 ; i++) {
        std::cout << "ITERATION NO " << i << std::endl;
        bob->attack(frank);
        // std::cout << *andy << std::endl << std::endl;
        frank->attack(bob);
        std::cout << std::endl;

    }
    std::cout << std::endl << *bob << std::endl;
    std::cout << *frank << std::endl << std::endl;
    return 0;
}