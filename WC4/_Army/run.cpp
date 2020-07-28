#include <iostream>
#include "units/Unit.h"

int main() {
    BaseState* s1 = new BaseState(100, 25, "Bob");
    BaseState* s2 = new BaseState(100, 25, "Kolyan");
    Unit* u1 = new Unit(s1);
    Unit* u2 = new Unit(s2);
    
    std::cout << *u1 << std::endl;
    std::cout << *u2 << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    
    u1->attack(u2);
    std::cout << *u1 << std::endl;
    std::cout << *u2 << std::endl;
}