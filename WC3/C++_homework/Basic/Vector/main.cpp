#include <iostream>
#include "Vector.h"

int main() {
    Vector a = Vector(5.5,5.8);
    Vector b = Vector(2.3,7.0);

    if ( a == b ) {
        std::cout << a << " IS EQUAL TO " << b << std::endl;
    } else {
        std::cout << a << " IS NOT EQUAL TO " << b << std::endl;
    }
    a += b;
    std::cout << a << std::endl;
    a -= b;
    std::cout << a << std::endl;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a.len() << std::endl;
    
    return 0;
}
