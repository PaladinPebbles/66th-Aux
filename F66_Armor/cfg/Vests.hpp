//F66th Vest cfg
class V_PlateCarrier1_rgr;
class VestItem;


class PB_Vest_Base: V_PlateCarrier1_rgr
{
		scope=1;
		scopeArsenal=1;
		author="F66th Pebbles";
		displayName="[F66th] Base Vest";
		model="";
		picture="\F66th_Armor\data\Icons\F66th.paa";
		hiddenSelections[]=
		{
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              "Reach_Armor_Upper",
              "Reach_Armor_Lower",
              "Forearm_Vent_Left",
              "Forearm_Vent_Right",
              "Canisters"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
                  "camo1",
                  "camo2",
                  "camo3",
                  "camo4",
                  "camo5",
                  "camo6",
                  "camo7",
                  "camo8",
                  "camo9",
                  "camo10",
                  "H3_Forearm_Left",
                  "H3_Forearm_Right",
                  "Reach_Forearm_Left",
                  "Reach_Forearm_Right",
                  "H3_Pauldron_Left",
                  "H3_Pauldron_Right",
                  "Reach_Pauldron_Left",
                  "Reach_Pauldron_Right",
                  "Reach_Shoulder_Radio_Left",
                  "Reach_Shoulder_Radio_Right",
                  "Reach_Sniper_Pauldron_Left",
                  "Reach_Sniper_Pauldron_Right",
                  "Reach_CQB_Pauldron_Left",
                  "Reach_CQB_Pauldron_Right",
                  "Thigh_Pouch",
                  "H3_Armor_Upper",
                  "H3_Armor_Lower",
                  "Reach_Armor_Upper",
                  "Reach_Armor_Lower",
                  "Forearm_Vent_Left",
                  "Forearm_Vent_Right",
                  "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
                    "F66th_Armor\data\Vests\H3_ODST\Upper_M56_co.paa",       //camo1 (H3 Upper Armor)
                    "F66th_Armor\data\Vests\H3_ODST\Lower_M56_co.paa",       //camo2 (H3 Lower Armor)
                    "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_co.paa",//camo3 (Thigh Pouch)
                    "F66th_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",    //camo4 (Reach Upper Armor)
                    "F66th_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",    //camo5 (Reach Lower Armor)
                    "F66th_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
                    "F66th_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
                    "F66th_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
                    "F66th_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
			        "F66th_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
			};
			uniformModel="";
			containerClass="Supply200";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=25;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=20;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
		    };
    	};
};

//Base
class PB_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_M56R_Recon_Vest : PB_M56R_Vest
{
    displayName = "[F66th] M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_M56R_Light_Vest : PB_M56R_Vest
{
    displayName = "[F66th] M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_M56R_Sniper_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_M56R_CQB_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_M56R_Radio_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_M56R_Medic_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Custom
class PB_Trim_CQB_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] The Marshal's Best";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Trim";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Trim_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Trim_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Custom\Trim_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Revan_CQB_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Revan CQB";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply400";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Reaper_Sniper_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reaper (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Reaper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Reaper_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Reaper_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Reaper_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Custom\Reaper_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Pebbles_Radio_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Pebbles (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Pebbles";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\custom\Pebbles_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\custom\Pebbles_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\custom\Pebbles_Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\custom\Pebbles_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\custom\Pebbles_Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Ahriman_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Ahriman M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Ahriman";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Custom\Ahriman_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Custom\Ahriman_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Ahriman_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Ahriman_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Nyquil_M56R_CQB_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Nyquil (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Nyquil";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Custom\Nyquil_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Custom\Nyquil_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Nyquil_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Nyquil_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Custom\Nyquil_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Revan_Sniper_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Revan (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Revan";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Custom\Revan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Angelic_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Angelic M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Custom\Angelic_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Custom\Angelic_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Angelic_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Angelic_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Komoto_M56R_Recon_Vest : PB_M56R_Vest
{
    displayName = "[F66th] Komoto M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Komoto";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Custom\Komoto_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Custom\Komoto_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Komoto_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Komoto_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Komoto_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Komoto_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Komoto_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Spinny_Sniper_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Spinny (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Spinny";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Spinny_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Spinny_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Spinny_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Custom\Spinny_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Fixer_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Fixer M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Fixer";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Custom\Fixer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Custom\Fixer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Custom\Fixer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Custom\Fixer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};

//Abbadon
class PB_Abbadon_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_Recon_Vest : PB_Abbadon_M56R_Vest
{
    displayName = "[F66th] Abbadon M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_Light_Vest : PB_Abbadon_M56R_Vest
{
    displayName = "[F66th] Abbadon M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_Sniper_Vest : PB_Abbadon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_CQB_Vest : PB_Abbadon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_Radio_Vest : PB_Abbadon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Abbadon_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Abbadon_M56R_Medic_Vest : PB_Abbadon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Abbadon M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Asmo
class PB_Asmo_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_Recon_Vest : PB_Asmo_M56R_Vest
{
    displayName = "[F66th] Asmodeus M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_Light_Vest : PB_Asmo_M56R_Vest
{
    displayName = "[F66th] Asmodeus M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_Sniper_Vest : PB_Asmo_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_CQB_Vest : PB_Asmo_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_Radio_Vest : PB_Asmo_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Asmo_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Asmo_M56R_Medic_Vest : PB_Asmo_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Asmodeus M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Azazel
class PB_Azazel_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Azazel M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_Recon_Vest : PB_Azazel_M56R_Vest
{
    displayName = "[F66th] Azazel M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_Light_Vest : PB_Azazel_M56R_Vest
{
    displayName = "[F66th] Azazel M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_Sniper_Vest : PB_Azazel_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Azazel M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_CQB_Vest : PB_Azazel_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Azazel M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_Radio_Vest : PB_Azazel_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Azazel M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Azazel_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Azazel_M56R_Medic_Vest : PB_Azazel_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Azazel M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Belphegor
class PB_Belphegor_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Belphegor M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_Recon_Vest : PB_Belphegor_M56R_Vest
{
    displayName = "[F66th] Belphegor M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_Light_Vest : PB_Belphegor_M56R_Vest
{
    displayName = "[F66th] Belphegor M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_Sniper_Vest : PB_Belphegor_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Belphegor M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_CQB_Vest : PB_Belphegor_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Belphegor M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_Radio_Vest : PB_Belphegor_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Belphegor M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Belphegor_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Belphegor_M56R_Medic_Vest : PB_Belphegor_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Belphegor M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Cerberus
class PB_Cerberus_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cerberus M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_Recon_Vest : PB_Cerberus_M56R_Vest
{
    displayName = "[F66th] Cerberus M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_Light_Vest : PB_Cerberus_M56R_Vest
{
    displayName = "[F66th] Cerberus M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_Sniper_Vest : PB_Cerberus_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cerberus M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_CQB_Vest : PB_Cerberus_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cerberus M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_Radio_Vest : PB_Cerberus_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cerberus M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Cerberus_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Cerberus_M56R_Medic_Vest : PB_Cerberus_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cerberus M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Leviathan
class PB_Leviathan_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Leviathan M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_Recon_Vest : PB_Leviathan_M56R_Vest
{
    displayName = "[F66th] Leviathan M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_Light_Vest : PB_Leviathan_M56R_Vest
{
    displayName = "[F66th] Leviathan M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_Sniper_Vest : PB_Leviathan_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Leviathan M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_CQB_Vest : PB_Leviathan_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Leviathan M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_Radio_Vest : PB_Leviathan_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Leviathan M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Leviathan_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Leviathan_M56R_Medic_Vest : PB_Leviathan_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Leviathan M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Lilith
class PB_Lilith_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lilith M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_Recon_Vest : PB_Lilith_M56R_Vest
{
    displayName = "[F66th] Lilith M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_Light_Vest : PB_Lilith_M56R_Vest
{
    displayName = "[F66th] Lilith M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_Sniper_Vest : PB_Lilith_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lilith M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_CQB_Vest : PB_Lilith_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lilith M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_Radio_Vest : PB_Lilith_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lilith M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lilith_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Lilith_M56R_Medic_Vest : PB_Lilith_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lilith M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};


//Lucifer
class PB_Lucifer_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lucifer M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_Recon_Vest : PB_Lucifer_M56R_Vest
{
    displayName = "[F66th] Lucifer M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_Light_Vest : PB_Lucifer_M56R_Vest
{
    displayName = "[F66th] Lucifer M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_Sniper_Vest : PB_Lucifer_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lucifer M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_CQB_Vest : PB_Lucifer_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lucifer M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_Radio_Vest : PB_Lucifer_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lucifer M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Lucifer_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Lucifer_M56R_Medic_Vest : PB_Lucifer_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Lucifer M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};

//Mammon
class PB_Mammon_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Mammon M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_Recon_Vest : PB_Mammon_M56R_Vest
{
    displayName = "[F66th] Mammon M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_Light_Vest : PB_Mammon_M56R_Vest
{
    displayName = "[F66th] Mammon M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_Sniper_Vest : PB_Mammon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Mammon M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_CQB_Vest : PB_Mammon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Mammon M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_Radio_Vest : PB_Mammon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Mammon M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Mammon_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_Mammon_M56R_Medic_Vest : PB_Mammon_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Mammon M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
//SCP
class PB_SCP_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SCP M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_SCP_M56R_Recon_Vest : PB_SCP_M56R_Vest
{
    displayName = "[F66th] SCP M56R Combat Armor (Recon)";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R_Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            "Reach_CQB_Pauldron_Left",
                            "Reach_CQB_Pauldron_Right",
                            "Thigh_Pouch",
                            "H3_Armor_Upper",
                            "H3_Armor_Lower",
                            //              "Reach_Armor_Upper",
                            //              "Reach_Armor_Lower",
                            //              "Forearm_Vent_Left",
                            //              "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_SCP_M56R_Light_Vest : PB_SCP_M56R_Vest
{
    displayName = "[F66th] SCP M56R Combat Armor (Light)";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R_Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              "Reach_Forearm_Left",
              "Reach_Forearm_Right",
              "H3_Pauldron_Left",
              "H3_Pauldron_Right",
              "Reach_Pauldron_Left",
              "Reach_Pauldron_Right",
              "Reach_Shoulder_Radio_Left",
              "Reach_Shoulder_Radio_Right",
              "Reach_Sniper_Pauldron_Left",
              "Reach_Sniper_Pauldron_Right",
              "Reach_CQB_Pauldron_Left",
              "Reach_CQB_Pauldron_Right",
              "Thigh_Pouch",
              "H3_Armor_Upper",
              "H3_Armor_Lower",
              //              "Reach_Armor_Upper",
              //              "Reach_Armor_Lower",
                            "Forearm_Vent_Left",
                            "Forearm_Vent_Right",
                            //              "Canisters"
        };
    };
};
class PB_SCP_M56R_Sniper_Vest : PB_SCP_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SCP M56R Combat Armor (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R_Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            //              "Reach_Sniper_Pauldron_Left",
                            //              "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_SCP_M56R_CQB_Vest : PB_SCP_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SCP M56R Combat Armor (CQB)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R_CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            "Reach_Pauldron_Left",
                            "Reach_Pauldron_Right",
                            "Reach_Shoulder_Radio_Left",
                            "Reach_Shoulder_Radio_Right",
                            "Reach_Sniper_Pauldron_Left",
                            "Reach_Sniper_Pauldron_Right",
                            //              "Reach_CQB_Pauldron_Left",
                            //              "Reach_CQB_Pauldron_Right",
                                          "Thigh_Pouch",
                                          "H3_Armor_Upper",
                                          "H3_Armor_Lower",
                                          //              "Reach_Armor_Upper",
                                          //              "Reach_Armor_Lower",
                                          //              "Forearm_Vent_Left",
                                          //              "Forearm_Vent_Right",
                                          //              "Canisters"
        };
    };
};
class PB_SCP_M56R_Radio_Vest : PB_SCP_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SCP M56R Combat Armor (Operator)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_SCP_Vests";
        Variant = "M56R_Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          //              "Reach_Shoulder_Radio_Right",
                                                        "Reach_Sniper_Pauldron_Left",
                                                        "Reach_Sniper_Pauldron_Right",
                                                        "Reach_CQB_Pauldron_Left",
                                                        "Reach_CQB_Pauldron_Right",
                                                        "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};
class PB_SCP_M56R_Medic_Vest : PB_SCP_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] SCP M56R Combat Armor (Medic)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Standard_Vests";
        Variant = "M56R_Medic";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\data\Vests\H3_ODST\Squads\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\data\Vests\H3_ODST\Addons\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\data\Vests\R_ODST\Squads\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\data\Vests\R_ODST\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\data\Vests\R_ODST\Addons\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\data\Vests\R_ODST\Addons\Sniper\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\CQB\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\data\Vests\R_ODST\Addons\Radio\Radio_CO.paa" //camo10 (Shoulder Radio)
    };
    class ItemInfo : ItemInfo
    {
        vestType = "Rebreather";
        uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
        containerClass = "Supply200";
        hiddenSelections[] =
        {
              "camo1",
              "camo2",
              "camo3",
              "camo4",
              "camo5",
              "camo6",
              "camo7",
              "camo8",
              "camo9",
              "camo10",
              "H3_Forearm_Left",
              "H3_Forearm_Right",
              //              "Reach_Forearm_Left",
              //              "Reach_Forearm_Right",
                            "H3_Pauldron_Left",
                            "H3_Pauldron_Right",
                            //              "Reach_Pauldron_Left",
                            //              "Reach_Pauldron_Right",
                                          "Reach_Shoulder_Radio_Left",
                                          "Reach_Shoulder_Radio_Right",
                                          "Reach_Sniper_Pauldron_Left",
                                          "Reach_Sniper_Pauldron_Right",
                                          "Reach_CQB_Pauldron_Left",
                                          "Reach_CQB_Pauldron_Right",
                                          //              "Thigh_Pouch",
                                                        "H3_Armor_Upper",
                                                        "H3_Armor_Lower",
                                                        //              "Reach_Armor_Upper",
                                                        //              "Reach_Armor_Lower",
                                                        //              "Forearm_Vent_Left",
                                                        //              "Forearm_Vent_Right",
                                                        //              "Canisters"
        };
    };
};