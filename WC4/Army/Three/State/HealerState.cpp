#include "HealerState.h"

HealerState::HealerState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {}
HealerState::~HealerState() {}