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
			"details",		//Details
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

	class DMNS_M808B_F;
	class PB_MBT : DMNS_M808B_F {
		author = "F66th Pebbles";
		displayName = "M808B MBT";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Tanks";

		//test

		hasDriver = -1;

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


		armor = 1275;
	};


};

class CfgRecoils
{
	class funny_recoil
	{
		muzzleOuter[] = { 0.3, 1.0, 0.3, 0.2 }; // x, y, a, b
		kickBack[] = { 50.0, 60.00 };
		permanent = 0.1;
		temporary = 0.01;
	};
};
class cfgweapons {
	class DMNS_105mm_M511;
	class PB_YeetCannon : DMNS_105mm_M511
	{
		recoil = "funny_recoil";
	};
};