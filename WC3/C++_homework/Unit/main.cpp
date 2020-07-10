#include "Unit.h"

int main() {
    Unit Dan = Unit("Dan", 1, 55);
    Unit Bobby = Unit("Bobby", 50, 5);

    std::cout << Dan << std::endl << std::endl;
    std::cout << Bobby << std::endl << std::endl;

    Dan.attack(Bobby);
    std::cout << std::endl;
    
    Dan.attack(Bobby);
    std::cout << std::endl;
    
    std::cout << Dan << std::endl << std::endl;
    std::cout << Bobby << std::endl << std::endl;

    // std::cout << "Trying to heal Bobby" << std::endl;
    // Bobby.addHitPoints(-150);

    // std::cout << "Bobby is attacking Dan" << std::endl;
    // Bobby.attack(Dan);
    
    // std::cout << std::endl;
    // Dan.attack(Bobby);

    // std::cout << Dan << std::endl << std::endl;
    // std::cout << Bobby << std::endl << std::endl;
    return 0;
}
