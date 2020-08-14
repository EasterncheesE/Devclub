#include "PriestMagicState.h"

PriestMagicState::PriestMagicState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {
    this->magicRole = MagicStateRole::priest;
}
PriestMagicState::~PriestMagicState() {}