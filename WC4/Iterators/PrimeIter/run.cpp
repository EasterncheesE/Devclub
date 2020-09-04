#include <iostream>
#include "PrimeIter.h"


int main() {
    PrimeIter pIter(10);
    std::cout << pIter << std::endl;
    
    for ( int choice = 0, i = 0; ;  ) {
        std::cout << "1 for next, 2 for prev, 3 for set number, 4 for stop" << std::endl;
        std::cin >> choice;
        
        if ( choice == 1 ) {
            pIter.next();
            std::cout << pIter.getCurrent() << " = " << pIter << std::endl;
        }
        if (choice == 2 ) {
            pIter.prev();
            std::cout << pIter.getCurrent() << " = " << pIter << std::endl;
        }
        if (choice == 3 ) {
            pIter.setCurrent();
        }
        
    }
    
    return 0;
}