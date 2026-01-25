class PB_Uniform_Base : B_Soldier_base_F
{
    scope = 0;
    scopeCurator = 0;
    side = 1;
    author = "F66th Pebbles";
    UniformClass = "";
    vehicleClass = "";
    model = "";
    weapons[] = { "Throw","Put" };
    respawnWeapons[] = { "Throw","Put" };
    Items[] = { "OPTRE_Biofoam" };
    RespawnItems[] = { "OPTRE_Biofoam" };
    magazines[] = {};
    respawnMagazines[] = {};
    hiddenSelections[] =
    {
        "camo"
    };
    hiddenSelectionsTextures[] = {};
};

class PB_Marine_BDU_Base: PB_Uniform_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Uni_Upper",
        "Uni_Lower",
        "Uni_Collar",
        "Armor_Underpad",
        "Armor_Straps",
        "Armor_Upper",
        "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};

/// Innie BDU
class PB_Innie_Light_BDU: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Light";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
 //     "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};
class PB_Innie_Medium_BDU: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Medium";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
 //     "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
 //     "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};
class PB_Innie_Heavy_BDU: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Heavy";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
 //     "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
 //     "Shoulders_Lower1",
        "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};

//NO COLLARS
class PB_Innie_Light_BDU_NC: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Light_NC";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
         "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};
class PB_Innie_Medium_BDU_NC: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Medium_NC";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
         "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
 //     "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};
class PB_Innie_Heavy_BDU_NC: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_Heavy_NC";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
         "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
 //     "Shoulders_Lower1",
        "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};

// No Shoulders
class PB_Innie_NS_BDU: PB_Marine_BDU_Base
{
    scope=2;
    scopeArsenal=2;
    UniformClass="MA_Marine_BDU_NS";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
 //     "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerBDU_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperCollar_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperSoftpadding_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperArmorStraps_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperUpperArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperLowerArmor_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa",
        "F66th_Armor\data\Innies\Uniform\PB_TrooperShoulders_CO.paa"
    };
};
