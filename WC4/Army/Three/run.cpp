#include <iostream>
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"


int main() {
    Unit* bob = new Unit(std::string("Bob"), 500, 100);
    Rogue* patrick = new Rogue(std::string("Patrick"), 500, 250);
    Vampire* frank = new Vampire(std::string("Frank"), 600, 250);
    
    
    std::cout << patrick << std::endl;
    std::cout << bob << std::endl;
    std::cout << frank << std::endl;
    
    frank->attack(patrick);
    
    for ( int i = 1; bob->getHP() > 0 && patrick->getHP() > 0; i++ ) {
        std::cout << std::endl << "CYCLE NUMBER " << i << std::endl;
        bob->attack(patrick);
        patrick->attack(bob);
    }
    
    std::cout << std::endl << frank << std::endl;
    
    
    return 0;
}