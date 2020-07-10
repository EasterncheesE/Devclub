#include "Point.h"

int main() {
    Point a = Point(5, 10);
    Point b = Point(6, 8);
    
    std::cout << "Distance between A and B is " << a.distance(b) << std::endl;
    if ( a == b ) {
        std::cout << a << " IS EQUAL TO " << b << std::endl;
    } else {
        std::cout << a << " IS NOT EQUAL TO " << b << std::endl;
    }
    return 0;
}