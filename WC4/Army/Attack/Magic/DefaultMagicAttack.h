#ifndef DEFAULT_MAGIC_ATTACK_H
#define DEFAULT_MAGIC_ATTACK_H

#include "../../Unit/Spellcaster.h"

class Spellcaster;
class Unit;

class DefaultMagicAttack {
protected:
        Spellcaster* owner;
        int magicDMG;
public:
        DefaultMagicAttack(Spellcaster* owner, int dmg);
        virtual ~DefaultMagicAttack();
        
        int getMagicDMG();
        void regularAttack(Unit* target);
        void magicAttack(Unit* target);
};

#endif // DEFAULT_MAGIC_ATTACK_H