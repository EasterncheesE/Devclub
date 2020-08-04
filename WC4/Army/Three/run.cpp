#include <iostream>
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"
#include "./Unit/Soldier.h"
#include "./Unit/Necromancer.h"
#include "./Unit/Berserker.h"
#include "./Unit/Werewolf.h"
#include "./Spell/Fireball.h"
#include "./Spell/Heal.h"


int main() {
    srand (time(NULL));
    Rogue* patrick = new Rogue("Patrick", 5000, 50);
    Vampire* frank = new Vampire("Frank", 600, 250);
    Soldier* vasya = new Soldier("Vasya", 1000, 100);
    Spellcaster* petya = new Spellcaster("Petya", 500, 25, 500);
    Necromancer* fedor = new Necromancer("Fedor", 500, 25, 500);
    Vampire* may = new Vampire("May", 750, 200);
    Berserker* ovald = new Berserker("Ovald", 1000, 150);
    Werewolf* ody = new Werewolf("Ody", 750, 125);
    
    
    // std::cout << fedor << std::endl;
    // std::cout << may << std::endl;
    
    std::cout << fedor << std::endl;
    fedor->addSpell(new Fireball(fedor,100,150));
    fedor->addSpell(new Heal(fedor,100,150));
    fedor->addSpell(new Fireball(fedor,100,150));
    fedor->getSpellList();
    // for ( ; frank->getHP() > 0; ) {
    //     petya->attack(frank);
    // }
    // for ( int i = 1; vasya->getHP() > 0 && ody->getHP() > 0; i++ ) {
    //     std::cout << std::endl << "CYCLE NUMBER " << i << std::endl;
    //     vasya->attack(ody);
    //     std::cout << std::endl;
    //     ody->attack(vasya);
    // }
    
    // std::cout << std::endl << ody << std::endl;
    // std::cout << std::endl << vasya << std::endl;
    // std::cout << std::endl << ovald << std::endl;
    // std::cout << std::endl << may << std::endl;
    
    
    return 0;
}