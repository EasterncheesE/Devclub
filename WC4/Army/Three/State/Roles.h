#ifndef ROLES_H
#define ROLES_H

#include <iostream>

enum PhysStateRole {
    unit,
    berserker,
    demon,
    rogue,
    soldier,
    vampire,
    werewolf,
    wolf
};

enum MagicStateRole {
    spellcaster,
    healer,
    necromancer,
    priest,
    warlock
};

std::ostream& operator<<(std::ostream& out, PhysStateRole role);
std::ostream& operator<<(std::ostream& out, MagicStateRole role);

#endif // ROLES_H