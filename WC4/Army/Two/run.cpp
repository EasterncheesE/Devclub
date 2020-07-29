#include <iostream>
#include "./Unit/Unit.h"
#include "./Unit/Soldier.h"
#include "./Unit/Rogue.h"

int main() {
    Unit* bob = new Unit(std::string("Bob"), 600, 100);
    Soldier* andy = new Soldier(std::string("Andy"), 500, 100);
    Rogue* jenny = new Rogue(std::string("Jenny"), 400, 150);
    
    
    std::cout << *bob << std::endl << std::endl;
    std::cout << *andy << std::endl;
    
    
    
    for ( ; andy->getHP() > 0 && bob->getHP() > 0 ; ) {
        bob->attack(jenny);
        // std::cout << std::endl << *bob << std::endl;
        // std::cout << *andy << std::endl << std::endl;
        
        jenny->attack(bob);
        // std::cout << std::endl << *bob << std::endl;
        // std::cout << *andy << std::endl << std::endl;
    }
    
    
    return 0;
}