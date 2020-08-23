#include "Passport.h"
#include <iostream>

int main() {
    std::cout << Passport::getCurrentSeries() << " " << Passport::getCurrentNumber() << std::endl;

    Passport::setCurrentNumber(500231);
    
    Passport* p1 = new Passport("Vasya", "Pupkin", 29, 2, 2021);
    std::cout << p1 << std::endl;
    
    // Passport::nextCurrentSeries();
    // std::cout << Passport::getCurrentSeries() << " " << Passport::getCurrentNumber() << std::endl;
    
    // Passport* p2 = new Passport("Vasya", "Pupkin", 11, 3, 1990);
    // std::cout << p2 << std::endl;
    
    // Passport::setCurrentSeries("ZZ");
    
    // std::cout << Passport::getCurrentSeries() << " " << Passport::getCurrentNumber() << std::endl;
    
    // Passport* p3 = new Passport("Vasya", "Pupkin", 11, 3, 1990);
    // std::cout << p3 << std::endl;
    // Passport* p4 = new Passport("Vasya", "Pupkin", 11, 3, 1990);
    // std::cout << p4 << std::endl;
    
    
    
    
    return 0;
}