class CfgPatches
{
	class SAA_Weapons
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F_Mark"};
	};
};

	/// All firemodes, to be sure
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;

	/// Weapon slots
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	
	//#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
	//#include "cfgMagazines.hpp" /// specific magazines for this rifle
	//#include "cfgAmmo.hpp" /// specific ammo for this rifle
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
		class Whizzbanger_RND: TIOW_SmBoltRound
		{
			hit=15000;
			cost=1;
		};
	};
	class CfgMagazines
	{
		
		class 30Rnd_556x45_Stanag;
		class Whizzbanger_Mag: 30Rnd_556x45_Stanag
		{
			displayName="Whizzbanger Round";
			initSpeed=1100;
			tracersEvery=1;
			lastRoundsTracer=30;
			scope=2;
			scopeArsenal=2;
			scopeCurator=2;
			count=1;
			ammo="Whizzbanger_RND";
			descriptionShort="Whizzbanger Round";
			mass=1;
			magazineGroup[]=
			{
				"whizzrounds"
			};
		};
	};	
class CfgWeapons
{
	class ItemCore;
	
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	
	class Pistol;
	class Rifle;
	class WeaponSlotsInfo;
	class Rifle_Base_F: Rifle
	{
		//class WeaponSlotsInfo;
		class GunParticles;
	};
	
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F;
	class SecondEffect;
	class GunParticles;
	class muzzle_snds_H;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class hgun_Rook40_F;
	class Solar_Aux_inferno: hgun_Rook40_F
	{
		author="Xemio";
		baseWeapon="Solar_Aux_inferno";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		reloadAction="WBK_SolarAux_MeltaReload";
		model="\Solor_Aux_Assets\models\Solar_auz_inferno_pistol.p3d";
		magazines[]=
		{
			"SolarAux_MeltaMag",
		};
		displayName="[Solar Aux] Inferno Pistol";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Solor_Aux_Assets\textures\InfernoPistol_co.paa"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_Aux_Melta_SoundSet"
				};
			};
			reloadTime=5;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0;
			minRange=3;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=0.15000001;
			aiRateOfFireDistance=3;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=1;
			aiRateOfFireDistance=700;
		};
		class far_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=3;
			aiRateOfFireDistance=2000;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=2;
			aiRateOfFireDistance=1000;
		};
	};
	class Whizzbanger: hgun_Rook40_F
	{
		author="Xemio";
		baseWeapon="Whizzbanger";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="\Solor_Aux_Assets\models\Whizzbanger.p3d";
		magazines[]=
		{
			"Whizzbanger_Mag",
		};
		displayName="[Solar Aux] Whizzbanger";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Solor_Aux_Assets\textures\whizzbanger_CO.paa"
		};
		modes[]=
		{
			"Single",
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Whizzbanger_SoundSet"
				};
				begin1[]=
				{
					"\Solor_Aux_Assets\sounds\vine-boom.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.10600001;
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.2;
		};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Solar_Aux_Spin_base_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Whizzbanger_CloseShot_base",
			"Whizzbanger_DistShot_base"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Whizzbanger_SoundSet: Solar_Aux_Spin_base_SoundSet
	{
		soundShaders[]=
		{
			"Whizzbanger_CloseShot",
			"Whizzbanger_DistShot"
		};
	};
};

class CfgSoundShaders
{
	class Whizzbanger_CloseShot_base
	{
		samples[]={{"Solor_Aux_Assets\sounds\vine-boom.ogg",1}};
		volume=0.9;
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{220,1},
			{250,0.5},
			{1800,0}
		};
	};
	class Whizzbanger_DistShot_base
	{
		samples[]={{"Solor_Aux_Assets\sounds\Metalpipe.ogg",1}};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{220,0.5},
			{250,1},
			{1800,1}
		};
	};
	
	class Whizzbanger_CloseShot: Whizzbanger_CloseShot_base
	{
		samples[]={{"Solor_Aux_Assets\sounds\vine-boom.ogg",1}};
	};
	class Whizzbanger_DistShot: Whizzbanger_DistShot_base
	{
		samples[]={{"Solor_Aux_Assets\sounds\Metalpipe.ogg",1}};
	};
	
};
