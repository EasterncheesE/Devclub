#include <iostream>
#include "./Unit/Unit.h"

int main() {
    Unit *bob = new Unit("Bob", 600, 100);
    Unit *andy = new Unit("Andy");
    
    
    std::cout << *bob << std::endl << std::endl;
    std::cout << *andy << std::endl;
    
    
    std::cout << *bob << std::endl << std::endl;
    std::cout << *andy << std::endl;
    
    for ( ; andy->getHP() > 0 && bob->getHP() > 0 ; ) {
        bob->attack(*andy);
        // std::cout << std::endl << *bob << std::endl;
        // std::cout << *andy << std::endl << std::endl;
        
        andy->attack(*bob);
        // std::cout << std::endl << *bob << std::endl;
        // std::cout << *andy << std::endl << std::endl;
    }
    
    
    return 0;
}