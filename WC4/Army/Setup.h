#ifndef SETUP_H
#define SETUP_H

enum class SetupHP {
    SOLDIER = 1000,
    ROGUE = 800,
    VAMPIRE = 1000,
    WEREWOLF = 1000,
    NECROMANCER = 800,
    HEALER = 700,
    WIZARD = 800,
    PRIEST = 800
};

enum class SetupDMG {
    SOLDIER = 100,
    ROGUE = 150,
    VAMPIRE = 125,
    WEREWOLF = 125,
    NECROMANCER = 50,
    HEALER = 50,
    WIZARD = 50,
    PRIEST = 50
};

enum class SetupMP {
    NECROMANCER = 1000,
    WIZARD = 1000,
    PRIEST = 500
};

#endif // SETUP_H