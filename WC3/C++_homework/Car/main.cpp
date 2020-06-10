#include "Car.h"
#include "Point.h"

int main() {
    Car car = Car(100,0.6,Point(1.1,1.2),"Volvo");
    Point destination = Point(5.3,8.1);
    
    std::cout << car << std::endl << std::endl;
    std::cout << destination << std::endl << std::endl;
    
    try {
        car.refill(150);
        std::cout << car << std::endl << std::endl;
    } catch ( ToMuchFuel obj ) {
        std::cout << "Too much fuel to fill" << std::endl;
    }
    
    try { 
        car.drive(destination);
        std::cout << car << std::endl << std::endl;
    } catch ( OutOfFuel obj ) {
        std::cout << "Too far, not enough fuel" << std::endl;
    }
    
    return 0;
}