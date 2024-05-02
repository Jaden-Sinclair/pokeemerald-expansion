#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen10[] =
{
#endif

#if P_FAMILY_SHARPUGGLE
    [SPECIES_SHARPUGGLE] =
    {
        .baseHP        = 58,
        .baseAttack    = 60,
        .baseDefense   = 63,
        .baseSpeed     = 30,
        .baseSpAttack  = 42,
        .baseSpDefense = 57,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sharpuggle"),
        .cryId = CRY_CHESPIN,
        .natDexNum = NATIONAL_DEX_SHARPUGGLE,
        .categoryName = _("Echidna"),
        .height = 4,
        .weight = 95,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sharpuggle, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sharpuggle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sharpuggle, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sharpuggle),
        ICON(Sharpuggle, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Sharpuggle),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_POKIDNA}),
    },

    [SPECIES_POKIDNA] =
    {
        .baseHP        = 75,
        .baseAttack    = 78,
        .baseDefense   = 82,
        .baseSpeed     = 45,
        .baseSpAttack  = 57,
        .baseSpDefense = 73,
        .types = { TYPE_GRASS, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Pokidna"),
        .cryId = CRY_QUILLADIN,
        .natDexNum = NATIONAL_DEX_POKIDNA,
        .categoryName = _("Echidna"),
        .height = 70,
        .weight = 360,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Quilladin, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Quilladin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Quilladin, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Quilladin),
        ICON(Quilladin, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Pokidna),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARQUILLERY}),
    },

    [SPECIES_ARQUILLERY] =
    {
        .baseHP        = 97,
        .baseAttack    = 98,
        .baseDefense   = 105,
        .baseSpeed     = 62,
        .baseSpAttack  = 75,
        .baseSpDefense = 93,
        .types = { TYPE_GRASS, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Arquillery"),
        .cryId = CRY_CHESNAUGHT,
        .natDexNum = NATIONAL_DEX_ARQUILLERY,
        .categoryName = _("Echidna"),
        .height = 150,
        .weight = 850,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chesnaught, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Chesnaught,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chesnaught, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Chesnaught),
        ICON(Chesnaught, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Arquillery),
    },
#endif //P_FAMILY_SHARPUGGLE

#if P_FAMILY_WISPAN
    [SPECIES_WISPAN] =
    {
        .baseHP        = 47,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 54,
        .baseSpAttack  = 66,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Wispan"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_WISPAN,
        .categoryName = _("Red Panda"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fennekin, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Fennekin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Fennekin, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Fennekin),
        ICON(Fennekin, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Wispan),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_PANARDOR}),
    },

    [SPECIES_PANARDOR] =
    {
        .baseHP        = 62,
        .baseAttack    = 66,
        .baseDefense   = 58,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 67,
        .types = { TYPE_FIRE, TYPE_FAIRY },
        .catchRate = 45,
        .expYield = 144,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Panardor"),
        .cryId = CRY_BRAIXEN,
        .natDexNum = NATIONAL_DEX_PANARDOR,
        .categoryName = _("Red Panda"),
        .height = 80,
        .weight = 120,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Braixen, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Braixen,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Braixen, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Braixen),
        ICON(Braixen, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Panardor),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PASSIANDA}),
    },

    [SPECIES_PASSIANDA] =
    {
        .baseHP        = 82,
        .baseAttack    = 86,
        .baseDefense   = 68,
        .baseSpeed     = 93,
        .baseSpAttack  = 116,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FAIRY },
        .catchRate = 45,
        .expYield = 265,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Passianda"),
        .cryId = CRY_DELPHOX,
        .natDexNum = NATIONAL_DEX_PASSIANDA,
        .categoryName = _("Red Panda"),
        .height = 140,
        .weight = 360,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Delphox, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Delphox,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Delphox, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Delphox),
        ICON(Delphox, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Passianda),
    },
#endif //P_FAMILY_WISPAN

#if P_FAMILY_PACHYDENT
    [SPECIES_PACHYDENT] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 56,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 48,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Pachydent"),
        .cryId = CRY_TOTODILE,
        .natDexNum = NATIONAL_DEX_PACHYDENT,
        .categoryName = _("Hippo"),
        .height = 5,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Totodile, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Totodile,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Totodile, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Totodile),
        ICON(Totodile, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Pachydent),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_HIPPUGIL}),
    },

    [SPECIES_HIPPUGIL] =
    {
        .baseHP        = 72,
        .baseAttack    = 82,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 62,
        .baseSpDefense = 64,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hippugil"),
        .cryId = CRY_CROCONAW,
        .natDexNum = NATIONAL_DEX_HIPPUGIL,
        .categoryName = _("Hippo"),
        .height = 100,
        .weight = 310,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Croconaw, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Croconaw,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Croconaw, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Croconaw),
        ICON(Croconaw, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Hippugil),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_TUSCOURGE}),
    },

    [SPECIES_TUSCOURGE] =
    {
        .baseHP        = 91,
        .baseAttack    = 101,
        .baseDefense   = 94,
        .baseSpeed     = 79,
        .baseSpAttack  = 82,
        .baseSpDefense = 83,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tuscourge"),
        .cryId = CRY_FERALIGATR,
        .natDexNum = NATIONAL_DEX_TUSCOURGE,
        .categoryName = _("Hippo"),
        .height = 160,
        .weight = 830,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Feraligatr, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Feraligatr,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Feraligatr, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Feraligatr),
        ICON(Feraligatr, 4),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Tuscourge),
    },
#endif //P_FAMILY_PACHYDENT

#ifdef __INTELLISENSE__
};
#endif