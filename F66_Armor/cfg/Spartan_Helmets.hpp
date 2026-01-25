//MJolnir Helmets
class PB_Spartan_Helmet_Base : ItemCore
{
    scope = 1;
    scopeArsenal = 1;
    author = "F66th Pebbles";
    ace_hearing_hasEHP = 1;
    ace_hearing_protection = 1;
    displayName = "[F66th] Base Spartan Helmet";
    model = "";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {};
    class ItemInfo : HeadgearItem
    {
        uniformModel = "";
        mass = 50;
        modelSides[] = { 6 };
        allowedSlots[] = { 801,901,701,605 };
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName = "HitHead";
                armor = 35;
                passThrough = 0.1;
            };
            class Face
            {
                hitpointName = "HitFace";
                armor = 35;
                passThrough = 0.1;
            };
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 30;
                passThrough = 0.1;
            };
        };
    };
};

//EOD Reach (No CBRN) (By request) (Azazel, Abbadon)
class PB_HREOD_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EOD Reach";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "HR EOD"
    };
};
class PB_HREOD_Helmet_Abbadon : PB_HREOD_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EOD Reach (Abbadon)";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\Squads\Abbadon_EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\Visors\Abbadon_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "HR EOD"
    };
};
class PB_HREOD_Helmet_Azazel : PB_HREOD_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EOD Reach (Azazel)";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\Squads\Azazel_EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\Visors\Azazel_EOD_R_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "HR EOD"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
};

// Commando (All)
class PB_Commando_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Abbadon : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Abbadon)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Abbadon_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Abbadon_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Azazel : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Azazel_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Azazel_Commando_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Commando"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
};
class PB_Commando_Helmet_Belphegor : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Belphegor_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Belphegor_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Cerberus : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Cerberus_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Cerberus_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Leviathan : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Leviathan_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Leviathan_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Lilith : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Lilith_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Lilith_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Commando"
    };
};
class PB_Commando_Helmet_Lucifer : PB_Commando_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Commando (Azazel)";
    model = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Commando\Squads\Lucifer_Commando_CO.paa",
        "F66th_Armor\data\Helmets\Commando\Visors\Lucifer_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Commando"
    };
};

//MP (All)
class PB_MP_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Abbadon : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Abbadon)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Abbadon_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Abbadon_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Asmo : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Asmo)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Asmo_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Asmo_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Asmo_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Azazel : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Azazel)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Azazel_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Azazel_MP_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "MP"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
};
class PB_MP_Helmet_Belphegor : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Belphegor)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Belphegor_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Belphegor_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Cerberus : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Cerberus)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Cerberus_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Cerberus_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Leviathan : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Leviathan)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Leviathan_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Leviathan_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Lilith : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Lilith)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Lilith_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Lilith_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "MP"
    };
};
class PB_MP_Helmet_Lucifer : PB_MP_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] MP (Lucifer)";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Squads\Lucifer_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Visors\Lucifer_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "MP"
    };
};

//EVA (All)
class PB_EVA_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
        hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Abbadon : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Abbadon)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Abbadon_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Abbadon_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Azazel : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Azazel)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Azazel_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Azazel_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
  class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Belphegor : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Belphegor)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Belphegor_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Belphegor_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Cerberus : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Cerberus)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Cerberus_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Cerberus_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Leviathan : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Leviathan)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Leviathan_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Leviathan_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Lilith : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Lilith)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Lilith_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Lilith_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "EVA"
    };
};
class PB_EVA_Helmet_Lucifer : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Lucifer)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Squads\Lucifer_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Visors\Lucifer_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "EVA"
    };
};

//Recon (All)
class PB_Recon_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Abbadon : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Abbadon)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Abbadon_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Abbadon_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Azazel : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Azazel)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Azazel_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Azazel_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Belphegor : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Belphegor)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Belphegor_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Belphegor_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Cerberus : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Cerberus)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Cerberus_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Cerberus_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Leviathan : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Leviathan)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Leviathan_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Leviathan_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Lilith : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Lilith)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Lilith_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Lilith_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Recon"
    };
};
class PB_Recon_Helmet_Lucifer : PB_Recon_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Recon (Lucifer)";
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Recon\Squads\Lucifer_Recon_CO.paa",
        "F66th_Armor\data\Helmets\Recon\Visors\Lucifer_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Recon"
    };
};

//Scout (H4 Trim) Needs to be removed
class PB_Scout_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "H4 Scout"
    };
};
class PB_Scout_Helmet_Abbadon : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Abbadon)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Abbadon_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Abbadon_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Azazel : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Azazel)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Azazel_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Azazel_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Belphegor : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Belphegor)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Belphegor_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Belphegor_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Cerberus : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Cerberus)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Cerberus_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Cerberus_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Leviathan : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Leviathan)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Leviathan_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Leviathan_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Lilith : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Lilith)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Lilith_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Lilith_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "H4 Scout"
    }
};
class PB_Scout_Helmet_Lucifer : PB_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Scout (Lucifer)";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Squads\Lucifer_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Visors\Lucifer_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "H4 Scout"
    }
};

//Grenadier (All)
class PB_Grenadier_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Abbadon : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Abbadon)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Abbadon_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Abbadon_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Azazel : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Azazel)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Azazel_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Azazel_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Belphegor : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Belphegor)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Belphegor_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Belphegor_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Cerberus : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Cerberus)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Cerberus_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Cerberus_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Leviathan : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Leviathan)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Leviathan_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Leviathan_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Lilith : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Lilith)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Lilith_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Lilith_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Grenadier"
    }
};
class PB_Grenadier_Helmet_Lucifer : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Lucifer)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Squads\Lucifer_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Visors\Lucifer_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Grenadier"
    }
};

//CQC (All)
class PB_CQC_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Abbadon : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Abbadon)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Abbadon_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Abbadon_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Azazel : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Azazel)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Azazel_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Azazel_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Belphegor : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Belphegor)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Belphegor_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Belphegor_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Cerberus : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Cerberus)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Cerberus_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Cerberus_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Leviathan : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Leviathan)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Leviathan_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Leviathan_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Lilith : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Lilith)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Lilith_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Lilith_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "CQC"
    }
};
class PB_CQC_Helmet_Lucifer : PB_CQC_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] CQC (Lucifer)";
    model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\CQC\Squads\Lucifer_CQC_CO.paa",
        "F66th_Armor\data\Helmets\CQC\Visors\Lucifer_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "CQC"
    }
};

//JFO (All)
class PB_JFO_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Abbadon : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Abbadon)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Abbadon_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Abbadon_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Azazel : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Azazel)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Azazel_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Azazel_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Belphegor : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Belphegor)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Belphegor_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Belphegor_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Cerberus : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Cerberus)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Cerberus_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Cerberus_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Leviathan : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Leviathan)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Leviathan_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Leviathan_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Lilith : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Lilith)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Lilith_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Lilith_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "JFO"
    }
};
class PB_JFO_Helmet_Lucifer : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] JFO (Lucifer)";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\Squads\Lucifer_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\Visors\Lucifer_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "JFO"
    }
};

//Pilot (Azazel, abbadon)
class PB_Pilot_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Pilot";
    model = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Pilot\Pilot_CO.paa",
        "F66th_Armor\data\Helmets\Pilot\Pilot_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Pilot"
    }
};
class PB_Pilot_Helmet_Abbadon : PB_Pilot_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Pilot (Abbadon)";
    model = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Pilot\Squads\Abbadon_Pilot_CO.paa",
        "F66th_Armor\data\Helmets\Pilot\Visors\Abbadon_Pilot_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Pilot"
    }
};
class PB_Pilot_Helmet_Azazel : PB_Pilot_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Pilot (Azazel)";
    model = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Pilot\Squads\Azazel_Pilot_CO.paa",
        "F66th_Armor\data\Helmets\Pilot\Visors\Azazel_Pilot_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Pilot"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
};

//SPI (Leviathan, Command)
class PB_SPI_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SPI";
    model = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\SPI\SPI_CO.paa",
        "F66th_Armor\data\Helmets\SPI\SPI_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "SPI"
    }
};
class PB_SPI_Helmet_Leviathan : PB_SPI_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SPI (Leviathan)";
    model = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\SPI\Squads\Leviathan_SPI_CO.paa",
        "F66th_Armor\data\Helmets\SPI\Visors\Leviathan_SPI_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "SPI"
    };
};
class PB_SPI_Helmet_Lilith : PB_SPI_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SPI (Lilith)";
    model = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\SPI\Squads\Lilith_SPI_CO.paa",
        "F66th_Armor\data\Helmets\SPI\Visors\Lilith_SPI_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "SPI"
    };
};
class PB_SPI_Helmet_Lucifer : PB_SPI_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SPI (Lucifer)";
    model = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\SPI\Squads\Lucifer_SPI_CO.paa",
        "F66th_Armor\data\Helmets\SPI\Visors\Lucifer_SPI_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "SPI"
    };
};

//AA (All)
class PB_AA_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Abbadon : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Abbadon)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Abbadon_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Abbadon_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Azazel : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Azazel)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Azazel_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Azazel_AA_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "AA"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
};
class PB_AA_Helmet_Belphegor : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Belphegor)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Belphegor_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Belphegor_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Cerberus : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Cerberus)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Cerberus_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Cerberus_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Leviathan : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Leviathan)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Leviathan_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Leviathan_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Lilith : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Lilith)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Lilith_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Lilith_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "AA"
    };
};
class PB_AA_Helmet_Lucifer : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Lucifer)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\Squads\Lucifer_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\Visors\Lucifer_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "AA"
    };
};

//HR Scout (All)
class PB_Reach_Scout_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Abbadon : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Abbadon)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Abbadon_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Abbadon_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Azazel : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Azazel)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Azazel_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Azazel_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Belphegor : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Belphegor)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Belphegor_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Belphegor_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Cerberus : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Cerberus)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Cerberus_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Cerberus_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Leviathan : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Leviathan)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Leviathan_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Leviathan_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Lilith : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Lilith)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Lilith_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Lilith_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "HR Scout"
    };
};
class PB_Reach_Scout_Helmet_Lucifer : PB_Reach_Scout_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reach Scout (Lucifer)";
    model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Scout_R\Squads\Lucifer_Scout_CO.paa",
        "F66th_Armor\data\Helmets\Scout_R\Visors\Lucifer_Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "HR Scout"
    };
};

//Gungnir (All)
class PB_Gungnir_Helmet : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    author = "F66th Pebbles";
    displayName = "[F66th] Gungnir";
    model = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelections[] =
    {
        "Camo1"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Gungnir\Gungnir_Helmet_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Gungnir"
    };
};


//Custom
class PB_EVA_Helmet_Revan : PB_EVA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EVA (Revan)";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Custom\Revan_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Custom\Revan_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
};
class PB_HREOD_Helmet_Revan : PB_HREOD_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EOD Revan";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\Custom\Revan_EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\Custom\Revan_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
};
class PB_Grenadier_Helmet_Spinny : PB_Grenadier_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Grenadier (Spinny)";
    model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Grenadier\Custom\Spinny_Grenadier_CO.paa",
        "F66th_Armor\data\Helmets\Grenadier\Custom\Spinny_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Spinny"
    }
};
class PB_HREOD_Helmet_Pebbles : PB_HREOD_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] EOD Pebbles";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\Custom\Pebbles_EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\Custom\Pebbles_EOD_R_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Pebbles"
    }
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
};
class PB_Gungnir_Helmet_Chronos : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    author = "F66th Pebbles";
    displayName = "[F66th] Chronos Gungnir";
    model = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelections[] =
    {
        "Camo1"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Gungnir\Custom\Chronos_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Chronos"
    };
};
class PB_MP_Helmet_Nyquil : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Nyquil MP";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\MP\Custom\Nyquil_MP_CO.paa",
        "F66th_Armor\data\Helmets\MP\Custom\Nyquil_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Nyquil"
    };
};
class PB_EVA_Helmet_Blue : PB_Spartan_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Blue EVA";
    model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\EVA\Custom\Blue_EVA_CO.paa",
        "F66th_Armor\data\Helmets\EVA\Custom\Blue_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Blue"
    };
};
class PB_AA_Helmet_Wren : PB_AA_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] AA (Wren)";
    model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\AA\custom\Wren_AA_CO.paa",
        "F66th_Armor\data\Helmets\AA\custom\Wren_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Wren"
    };
};
class PB_JFO_Helmet_Revan : PB_JFO_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Revan";
    model = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\JFO\custom\Revan_JFO_CO.paa",
        "F66th_Armor\data\Helmets\JFO\custom\Revan_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Revan"
    }
};
class PB_HREOD_Helmet_Fixer : PB_HREOD_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Fixer";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\Eod_R\Custom\Fixer_EOD_R_CO.paa",
        "F66th_Armor\data\Helmets\Eod_R\Visors\Abbadon_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Fixer"
    };
};