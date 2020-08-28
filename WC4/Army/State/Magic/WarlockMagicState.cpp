#include "WarlockMagicState.h"

WarlockMagicState::WarlockMagicState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {
    this->magicRole = warlock;
}
WarlockMagicState::~WarlockMagicState() {}