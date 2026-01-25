class CfgPatches
{
	class F66th_Hellwalkers
	{
		units[] = 
		{
			"PB_M511_Springbok_APC",
			"PB_M511_Springbok_MGS",
			"PB_M511_Springbok_AA",
			"PB_M511_Springbok_IFV",
		};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {};
		author = "F66th Pebbles";
		authors[] = { "F66th Pebbles" };
	};
};
class CfgFactionClasses
{
	class PB_Bluefor_Faction
	{
		displayName = "[F66th] Hellwalkers";
		priority = 1;
		side = 1;
		icon = "\F66th_Armor\data\Icons\F66th.paa";
	};
};
class CfgEditorCategories
{
	class PB_Bluefor_F
	{
		displayname = "[F66th] Hellwalkers";
		priority = 1;
		side = 1;
	};
	class CfgEditorSubcategories
	{
		class PB_EditorSubcategory_MenMAR
		{
			displayName = "Men";
		};
		class PB_EditorSubcategory_Cars
		{
			displayName = "Light Vehicles";
		};
		class PB_EditorSubcategory_Armored
		{
			displayName = "Armored Vehicles";
		};
		class PB_EditorSubcategory_Air
		{
			displayName = "Aircraft";
		};
	};
};