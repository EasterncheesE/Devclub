#include <iostream>
#include "AriProgIter.h"

int main() {
    AriProgIter iter(1, 2, 10);
    
    for ( ; !(iter.end()); iter++ ) {
        std::cout << iter << std::endl;
    }
    
    
    return 0;
}