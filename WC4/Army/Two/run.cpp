#include <iostream>
#include "./Unit/Unit.h"
#include "./Unit/Soldier.h"
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"

int main() {
    Unit* bob = new Unit(std::string("Bob"), 1000, 100);
    Soldier* andy = new Soldier(std::string("Andy"), 500, 100);
    Rogue* jenny = new Rogue(std::string("Jenny"), 400, 150);
    Vampire* frank = new Vampire(std::string("Frank"), 750, 200);
    
    
    std::cout << *bob << std::endl << std::endl;
    std::cout << *frank << std::endl;
    
    frank->attack(bob);
    
    std::cout << *bob << std::endl << std::endl;
    // for ( ; bob->getHP() > 0 && frank->getHP() > 0 ; ) {
    //     // bob->attack(frank);
    //     std::cout << std::endl << *bob << std::endl;
    //     std::cout << "If bob is vampire: " << bob->getIsVampire() << std::endl;
    //     // std::cout << *andy << std::endl << std::endl;
        
    //     frank->attack(bob);
    //     // std::cout << std::endl << *bob << std::endl;
    //     // std::cout << *andy << std::endl << std::endl;
    //     std::cout << std::endl;
    // }
    
    
    return 0;
}