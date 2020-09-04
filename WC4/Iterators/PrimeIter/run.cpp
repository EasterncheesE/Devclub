#include <iostream>
#include "PrimeIter.h"


void chooseAction(PrimeIter pIter) {
        int choice = 0;
        
        std::cout << "1 for next, 2 for prev, 3 for set number, 4 for list" << std::endl;
        std::cin >> choice;
        
        if ( choice == 1 ) {
            pIter.next();
            std::cout << pIter.getCurrent() << " = " << *pIter << std::endl;
            chooseAction(pIter);
        } else if ( choice == 2 ) {
            pIter.prev();
            std::cout << pIter.getCurrent() << " = " << *pIter << std::endl;
            chooseAction(pIter);
        } else if ( choice == 3 ) {
            pIter.setCurrent();
            std::cout << pIter.getCurrent() << " = " << *pIter << std::endl;
            chooseAction(pIter);
        } else if ( choice == 4 ) {
            std::cout << "ARRAY SIZE = " << pIter.primes.size() << std::endl;
            for ( int i = 0; i <= pIter.counter; i++ ) {
                std::cout << "SHOW " << i << " = " << pIter.primes[i] << std::endl;
            }
            std::cout << std::endl;
            chooseAction(pIter);
        }
        chooseAction(pIter);
}


int main() {
    PrimeIter pIter(100);

    for ( int i = 0; i <= pIter.counter; i++ ) {
        
        std::cout << i << " = " << pIter.primes[i] << std::endl;
    }
    std::cout << std::endl;
    
    chooseAction(pIter);
    
    return 0;
}