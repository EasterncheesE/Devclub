#include "HealerMagicState.h"

HealerMagicState::HealerMagicState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {
    this->magicRole = healer;
}
HealerMagicState::~HealerMagicState() {}