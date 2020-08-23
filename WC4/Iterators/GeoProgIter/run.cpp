#include <iostream>
#include "GeoProgIter.h"

int main() {
    GeoProgIter iter(1, 5, 10);
    
    for ( ; !(iter.end()); iter++ ) {
        std::cout << iter << std::endl;
    }
    
    return 0;
}