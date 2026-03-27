//Base Helmets
class HeadgearItem;
class ItemCore;
class PB_Helmet_Base: ItemCore
{
    scope=1;
    scopeArsenal=1;
    author="F66th Pebbles";
    ace_hearing_protection=1;
    ace_hearing_hasEHP = 1;
    displayName="[F66th] Base Helmet";
    model="";
    picture="";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]={};
    class ItemInfo: HeadgearItem
    {
        uniformModel="";
        mass=40;
        modelSides[]={6};
        allowedSlots[]={801,901,701,605};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]={};
        class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
    };
};
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

//Standard Helmets
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
        "F66th_Armor\Hellwalkers\Helmets\Base\AA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "AA";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Commando_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Commando";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\CQC_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "CQC";
    };
    };
    class PB_M56Eod_Helmet: PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56-Eod Helmet";
    model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
    picture="\F66th_Armor\data\Icons\F66th.paa"; 
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Base\EOD\EOD_co.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\EOD_Visor_co.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Unused";
        Variant = "H3EOD";
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "HR EOD";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "EVA";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Grenadier_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Grenadier";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Gungnir_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Gungnir";
    };
    };
    class PB_HRODST_Helmet:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Base_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Base\HR_ODST_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\JFO_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "JFO";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\MP_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "MP";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Pilot_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Pilot_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Pilot";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Recon_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Recon";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Scout_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Scout_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Unused";
        Variant = "H4Scout";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\Scout_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\Scout_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Scout";
    };
    };
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
        "F66th_Armor\Hellwalkers\Helmets\Base\SPI_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Base\SPI_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Unused";
        Variant = "SPI";
    };
    };
    class PB_Hayabusa_Helmet : PB_Spartan_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Hayabusa";
        model = "MA_Armor\data\Helmets\Hayabusa\Hayabusa_Helmet.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\Hayabusa\Helmets\Olive_Hayabusa_Helmet_CO.paa",
            "MA_Armor\data\Helmets\Hayabusa\Visors\Base_Hayabusa_Visor_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\Hayabusa\Hayabusa_Helmet.p3d";
        };
        class XtdGearInfo
        {
            model = "PB_Base_Helmets";
            Variant = "Hayabusa";
        };
    };
    class PB_CH252_Helmet_Base: PB_Helmet_Base
    {
    scope=1;
    scopeArsenal=1;
    displayName="[F66th] Innie CH252 Helmet";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "Marine";
    };
    };

/// Abbadon
    class PB_HREOD_Helmet_Abbadon : PB_Spartan_Helmet_Base
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon EOD";
    model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "HR EOD";
    };
    };
    class PB_EVA_Helmet_Abbadon : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "EVA";
    };
    };
    class PB_Grenadier_Helmet_Abbadon : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Grenadier_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Grenadier";
    };
    };
    class PB_HRODST_Helmet_Abbadon:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Abbadon_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_Recon_Helmet_Abbadon : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Recon_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "Recon";
    };
    };
    class PB_CH252_Helmet_Abbadon : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Abbadon_Helmets";
            Variant = "Marine";
        };
    };

/// Asmodeus
    class PB_MP_Helmet_Asmodeus : PB_Spartan_Helmet_Base
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus MP";
    model = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmo_MP_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmo_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Asmo_Helmets";
        Variant = "MP";
    };
    };
    class PB_HRODST_Helmet_Asmodeus:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Asmodeus-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Asmo_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmo_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmo_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Asmodeus : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmodeus_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmodeus_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Asmo\Asmodeus_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Asmo_Helmets";
            Variant = "Marine";
        };
    };

/// Azazel
    class PB_AA_Helmet_Azazel : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_AA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "AA";
    };
    };
    class PB_HREOD_Helmet_Azazel : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "HR EOD";
    };
    };
    class PB_EVA_Helmet_Azazel : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "EVA";
    };
    };
    class PB_Grenadier_Helmet_Azazel : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Grenadier_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Grenadier";
    };
    };
    class PB_HRODST_Helmet_Azazel:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Azazel_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_Pilot_Helmet_Azazel : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Pilot_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Pilot_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "Pilot";
    };
    };
    class PB_CH252_Helmet_Azazel : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Azazel\Azazel_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Azazel_Helmets";
            Variant = "Marine";
        };
    };

/// Belphegor
    class PB_HRODST_Helmet_Belphegor:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Belphegor_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Belphegor\Belphegor_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Belphegor\Belphegor_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Belphegor : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Belphegor\Belphegor_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Belphegor\Belphegor_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Belphegor\Belphegor_Marine.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Belphegor_Helmets";
            Variant = "Marine";
        };
    };

/// Cerberus
    class PB_EVA_Helmet_Cerberus : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerberus_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerberus_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "EVA";
    };
    };
    class PB_HRODST_Helmet_Cerberus:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Cerberus_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerberus_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerberus_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Cerberus : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerb_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerb_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Cerberus\Cerb_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Cerberus_Helmets";
            Variant = "Marine";
        };
    };

/// Leviathan
    class PB_EVA_Helmet_Leviathan : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "EVA";
    };
    };
    class PB_HRODST_Helmet_Leviathan:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Leviathan_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Leviathan: PB_Helmet_Base
    {
    scope=1;
    scopeArsenal=1;
    displayName="[F66th] Tanker Helmet";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_HelmetAccessories_A_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_HelmetAccessories_A_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Leviathan\Leviathan_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "Marine";
    };
    };

/// Lilith
    class PB_EVA_Helmet_Lilith : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "EVA";
    };
    };
    class PB_Grenadier_Helmet_Lilith : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Grenadier_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Grenadier";
    };
    };
    class PB_HRODST_Helmet_Lilith:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Lilith_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_Recon_Helmet_Lilith : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Recon_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Recon";
    };
    };
    class PB_Reach_Scout_Helmet_Lilith : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Scout_r_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Scout_r_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "Scout";
    };
    };
    class PB_CH252_Helmet_Lilith : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Lilith\Lilith_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Lilith_Helmets";
            Variant = "Marine";
        };
    };

/// Lucifer
    class PB_AA_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_AA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_AA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "AA";
    };
    };
    class PB_Commando_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Commando_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Commando_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Commando\Commando_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Commando";
    };
    };
    class PB_CQC_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_CQC_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_CQC_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "CQC";
    };
    };
    class PB_HREOD_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "HR EOD";
    };
    };
    class PB_EVA_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "EVA";
    };
    };
    class PB_Grenadier_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Grenadier_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Grenadier_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Grenadier";
    };
    };
    class PB_Gungnir_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Gungnir_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Gungnir";
    };
    };
    class PB_HRODST_Helmet_Lucifer:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Lucifer_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_JFO_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_JFO_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "JFO";
    };
    };
    class PB_MP_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_MP_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "MP";
    };
    };
    class PB_Pilot_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Pilot_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Pilot_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Pilot";
    };
    };
    class PB_Recon_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Recon_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Recon_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Recon";
    };
    };
    class PB_Reach_Scout_Helmet_Lucifer : PB_Spartan_Helmet_Base
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
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Scout_r_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Scout_r_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "Scout";
    };
    };
    class PB_CH252_Helmet_Lucifer : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Lucifer\Lucifer_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Lucifer_Helmets";
            Variant = "Marine";
        };
    };

/// Mammon
    class PB_HRODST_Helmet_Mammon:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] ODST Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Mammon_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\Mammon\Mammon_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Mammon\Mammon_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Mammon : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Innie CH252 Helmet";
        model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        picture = ""; //TODO: Update this
        hiddenSelections[] =
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\Helmets\Mammon\Mammon_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Mammon\Mammon_Marine.paa",
            "F66th_Armor\Hellwalkers\Helmets\Mammon\Mammon_Marine.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
            "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
            hiddenSelections[] =
            {
                "Camo1", // Helmet
                "Camo2", // NVG Mount
                "Camo3", // Helmet Strap
                "Camo4", // Eye Piece
                "Camo5", // Eye Piece Glass
                "Camo6", // Visor Glasses
                "Camo7", // Vaccum Collar
                "Camo8", // Helmet Chin
                "Camo9", // Closed Visor
                "Helmet",
                "NVGMount",
                "HelmetStrap",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
            };
            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
                "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
            };
        };
        class XtdGearInfo
        {
            model = "PB_Mammon_Helmets";
            Variant = "Marine";
        };
    };

/// SCP
    class PB_HRODST_Helmet_SCP:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_SCP_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\Hellwalkers\Helmets\SCP\SCP_HR_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\SCP\SCP_HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
//Enemies
    /// Alads Angels
    class PB_HRODST_Helmet_Angelic:PB_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Angelic Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_AladsAngels_Helmets";
        Variant = "ODST";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_ODST_Helmet_CO.paa",
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_King_Scout_Helmet : PB_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] King's Crown";
        model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
        picture = "\F66th_Armor\data\Icons\F66th.paa"; //TODO: Update this
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\CustomGear\Trim\NotTrim_H4scout_CO.paa",
            "F66th_Armor\Hellwalkers\CustomGear\Trim\NotTrim_H4scout_Visor_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
        };
    };
    class PB_EVA_Helmet_Angelic : PB_Spartan_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Angel EVA";
        model = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[] =
        {
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_EVA_Helmet_CO.paa",
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_EVA_Visor_co.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
        };
    };
    class PB_HREOD_Helmet_Angelic : PB_HREOD_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Evil EOD";
        model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[] =
        {
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_EOD_Helmet_CO.paa",
        "F66th_Armor\OtherFactions\AladsAngels\Helmets\Angelic_EOD_Visor_co.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
        };
    };
    class PB_EOD_CBRN_Angel_NVG : NVGoggles
    {
        scope = 2;
        scopeArsenal = 2;
        author = "F66th Pebbles";
        displayName = "[F66th] Angel CBRN Attachment (NVG)";
        model = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
        hiddenSelections[] =
        {
            "Camo1"
        };
        hiddenSelectionsTextures[] =
        {
                "F66th_Armor\OtherFactions\AladsAngels\Evil_CBRN_CO.paa"
        };
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
            modelOff = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
            mass = 1;
            hiddenSelections[] =
            {
                "camo1"
            };
            hiddenSelectionsTextures[] =
            {
                "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_CBRN_CO.paa"
            };
        };
    };


    /// Red Wake
    class PB_CH252_Helmet_Standard_Innie: PB_CH252_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Innie CH252 Helmet";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "camo7", // Vac Seal
        "Camo8", // Face Module Chin
        "Camo9", // Closed Visor
    //    "Helmet",
    //    "NVGMount",
    //    "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
        //    "HelmetStrap"
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    };
    class PB_CH252_Helmet_EyePiece_Innie : PB_CH252_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Innie CH252 Helmet (Eyepiece)";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
    //    "Helmet",
    //    "NVGMount",
    //    "EyePiece",
    //    "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", // Helmet
            "Camo2", // NVG Mount
            "Camo3", // Helmet Strap
            "Camo4", // Eye Piece
            "Camo5", // Eye Piece Glass
            "Camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
        //    "EyePiece",
        //    "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    };
    class PB_CH252_Helmet_VisorGlasses_Innie : PB_CH252_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Innie CH252 Helmet (Glasses)";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
    //  "Helmet",
    //  "NVGMount",
        "EyePiece",
        "EyePieceGlass",
    //  "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
        //  "Helmet",
        //  "NVGMount",
            "EyePiece",
            "EyePieceGlass",
        //  "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    };
    class PB_CH252_Helmet_Sealed_Innie : PB_CH252_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Innie ECH252 Helmet (Blue)";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "camo7", // Vac Seal
        "Camo8", // Face Module Chin
        "Camo9", // Closed Visor
    //    "Helmet",
    //    "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
    //    "VaccumCollar",
    //    "Helmet_Chin",
    //    "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
        //    "VaccumCollar",
        //    "Helmet_Chin",
        //    "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    };
    class PB_CH252_Helmet_Sealed_NCO_Innie : PB_CH252_Helmet_Base
    {
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] Innie ECH252 Helmet (NCO)";
    model="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture=""; //TODO: Update this
    hiddenSelections[]=
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "camo7", // Vac Seal
        "Camo8", // Face Module Chin
        "Camo9", // Closed Visor
    //    "Helmet",
    //    "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
    //    "VaccumCollar",
    //    "Helmet_Chin",
    //    "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\OtherFactions\RedWake\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[]=
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
        //    "VaccumCollar",
        //    "Helmet_Chin",
        //    "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Base\FaceModule_CO.paa"
        };
    };
    }  ;

//Custom
    class PB_HRODST_Helmet_Ahriman :PB_HRODST_Helmet
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Ahriman ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Ahriman";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Ahriman\Ahriman_ODST_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Ahriman\Ahriman_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
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
        "F66th_Armor\Hellwalkers\CustomGear\Blue\Blue_EVA_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Blue\Blue_EVA_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\EVA\EVA_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Blue";
    };
    };
    class PB_HRODST_Helmet_Cat :PB_HRODST_Helmet
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cat ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Cat";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Cat\Cat_ODST_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Cat\Cat_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
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
        "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Chronos";
    };
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
        "F66th_Armor\Hellwalkers\CustomGear\Fixer\Fixer_EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\Helmets\Abbadon\Abbadon_EOD_R_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Fixer";
    };
    };
    class PB_HRODST_Helmet_Komoto :PB_HRODST_Helmet
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Komoto ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Komoto";
    };
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Komoto\Komoto_ODST_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Komoto\Komoto_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
    };
    class PB_CH252_Helmet_Navvaro : PB_CH252_Helmet_Base
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Innie CH252 Helmet";
    model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture = ""; //TODO: Update this
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "camo7", // Vac Seal
        "Camo8", // Face Module Chin
        "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
        //    "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Navvaro\Navvaro_TrooperHelmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Navvaro\Navvaro_TrooperHelmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Navvaro\Navvaro_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
            //    "Helmet",
            //    "NVGMount",
            //    "HelmetStrap"
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Navvaro";
    };
    };
    class PB_CH252_Helmet_Noble : PB_CH252_Helmet_Base
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Innie CH252 Helmet";
    model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    picture = ""; //TODO: Update this
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "camo7", // Vac Seal
        "Camo8", // Face Module Chin
        "Camo9", // Closed Visor
        //    "Helmet",
        //    "NVGMount",
        //    "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Noble\SplitlipKisser_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Noble\SplitlipKisser_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Noble\SplitlipKisser_Helmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "camo7", // Vac Seal
            "Camo8", // Face Module Chin
            "Camo9", // Closed Visor
            //    "Helmet",
            //    "NVGMount",
            //    "HelmetStrap"
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses",
                "VaccumCollar",
                "Helmet_Chin",
                "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Base\VacSeal_Base_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
        };
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Noble";
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
        "F66th_Armor\Hellwalkers\CustomGear\Nyquil\Nyquil_MP_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Nyquil\Nyquil_MP_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\MP\MP_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Nyquil";
    };
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
        "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_EOD_R_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_EOD_R_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Pebbles";
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
    };
    };
    class PB_HRODST_Helmet_Reaper :PB_HRODST_Helmet
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reaper ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Reaper";
    };
       hiddenSelections[] =
    {
        "Camo1",
        "Camo2"
    }; 
       hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_ODST_Helmet_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
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
        "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_JFO_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_JFO_Visor_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\JFO\JFO_Helmet.p3d";
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Revan";
    };
    };
    class PB_Hayabusa_Helmet_Spinny : PB_Spartan_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Hayabusa";
        model = "MA_Armor\data\Helmets\Hayabusa\Hayabusa_Helmet.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Hayabusa_CO.paa",
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Hayabusa_Visor_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\Hayabusa\Hayabusa_Helmet.p3d";
        };
        class XtdGearInfo
        {
            model = "PB_Custom_Helmets";
            Variant = "Spinny";
        };
    };
    class PB_Trim_Scout_Helmet : PB_Helmet_Base
    {
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Marshal's Helmet";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    picture = "\F66th_Armor\data\Icons\F66th.paa"; //TODO: Update this
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\Hellwalkers\CustomGear\Trim\Trim_H4scout_CO.paa",
        "F66th_Armor\Hellwalkers\CustomGear\Trim\Trim_H4scout_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Trim";
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
    };
    class PB_Wren_AA_Helmet : PB_Spartan_Helmet_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[F66th] Wren AA";
        model = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2"
        };
        hiddenSelectionsTextures[] =
        {
            "F66th_Armor\Hellwalkers\CustomGear\Wren\Wren_AA_CO.paa",
            "F66th_Armor\Hellwalkers\CustomGear\Wren\Wren_AA_Visor_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformModel = "MA_Armor\data\Helmets\Mjolnir_AA\Mjolnir_AA.p3d";
        };
        class XtdGearInfo
        {
            model = "PB_Custom_Helmets";
            Variant = "Wren";
        };
    };



    class NVGoggles;
    class PB_EOD_CBRN_Chronos_NVG : NVGoggles
    {
        scope = 2;
        scopeArsenal = 2;
        author = "F66th Pebbles";
        displayName = "[F66th] Chronos CBRN Attachment (NVG)";
        model = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
        hiddenSelections[] =
        {
            "Camo1"
        };
        hiddenSelectionsTextures[] =
        {
                "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_CBRN_CO.paa"
        };
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
            modelOff = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
            mass = 1;
            hiddenSelections[] =
            {
                "camo1"
            };
            hiddenSelectionsTextures[] =
            {
                "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_CBRN_CO.paa"
            };
        };
    };
