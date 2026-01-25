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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
};

/// Innie
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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\PB_Innie_HelmetAccessories_A_CO.paa",
        "F66th_Armor\data\Innies\Helmet\VaccumCollar\Base\VacSeal_Base_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa",
        "F66th_Armor\data\Innies\Helmet\SealedVisor\Blue_Visor\Base\FaceModule_CO.paa"
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
};

/// Hellwalker


/// Custom
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
        "F66th_Armor\data\Marines\Helmet\Navvaro_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Marines\Helmet\Navvaro_TrooperHelmet_CO.paa",
        "F66th_Armor\data\Marines\Helmet\Navvaro_TrooperHelmet_CO.paa",
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
        Variant = "Navvaro"
    };
};