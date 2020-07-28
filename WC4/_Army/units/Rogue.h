#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : public Unit( {
    public:
        Rogue(const std::string& name);
        ~Rogue();
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue);
void attack(Unit* attacker, Unit* enemy);

void counterAttack(Unit* attacker, Unit* enemy);


#endif // ROGUE_H
