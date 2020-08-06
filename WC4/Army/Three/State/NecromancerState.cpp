#include "NecromancerState.h"

NecromancerState::NecromancerState(Spellcaster* owner, std::string title, int hp, int mp) : DefaultMagicState(owner, title, hp, mp) {}
NecromancerState::~NecromancerState() {}