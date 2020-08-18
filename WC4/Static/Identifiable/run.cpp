#include <iostream>

#include "Identifiable.h"

int main() {
    
    std::cout << "Counter: " << Identifiable::getCounter() << " .idCounter: " << Identifiable::getIdCounter() << std::endl;
    
    Identifiable* one = new Identifiable();
    
    std::cout << "Identifiable 1 id: " << one->getId() << std::endl;
    std::cout << "Counter: " << Identifiable::getCounter() << ". idCounter: " << Identifiable::getIdCounter() << std::endl;
    
    
    
    return 0;
}