#include "NecromancerMagicState.h"

NecromancerMagicState::NecromancerMagicState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {
    this->magicRole = MagicStateRole::necromancer;
}
NecromancerMagicState::~NecromancerMagicState() {}