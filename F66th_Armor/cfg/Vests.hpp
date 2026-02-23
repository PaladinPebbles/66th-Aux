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
                    "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_co.paa",       //camo1 (H3 Upper Armor)
                    "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_co.paa",       //camo2 (H3 Lower Armor)
                    "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_co.paa",//camo3 (Thigh Pouch)
                    "F66th_Armor\Hellwalkers\Vests\Base\Reach_Armor_Upper_co.paa",    //camo4 (Reach Upper Armor)
                    "F66th_Armor\Hellwalkers\Vests\Base\Reach_Armor_Lower_co.paa",    //camo5 (Reach Lower Armor)
                    "F66th_Armor\Hellwalkers\Vests\Base\Canisters_co.paa",      //camo6 (Canisters)
                    "F66th_Armor\Hellwalkers\Vests\Base\Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
                    "F66th_Armor\Hellwalkers\Vests\Base\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
                    "F66th_Armor\Hellwalkers\Vests\Base\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
			        "F66th_Armor\Hellwalkers\Vests\Base\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Ahriman_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Ahriman_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Ahriman\Ahriman_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Ahriman\Ahriman_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
class PB_Chronos_Sniper_Vest : PB_M56R_Vest
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Chronos (Sniper)";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Chronos";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\CustomGear\Chronos\Chronos_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Fixer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Fixer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Fixer\Fixer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Fixer\Fixer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Komoto_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Komoto_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Komoto_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Komoto\Komoto_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Komoto\Komoto_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Komoto_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Komoto_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Nyquil_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Nyquil_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Nyquil\Nyquil_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Nyquil\Nyquil_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\CustomGear\Nyquil\Nyquil_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\CustomGear\Pebbles\Pebbles_Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\CustomGear\Reaper\Reaper_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\CustomGear\Revan\Revan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
class PB_Spinny_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Spinny M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    class XtdGearInfo
    {
        model = "PB_Custom_Vests";
        Variant = "Spinny";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\CustomGear\Spinny\Spinny_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Base\Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\CustomGear\Trim\Trim_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\CustomGear\Trim\Trim_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\CustomGear\Trim\Trim_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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

//Angels
class PB_Angelic_M56R_Vest : PB_Vest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Angelic M56R Combat Armor";
    model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Angelic_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Custom\Angelic_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\H3_ODST\Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\OtherFactions\AladsAngels\Vests\Angelic_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\OtherFactions\AladsAngels\Vests\Angelic_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Base\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Base\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Base\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Base\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\H3_ODST\Abbadon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Abbadon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Abbadon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\H3_ODST\Asmo_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Asmo_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Asmo\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\H3_ODST\Azazel_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Azazel_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Azazel\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\H3_ODST\Belphegor_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Belphegor_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Belphegor\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\H3_ODST\Cerberus_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Cerberus_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Cerberus\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\H3_ODST\Leviathan_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Leviathan_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Leviathan\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\H3_ODST\Lilith_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Lilith_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lilith\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\H3_ODST\Lucifer_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Lucifer_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Lucifer\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\H3_ODST\Mammon_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Mammon_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\Mammon\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Recon";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Light";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Sniper";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "CQB";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
        Variant = "Radio";
    };
    hiddenSelectionsTextures[] =
    {
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Upper_M56_CO.paa",       //camo1 (H3 Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Lower_M56_CO.paa",       //camo2 (H3 Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\H3_ODST\SCP_Pouch_CO.paa",//camo3 (Thigh Pouch)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Upper_R_co.paa",    //camo4 (Reach Upper Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Lower_R_co.paa",    //camo5 (Reach Lower Armor)
            "F66th_Armor\Hellwalkers\Vests\SCP\Canisters_CO.paa",      //camo6 (Canisters)
            "F66th_Armor\Hellwalkers\Vests\SCP\Vents_CO.paa",   //camo7 (Forearm Vents)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\SCP_CQB_co.paa",  //camo9 (CQB Shoulders)
            "F66th_Armor\Hellwalkers\Vests\SCP\Radio_CO.paa" //camo10 (Shoulder Radio)
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