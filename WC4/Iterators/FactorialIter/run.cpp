#include <iostream>
#include "FactorialIter.h"


int main() {
    FactorialIter fIter(50);
    
    
    std::cout << *fIter << std::endl;
    
    for ( int i = 0 ; !(fIter.end()); fIter++, i++) {
        std::cout << i << " = " << *fIter << std::endl;
    }
    
    return 0;
}