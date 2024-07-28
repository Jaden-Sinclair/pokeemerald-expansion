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
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_OVERGROW, ABILITY_OVERGROW, ABILITY_IRON_BARBS },
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
        ICON(Sharpuggle, 1),
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
        .expYield = 145,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_OVERGROW, ABILITY_OVERGROW, ABILITY_IRON_BARBS },
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
        FRONT_PIC(Pokidna, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Pokidna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pokidna, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pokidna),
        ICON(Pokidna, 1),
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
        .abilities = { ABILITY_OVERGROW, ABILITY_OVERGROW, ABILITY_IRON_BARBS },
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
        FRONT_PIC(Arquillery, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Arquillery,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arquillery, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Arquillery),
        ICON(Arquillery, 1),
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
        .expYield = 60,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_SERENE_GRACE },
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
        FRONT_PIC(Wispan, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Wispan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wispan, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Wispan),
        ICON(Wispan, 1),
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
        .expYield = 145,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_SERENE_GRACE },
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
        FRONT_PIC(Panardor, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Panardor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Panardor, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Panardor),
        ICON(Panardor, 1),
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
        .abilities = { ABILITY_BLAZE, ABILITY_BLAZE, ABILITY_SERENE_GRACE },
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
        FRONT_PIC(Passianda, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Passianda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Passianda, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Passianda),
        ICON(Passianda, 1),
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
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_TORRENT, ABILITY_STRONG_JAW },
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
        FRONT_PIC(Pachydent, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Pachydent,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pachydent, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pachydent),
        ICON(Pachydent, 3),
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
        .expYield = 145,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_TORRENT, ABILITY_STRONG_JAW },
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
        FRONT_PIC(Hippugil, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Hippugil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Hippugil, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Hippugil),
        ICON(Hippugil, 3),
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
        .abilities = { ABILITY_TORRENT, ABILITY_TORRENT, ABILITY_STRONG_JAW },
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
        FRONT_PIC(Tuscourge, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Tuscourge,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tuscourge, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Tuscourge),
        ICON(Tuscourge, 3),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Tuscourge),
    },
#endif //P_FAMILY_PACHYDENT

#if P_FAMILY_MARMOSCAMP
    [SPECIES_MARMOSCAMP] =
    {
        .baseHP        = 35,
        .baseAttack    = 53,
        .baseDefense   = 46,
        .baseSpeed     = 56,
        .baseSpAttack  = 25,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_PRANKSTER, ABILITY_PICKUP, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Marmoscamp"),
        .cryId = CRY_AIPOM,
        .natDexNum = NATIONAL_DEX_MARMOSCAMP,
        .categoryName = _("Street Rat"),
        .height = 5,
        .weight = 50,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Marmoscamp, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Marmoscamp,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Marmoscamp, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Marmoscamp),
        ICON(Marmoscamp, 2),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Marmoscamp),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_VERMARIN},
                                {EVO_MOVE, MOVE_HYPNOSIS, SPECIES_FOOLEMUR}),
    },

    [SPECIES_VERMARIN] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 77,
        .baseSpeed     = 83,
        .baseSpAttack  = 46,
        .baseSpDefense = 69,
        .types = { TYPE_NORMAL, TYPE_POISON },
        .catchRate = 125,
        .expYield = 150,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_PRANKSTER, ABILITY_PICKPOCKET, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Vermarin"),
        .cryId = CRY_AMBIPOM,
        .natDexNum = NATIONAL_DEX_VERMARIN,
        .categoryName = _("Street Rat"),
        .height = 9,
        .weight = 110,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vermarin, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Vermarin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Vermarin, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Vermarin),
        ICON(Vermarin, 2),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Vermarin),
    },

    [SPECIES_FOOLEMUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 83,
        .baseDefense   = 75,
        .baseSpeed     = 103,
        .baseSpAttack  = 43,
        .baseSpDefense = 71,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 125,
        .expYield = 150,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD },
        .abilities = { ABILITY_PRANKSTER, ABILITY_MAGICIAN, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Foolemur"),
        .cryId = CRY_AMBIPOM,
        .natDexNum = NATIONAL_DEX_FOOLEMUR,
        .categoryName = _("Street Rat"),
        .height = 10,
        .weight = 140,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Foolemur, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Foolemur,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Foolemur, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Foolemur),
        ICON(Foolemur, 2),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Foolemur),
    },
#endif //P_FAMILY_MARMOSCAMP

#if P_FAMILY_AMPIGEON
    [SPECIES_AMPIGEON] =
    {
        .baseHP        = 32,
        .baseAttack    = 45,
        .baseDefense   = 30,
        .baseSpeed     = 63,
        .baseSpAttack  = 45,
        .baseSpDefense = 30,
        .types = { TYPE_FLYING, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_RIVALRY, ABILITY_EARLY_BIRD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ampigeon"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_AMPIGEON,
        .categoryName = _("Wire Bird"),
        .height = 3,
        .weight = 19,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ampigeon, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Ampigeon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Ampigeon, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Ampigeon),
        ICON(Ampigeon, 3),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Ampigeon),
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_SQUABOLT}),
    },

    [SPECIES_SQUABOLT] =
    {
        .baseHP        = 53,
        .baseAttack    = 66,
        .baseDefense   = 45,
        .baseSpeed     = 90,
        .baseSpAttack  = 66,
        .baseSpDefense = 45,
        .types = { TYPE_FLYING, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 120,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_RIVALRY, ABILITY_EARLY_BIRD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Squabolt"),
        .cryId = CRY_PIDGEOTTO,
        .natDexNum = NATIONAL_DEX_SQUABOLT,
        .categoryName = _("Wire Bird"),
        .height = 7,
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
        FRONT_PIC(Squabolt, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Squabolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Squabolt, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Squabolt),
        ICON(Squabolt, 3),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Squabolt),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PIGENERATE}),
    },

    [SPECIES_PIGENERATE] =
    {
        .baseHP        = 75,
        .baseAttack    = 86,
        .baseDefense   = 60,
        .baseSpeed     = 118,
        .baseSpAttack  = 86,
        .baseSpDefense = 60,
        .types = { TYPE_FLYING, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 215,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_RIVALRY, ABILITY_EARLY_BIRD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pigenerate"),
        .cryId = CRY_PIDGEOT,
        .natDexNum = NATIONAL_DEX_PIGENERATE,
        .categoryName = _("Wire Bird"),
        .height = 11,
        .weight = 250,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pigenerate, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Pigenerate,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pigenerate, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pigenerate),
        ICON(Pigenerate, 3),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Pigenerate),
    },
#endif //P_FAMILY_AMPIGEON

#if P_FAMILY_TOCKTICK
    [SPECIES_TOCKTICK] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 75,
        .baseSpeed     = 23,
        .baseSpAttack  = 30,
        .baseSpDefense = 62,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 200,
        .expYield = 45,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_OBLIVIOUS, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tocktick"),
        .cryId = CRY_LEDYBA,
        .natDexNum = NATIONAL_DEX_TOCKTICK,
        .categoryName = _("Clock"),
        .height = 3,
        .weight = 160,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tocktick, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Tocktick,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tocktick, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Tocktick),
        ICON(Tocktick, 2),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Tocktick),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_CLOCKROACH}),
    },

    [SPECIES_CLOCKROACH] =
    {
        .baseHP        = 97,
        .baseAttack    = 70,
        .baseDefense   = 116,
        .baseSpeed     = 32,
        .baseSpAttack  = 48,
        .baseSpDefense = 82,
        .types = { TYPE_BUG, TYPE_STEEL },
        .catchRate = 80,
        .expYield = 160,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Clockroach"),
        .cryId = CRY_LEDIAN,
        .natDexNum = NATIONAL_DEX_CLOCKROACH,
        .categoryName = _("Clock"),
        .height = 8,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clockroach, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Clockroach,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clockroach, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Clockroach),
        ICON(Clockroach, 2),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Clockroach),
    },
#endif //P_FAMILY_TOCKTICK

#if P_FAMILY_GLEAMITE
    [SPECIES_GLEAMITE] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 38,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 44,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 200,
        .expYield = 45,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Gleamite"),
        .cryId = CRY_CATERPIE,
        .natDexNum = NATIONAL_DEX_GLEAMITE,
        .categoryName = _("Glitter"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gleamite, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gleamite,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gleamite, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Gleamite),
        ICON(Gleamite, 0),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Gleamite),
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_GLITTERFLY}),
    },

    [SPECIES_GLITTERFLY] =
    {
        .baseHP        = 67,
        .baseAttack    = 42,
        .baseDefense   = 55,
        .baseSpeed     = 107,
        .baseSpAttack  = 112,
        .baseSpDefense = 62,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 80,
        .expYield = 160,
        .evYield_SpAttack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Glitterfly"),
        .cryId = CRY_BUTTERFREE,
        .natDexNum = NATIONAL_DEX_GLITTERFLY,
        .categoryName = _("Glitter"),
        .height = 9,
        .weight = 180,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Glitterfly, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Glitterfly,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Glitterfly, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Glitterfly),
        ICON(Glitterfly, 0),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Glitterfly),
    },
#endif //P_FAMILY_GLEAMITE

#if P_FAMILY_HIBISCUTIE
    [SPECIES_HIBISCUTIE] =
    {
        .baseHP        = 36,
        .baseAttack    = 22,
        .baseDefense   = 24,
        .baseSpeed     = 36,
        .baseSpAttack  = 50,
        .baseSpDefense = 32,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 40,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS },
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_SOLAR_POWER, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hibiscutie"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_HIBISCUTIE,
        .categoryName = _("Snapdragon"),
        .height = 7,
        .weight = 250,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Hibiscutie, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Hibiscutie,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Hibiscutie, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Hibiscutie),
        ICON(Hibiscutie, 5),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Hibiscutie),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_DRACOSNAP}),
    },

    [SPECIES_DRACOSNAP] =
    {
        .baseHP        = 94,
        .baseAttack    = 98,
        .baseDefense   = 61,
        .baseSpeed     = 83,
        .baseSpAttack  = 135,
        .baseSpDefense = 69,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 60,
        .expYield = 200,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SOLAR_POWER, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dracosnap"),
        .cryId = CRY_CARNIVINE,
        .natDexNum = NATIONAL_DEX_DRACOSNAP,
        .categoryName = _("Snapdragon"),
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
        FRONT_PIC(Dracosnap, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Dracosnap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dracosnap, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dracosnap),
        ICON(Dracosnap, 5),
        //.footprint = gMonFootprint_Sprigatito,
        LEARNSETS(Dracosnap),
    },
#endif //P_FAMILY_HIBISCUTIE

#ifdef __INTELLISENSE__
};
#endif