#include <iostream>
#include "Countable.h"


int main() {
    
    std::cout << "Quantity: " << Countable::getCounter() << std::endl;
    
    Countable* one = new Countable();
    
    std::cout << "Quantity: " << Countable::getCounter() << std::endl;
    
    
    return 0;
}