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
		
		weapons[] = { "PB_AMOS_155mm" };

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
		hiddenSelections[] = { "Camo1","Camo2","Camo3","CamoNet" };
		hiddenSelectionsTextures[] = {
			"\F66th_Vehicles\data\Basilisk\Basilisk_Body.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_155mm.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_AGL",
			"\F66th_Vehicles\data\Basilisk\camonet_greenbeige_co.paa"
		};
		textureList[] = {"color66th",1};

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
	//mortar
	class Mode_SemiAuto
	{
		sounds[] = { "StandardSound","SilencedSound" };
		displayName = "$STR_DN_MODE_SEMIAUTO";
		textureType = "semi";
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		aiDispersionCoefY = 1.7;
		aiDispersionCoefX = 1.4;
		soundBurst = 0;
		requiredOpticType = -1;
		aiRateOfFire = 2.0;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
	};
	class Mode_Burst : Mode_SemiAuto
	{
		displayName = "$STR_DN_MODE_BURST";
		textureType = "burst";
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		aiDispersionCoefY = 2.4;
		aiDispersionCoefX = 1.9;
		soundBurst = 0;
	};
	class CannonCore;
	class LauncherCore;
	//155mm
	class PB_AMOS_155mm : CannonCore
	{
		scope = 1;
		displayName = "PB_mortar_155mm_AMOS0";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500 };
			soundBegin[] = { "begin1",1 };
		};
		reloadSound[] = { "A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.622778,1,15 };
		reloadTime = 1;
		magazineReloadTime = 3;
		autoReload = 1;
		canLock = 0;
		magazines[] = { "32Rnd_155mm_Mo_shells","32Rnd_155mm_Mo_shells_O","6Rnd_155mm_Mo_smoke","6Rnd_155mm_Mo_smoke_O","2Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided_O","2Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG_O","6Rnd_155mm_Mo_mine","6Rnd_155mm_Mo_mine_O","2Rnd_155mm_Mo_Cluster","2Rnd_155mm_Mo_Cluster_O","6Rnd_155mm_Mo_AT_mine","6Rnd_155mm_Mo_AT_mine_O" };
		modes[] = { "Single1","Single2","Single3","Single4","Single5","Burst1","Burst2","Burst3","Burst4","Burst5" };
		class GunParticles
		{
			class Effect1
			{
				effectName = "ArtilleryFired1";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
			class Effect2
			{
				effectName = "ArtilleryFiredL";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
			class Effect3
			{
				effectName = "ArtilleryFiredR";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
		};
		class Single1 : Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500 };
				soundBegin[] = { "begin1",1 };
			};
			reloadSound[] = { "A3\sounds_f\dummysound",1.0,1,20 };
			reloadTime = 1;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 200000;
			maxRangeProbab = 0.01;
		};
		class Single2 : Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge = 0.3;
		};
		class Single3 : Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge = 0.48;
		};
		class Single4 : Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge = 0.8;
		};
		class Single5 : Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge = 1;
		};
		class Burst1 : Mode_Burst
		{
			showToPlayer = 1;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst10";
			burst = 6;
			sounds[] = { "StandardSound" };
			class StandardSound
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500 };
				soundBegin[] = { "begin1",1 };
			};
			reloadSound[] = { "A3\sounds_f\dummysound",1.0,1,20 };
			soundBurst = 0;
			reloadTime = 3;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 20000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2 : Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3 : Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4 : Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5 : Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};




	class DMNS_105mm_M511;
	class PB_YeetCannon : DMNS_105mm_M511
	{
		recoil = "funny_recoil";
	};









};