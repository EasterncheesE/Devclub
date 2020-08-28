#include "Roles.h"

std::ostream& operator<<(std::ostream& out, PhysStateRole role) {
    switch(role) {
        case unit :
            out << "unit";
            return out;
        case berserker :
            out << "berserker";
            return out;
        case demon :
            out << "demon";
            return out;
        case rogue :
            out << "rogue";
            return out;
        case soldier :
            out << "soldier";
            return out;
        case vampire :
            out << "vampire";
            return out;
        case werewolf :
            out << "werewolf";
            return out;
        case wolf :
            out << "wolf";
            return out;
    }


}

std::ostream& operator<<(std::ostream& out, MagicStateRole role) {
    switch(role) {
        case spellcaster :
            out << "spellcaster";
            return out;
        case healer :
            out << "healer";
            return out;
        case necromancer :
            out << "necromancer";
            return out;
        case priest :
            out << "priest";
            return out;
        case warlock :
            out << "warlock";
            return out;
    }
    return out;
}