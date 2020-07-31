// #include "Wizard.h"

//  Wizard::Wizard(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {}
//     Wizard::~Wizard() {}
    
//         int Wizard::getMP() {
//             return this->_magicState->getMP();
//         }
//         int Wizard::getManaRegen() {
//             return this->_magicState->getManaRegen();
//         }
//         void Wizard::addMP(int MP) {
//             this->_magicState->addMP(MP);
//         }
//         void Wizard::spendMP(int MP) {
//             this->_magicState->spendMP(MP);
//         }
    
//     void Wizard::attack(Unit* target) {
//         this->_attack->attack(target);
//     }
//     void Wizard::counterAttack(Unit* target) {
//         this->_attack->counterAttack(target);
//     }
    
//     void Wizard::castSpell(Unit* target) {
//         std::cout << this->getTitle() <<" is casting spell" << std::endl;
//     }
    
//     void Wizard::chooseAction(Unit* target) {
//         this->_attack->chooseAction(target);
//     }