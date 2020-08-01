#include <iostream>
#include "./Unit/Unit.h"
#include "./Unit/Vampire.h"


int main() {
    Unit* bob = new Unit(std::string("Bob"), 500, 200);
    Unit* patrick = new Unit(std::string("Patrick"), 500, 200);
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