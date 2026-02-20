
class CfgPatches
{
    class PB_Armor
    {
        author="F66thPebbles";
        requiredAddons[]={ "MA_Armor" };
        requiredVersion= 0.1;
        units[]=
        {
            "PB_ODST_Rucksack",
            "PB_Uniform_Base"
        };
        weapons[]=
        {
            // Helmets
            "PB_Recon_Helmet",
            "PB_H4_Scout_Helmet",
            "PB_H3_ODST_Helmet",
            "PB_AA_Helmet",
            "PB_Gungnir_Helmet",
            "PB_EOD_Helmet",
            "PB_MKV_Helmet",
            "PB_H3_ODST_Helmet_Bman",
            "PB_H3_ODST_Helmet_McDaniel",
                
            // Vests
            "PB_H3_ODST_Vest",
            "PB_H3_ODST_Vest_Bman",
            "PB_H3_ODST_Vest_McDaniel",               
        };
    };
};


#include "XtdGear\XtdGearModels.hpp"


class CfgWeapons
{
    class InventoryItem_Base_F;
    class NVGoggles;
    class HitPoints;


    // Helmets
    #include "cfg\Helmets.hpp"

    // Vests
    #include "cfg\Vests.hpp"

    // Uniforms
    #include "cfg\Marine_Uniforms.hpp"

};
class CfgAmmo
{
    class BulletBase;
    class TIOW_SmBoltRound : BulletBase
    {
        hit = 45;
        model = "TIOW_SmWep\Boltgun\Model\TIOW_BoltRoundFly.p3d";
        indirectHit = 6;
        indirectHitRange = 0.3;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 2;
        explosive = 0.25;
        cartridge = "FxCartridge_TIOW_Bolter75";
        explosionSoundEffect = "DefaultExplosion";
        CraterEffects = "";
        explosionEffects = "TIOW_BoltRoundRoundExplosion";
        typicalSpeed = 720;
        caliber = 5;
        tracerScale = 0.6;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;
    };
};
class CfgVehicleCLasses
{
    class PB_Soldier_Class
	{
		dlc = "F66th";
		displayName= "Soldier";
		author= "F66th Pebbles";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
	};
};

class CfgVehicles
{
    // Backpacks
    #include "cfg\Backpacks.hpp"
    //Marine uniform base
    #include "cfg\Marine_Uniforms_Bases.hpp"
};
