#include <iostream>
#include "FibonacciIter.h"


int main() {
    FibonacciIter fIter(0);
    
    
    std::cout << fIter.getCurrent() << " = " << *fIter << std::endl;
    
    for ( ; ; ) {
        int choice;
        
        std::cout << "1 for next, 2 for prev, 3 for set" << std::endl;
        std::cin >> choice;
        
        if ( choice == 1 ) {
            fIter.next();
            std::cout << fIter.getCurrent() << " = " << *fIter << std::endl;
        } else if ( choice == 2) {
            fIter.prev();
            std::cout << fIter.getCurrent() << " = " << *fIter << std::endl;
        } else if ( choice == 3) {
            fIter.setCurrent();
            std::cout << fIter.getCurrent() << " = " << *fIter << std::endl;
        }
    }
    
    
    
    return 0;
}