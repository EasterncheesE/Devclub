#include <iostream>
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"
#include "./Unit/Soldier.h"
#include "./Unit/Necromancer.h"


int main() {
    srand (time(NULL));
    Rogue* patrick = new Rogue("Patrick", 5000, 50);
    Vampire* frank = new Vampire("Frank", 600, 250);
    Soldier* vasya = new Soldier("Vasya", 1000, 100);
    Spellcaster* petya = new Spellcaster("Petya", 500, 25, 500);
    Necromancer* fedor = new Necromancer("Fedor", 500, 25, 500);
    Vampire* may = new Vampire("May", 750, 200);
    
    
    std::cout << fedor << std::endl;
    std::cout << may << std::endl;

    
    fedor->attack(patrick);
    
    for ( int i = 1; may->getHP() > 0 && patrick->getHP() > 0; i++ ) {
        std::cout << std::endl << "CYCLE NUMBER " << i << std::endl;
        may->attack(patrick);
        std::cout << std::endl;
        patrick->attack(may);
    }
    
    std::cout << std::endl << fedor << std::endl;
    std::cout << std::endl << patrick << std::endl;
    std::cout << std::endl << may << std::endl;
    
    
    return 0;
}