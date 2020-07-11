#include "Complex.h"

int main() {
    Complex a = Complex(5,2);
    Complex b = Complex(2,5);

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
    std::cout << a * b << std::endl;

    return 0;
}
