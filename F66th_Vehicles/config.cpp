class CfgPatches
{
	class PB_Vehicles_M511
	{
		author = "F66th Pebbles";
			units[] = 
		{ 
			"PB_M511_Springbok_APC",
			"PB_M511_Springbok_MGS",
			"PB_M511_Springbok_AA",
			"PB_M511_Springbok_IFV",
			"PB_Falcon"
		};
			requiredAddons[] =
				{
					"OPTRE_Core",
					"OPTRE_Vehicles",
					"DMNS_Core",
					"OPTRE_Core",
					"A3_Air_F",
					"A3_Air_F_Beta",
					"A3_Weapons_F",
					"A3_Soft_F_Exp",
					"A3_Armor_F_Beta",
					"A3_Soft_F"
				};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class textureSources;
	//Springbok

	class DMNS_M511_Springbok_APC;
	class PB_M511_Springbok_APC : DMNS_M511_Springbok_APC
	{
		author = "F66th Pebbles";
		displayName = "M511 APC";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"Camo3",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};

	class DMNS_M511_Springbok_MGS;
	class PB_M511_Springbok_MGS : DMNS_M511_Springbok_MGS
	{
		author = "F66th Pebbles";
		displayName = "M511 MGS";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};
	class PB_M511_Springbok_Funny : DMNS_M511_Springbok_MGS
	{
		author = "F66th Pebbles";
		displayName = "Yeet Cannon";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;

		class Turrets
		{
			class MainTurret
			{
				isCopilot = 1;
				CanEject = 0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev = -12;
				maxElev = 20;
				initElev = 6;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Gunner_APC_Wheeled_01_in";
				gunnerInAction = "Gunner_APC_Wheeled_01_in";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				precisegetinout = 1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments = "Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				stabilizedInAxes = 3;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500 };
				discreteDistanceInitIndex = 5;
				showAllTargets = 4;
				playerPosition = 3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				memoryPointGun = "machinegun";
				weapons[] = { "PB_YeetCannon","Laserdesignator_mounted" };
				magazines[] = { "DMNS_24ARnd_105mm_SAPHE","DMNS_24Rnd_105mm_HEAT","DMNS_24Rnd_105mm_APBC","Laserbatteries" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow : Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};

	class DMNS_M511_Springbok_IFV;
	class PB_M511_Springbok_IFV : DMNS_M511_Springbok_IFV
	{
		author = "F66th Pebbles";
		displayName = "M511 IFV";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};

	class DMNS_M511_Springbok_AA;
	class PB_M511_Springbok_AA : DMNS_M511_Springbok_AA
	{
		author = "F66th Pebbles";
		displayName = "M511 AA";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};

	//Silverback a115 base 250 updated

	class DMNS_Silverback_Armoured_LRV;
	class PB_Silverback_Armored_MG : DMNS_Silverback_Armoured_LRV {
		author = "F66th Pebbles";
		displayName = "Silverback Armored (MG)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 275;
	};

	class DMNS_Silverback_Armoured_TOW;
	class PB_Silverback_Armored_TOW : DMNS_Silverback_Armoured_TOW {
		author = "F66th Pebbles";
		displayName = "Silverback Armored (TOW)";
			scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 250;
	};

	// Bulldog a115 base 175 updated

	class DMNS_Bulldog_LRV_AGL;
	class PB_Bulldog_AGL : DMNS_Bulldog_LRV_AGL {
		author = "F66th Pebbles";
		displayName = "Bulldog (AGL)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 200;
	};

	class DMNS_Bulldog_LRV_MG;
	class PB_Bulldog_MG : DMNS_Bulldog_LRV_MG {
		author = "F66th Pebbles";
		displayName = "Bulldog (MG)";
			scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 175;
	};

	//Falcon

	class OPTRE_UNSC_UH_144S_Falcon_DAP;
	class PB_Falcon_Support_DAP : OPTRE_UNSC_UH_144S_Falcon_DAP {
		author = "F66th Pebbles";
		displayName = "Falcon Support, DAP";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";

		armor = 90;
	};

	//Split's Pelican (Foundries)

	class Splits_UNSC_D77_TC_Pelican;
	class PB_Pelican_D77TC : Splits_UNSC_D77_TC_Pelican {
		author = "F66th Pebbles";
		displayName = "D77 TC Pelican";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";

		armor = 1000;
	};

	//Nightingale a140 (add ace repair perms)

	class DMNS_UNSC_Nightingale;
	class PB_Nightingale_Resupply : DMNS_UNSC_Nightingale {
		author = "F66th Pebbles";
		displayName = "Supplyingale";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";
		ace_repair_canRepair = 1;
		engineer = 1;
		transportRepair = 2e+08;
		supplyRadius = 25;
		transportAmmo = 1e+12;
		secondaryExplosion = 10000;
		transportFuel = 1e+12;
		fuelExplosionPower = 1;

		armor = 210;
	};

	//Scorpian MBT a850


	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class HitPoints;
		class CargoTurret;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
	};
	class MBT_01_base_F : Tank_F
	{
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets {};
			};
		};
	};
	class B_MBT_01_base_F : MBT_01_base_F {};
	class B_MBT_01_cannon_F : B_MBT_01_base_F
	{
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class DMNS_M808B : B_MBT_01_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets;
				class CommandersTurret;
			};
		};
	};
	class PB_MBT : DMNS_M808B
	{
		class SimpleObject
		{
			eden = 1;
			animate[] = { {"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0},{"wheel_podkolol3",0},{"wheel_podkolol4",0},{"wheel_podkolol5",0},{"wheel_podkolol6",0},{"wheel_podkolop2",0},{"wheel_podkolop3",0},{"wheel_podkolop4",0},{"wheel_podkolop5",0},{"wheel_podkolop6",0},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"maingunoptics",0.17},{"maingunint",0.17},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"drivingwheel",0},{"indicatorspeed_mfd_driver",0},{"indicatorrpm",0.1},{"indicatorrpm_mfd_driver",0.1},{"lights_driver",0.1},{"lights_driver_off",0.1},{"lights_turret",0.1},{"dmg_com_halo_unhide",0.1},{"cannon_ready_light",0},{"engine_damage_indicator",0},{"main_gun_damage_indicator",0},{"track_damage_indicator",0},{"pedal_thrust",0},{"pedal_brake",0},{"indicatortempwater_mfd_driver",0},{"indicatorfuel_mfd_driver",1},{"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_com_turret_mfd_driver",0},{"indicator_com_turret_counter_mfd_driver",0},{"indicator_hull_direction_mfd_com",0},{"indicator_main_turret_mfd_com",0},{"indicator_main_turret_onscreen_com",0},{"indicator_com_turret_mfd_com",0},{"indicator_com_turret_onscreen_com",0},{"indicator_com_turret_counter_mfd_com",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_turret_mfd_gunner",0},{"indicator_com_turret_counter_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_tracks",0},{"indicator_turret_damage_hull",0},{"lights_turret2",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_track",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_comturret",0},{"hide_mfd_and_pip_screen_driver",1},{"hide_mfd_and_pip_screen_gunner",1},{"hide_mfd_elements",1},{"turret_control_x",0},{"turret_control_y",0},{"com_turret_control_x",0},{"com_turret_control_y",0},{"zaslehrot",0},{"cannon_muzzle_flash",0},{"zaslehrot_cannon",781},{"commander_muzzleflash_rot",380},{"commander_gun_recoil",0},{"commander_gun_belt_1",0},{"commander_gun_belt_2",0},{"commander_gun_belt_3",0},{"damage_era_front_hide",0},{"damage_camonet_front_hide",0},{"damage_era_left_1a_hide",0},{"damage_era_left_1b_hide",0},{"damage_camonet_left_1a_hide",0},{"damage_camonet_left_1b_hide",0},{"damage_era_left_2a_hide",0},{"damage_era_left_2b_hide",0},{"damage_camonet_left_2a_hide",0},{"damage_camonet_left_2b_hide",0},{"damage_era_left_3a_hide",0},{"damage_era_left_3b_hide",0},{"damage_camonet_left_3a_hide",0},{"damage_camonet_left_3b_hide",0},{"damage_era_left_4_hide",0},{"damage_camonet_left_4_hide",0},{"damage_era_right_1_hide",0},{"damage_camonet_right_1_hide",0},{"damage_era_right_2a_hide",0},{"damage_era_right_2b_hide",0},{"damage_camonet_right_2a_hide",0},{"damage_camonet_right_2b_hide",0},{"damage_era_right_3a_hide",0},{"damage_era_right_3b_hide",0},{"damage_camonet_right_3a_hide",0},{"damage_camonet_right_3b_hide",0},{"damage_era_right_4_hide",0},{"damage_camonet_right_4_hide",0},{"damage_era_top_front_hide",0},{"damage_camonet_top_front_hide",0},{"damage_era_top_left_hide",0},{"damage_camonet_top_left_hide",0},{"damage_era_top_right_hide",0},{"damage_camonet_top_right_hide",0} };
			hide[] = { "clan","zasleh","commander_muzzleflash","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni" };
			verticalOffset = 2.511;
			verticalOffsetWorld = -0.215;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		author = "F66th Pebbles";
		displayName = "M808B MBT";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Tanks";

		hasDriver = -1;

		maxSpeed = 45;

		forceInGarage = 1;
		weapons[] = { "CMFlareLauncher","SmokeLauncher","Laserdesignator_pilotCamera" };
		magazines[] = { "168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
		ejectDamageLimit = 0.99;
		smokeLauncherAngle = 360;
		smokeLauncherGrenadeCount = 16;
		smokeLauncherOnTurret = 1;
		smokeLauncherVelocity = 14;
		irScanGround = 0;
		irScanRangeMax = 10000;
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
		radarType = 2;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		incomingMissileDetectionSystem = 16;
		LockDetectionSystem = 16;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets {};
				isCopilot = 1;
				CanEject = 0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "OsaHlavnen";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev = -12;
				maxElev = 38;
				initElev = 0;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				gunnerAction = "DMNS_M808B_Gunner";
				gunnerInAction = "DMNS_M808B_Gunner";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				precisegetinout = 1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments = "Compartment1";
				hideWeaponsGunner = 1;
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				stabilizedInAxes = 3;
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500 };
				discreteDistanceInitIndex = 5;
				showAllTargets = 4;
				playerPosition = 3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "turret_control";
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				weapons[] = { "PB_90mm_Smoothbore","DMNS_M247T_Coax","SmokeLauncher" };
				magazines[] = { "DMNS_64Rnd_90mm_APBC","DMNS_32Rnd_90mm_SAPHE","DMNS_32Rnd_90mm_HEAT","OPTRE_10Rnd_90mm_S1","DMNS_500Rnd_127x99_Mag_Tracer","DMNS_500Rnd_127x99_Mag_Tracer","DMNS_500Rnd_127x99_HE_Mag_Tracer","DMNS_500Rnd_127x99_HE_Mag_Tracer","SmokeLauncherMag" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				castGunnerShadow = 1;
				startEngine = 1;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				LODTurnedIn = 1100;
				lodturnedout = 1100;
				class HitPoints
				{
					class HitTurret
					{
						armor = 4.5;
						material = -1;
						name = "otocVez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 4.5;
						material = -1;
						name = "otocHlaven";
						visual = "Hlaven";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow : Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class CommandersTurret : MainTurret
			{
				disableSoundAttenuation = 1;
				isCopilot = 0;
				showAsCargo = 1;
				CanEject = 1;
				startEngine = 0;
				proxyType = "CPCargo";
				proxyIndex = 9;
				maxTurn = 90;
				minTurn = -180;
				cargoCompartments[] = { "Compartment9" };
				gunnerCompartments = "";
				gunnerName = "Front Gunner";
				gunnerLeftHandAnimName = "commander_gun";
				gunnerRightHandAnimName = "commander_gun";
				body = "commandersturret";
				gun = "commandersgun";
				turretAxis = "commander_turret_axis";
				gunAxis = "commander_gun_axis";
				animationSourceBody = "commandersturret";
				animationSourceGun = "commandersgun";
				selectionFireAnim = "zasleh3";
				weapons[] = { "DMNS_M247H2_Coax" };
				magazines[] = { "DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer" };
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				gunnerAction = "DMNS_M808B_Commander";
				gunnerInAction = "DMNS_M808B_Commander";
				LODTurnedIn = 1000;
				lodturnedout = 1000;
				LODOpticsIn = 0;
				gunBeg = "usti hlavne3";
				gunEnd = "konec hlavne3";
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				commanding = -2;
				primaryGunner = 0;
				primaryObserver = 0;
				optics = 1;
				stabilizedInAxes = 3;
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
				discreteDistanceInitIndex = 2;
				memoryPointGun = "usti hlavne3";
				turretInfoType = "RscWeaponZeroing";
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				class HitPoints
				{
					class HitComTurret
					{
						armor = 4.5;
						material = -1;
						name = "Commander_Turret";
						visual = "Commander_Turret";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitComGun
					{
						armor = 4.5;
						material = -1;
						name = "Commander_Gun";
						visual = "Commander_Gun";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics : ViewOptics
				{
					visionMode[] = { "Normal","NVG","TI" };
				};
				class ViewGunner : ViewGunner {};
			};
		};

	};


	//Basilisk
	class B_MBT_01_arty_F;
	class PB_Basilisk_155mm : B_MBT_01_arty_F
	{
		author = "[F66th] Pebbles";
		scope = 2;
		scopeCurator = 2;
		displayName = "[F66th] Basilisk";
		faction = "PB_Bluefor_Faction";
		crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
		side = 1;
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Artillery";
		vehicleClass = "Armored";
		ace_hunterkiller[] = { {{0},3},{{0,0},3} };
		

		hasDriver = -1;

		forceInGarage = 1;

		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_OPTRE_60Rnd_762x51_Mag_AP
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_AP";
				count = 5;
			};
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_MEU_Biofoam_Light
			{
				name = "MEU_Biofoam_Light";
				count = 5;
			};
		};
		class textureSources : textureSources
		{
			class color66th
			{
				displayName = "Basilisk";
				author = "[F66th] Pebbles";
				textures[] = {
					"\F66th_Vehicles\data\Basilisk\Basilisk_Body.paa",
					"\F66th_Vehicles\data\Basilisk\Basilisk_155mm.paa",
					"\F66th_Vehicles\data\Basilisk\Basilisk_AGL",
					"\F66th_Vehicles\data\Basilisk\camonet_greenbeige_co.paa"
				};
			};
		};
		hiddenSelectionsTextures[] = {
			"\F66th_Vehicles\data\Basilisk\Basilisk_Body.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_155mm.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_AGL",
			"\F66th_Vehicles\data\Basilisk\camonet_greenbeige_co.paa"
		};
		textureList[] = {"color66th",1};
	};




};
