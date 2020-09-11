#include <iostream>
#include "ArrayIter.h"

#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    double array1[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
    
    ArrayIter<int> aIter(array, 0, SIZE);
    ArrayIter<double> aIter1(array1, 0, SIZE);

    for ( ; !(aIter1.end()); aIter1++ ) {
        std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl;
    }
    std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl << std::endl;
    
    aIter1.next();
    std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl << std::endl;
    
    for ( ; !(aIter1.begin()); aIter1--) {

        std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl;
    }
    std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl << std::endl;
    
    aIter1.prev();
    std::cout << aIter1.getCurrent() << " = " << *aIter1 << std::endl << std::endl;
    
    aIter1.setCurrent(15);
    
    return 0;
}