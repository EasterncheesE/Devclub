#include "MagicAttack.h"

        MagicAttack::MagicAttack(Unit* owner, dmg) : BaseAttack(owner, dmg) {}
        MagicAttack::~MagicAttack() {}
        
        
        void MagicAttack::attack(Unit* target) {
            int choice;
            
            std::cout << "Choose 1 for attack, choose 2 for cast spell";
            std::cin << choice;
            
            if ( choice == 1 ) {
                this->owner->_attack->BaseAttack::attack(target);
            }
        }
        
        
        void MagicAttack::castSpell(Unit* target) {}
        void MagicAttack::counterattack(Unit* target) {}