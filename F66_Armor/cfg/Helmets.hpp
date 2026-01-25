/*
    Misriah Armory Helmets Config
*/
//Standard Helmets
class PB_Helmet_Base: ItemCore
{
    scope=1;
    scopeArsenal=1;
    author="F66th Pebbles";
    ace_hearing_protection=1;
    ace_hearing_hasEHP = 1;
    displayName="[F66th] Base Helmet";
    model="";
    picture="";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]={};
    class ItemInfo: HeadgearItem
    {
        uniformModel="";
        mass=40;
        modelSides[]={6};
        allowedSlots[]={801,901,701,605};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]={};
        class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
    };
};

/// Scout Helmets (None)
class PB_M56_Scout_Helmet: PB_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M65-S Helmet";
    model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    picture="\F66th_Armor\data\Icons\F66th.paa"; //TODO: Update this
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Helmets\H4_Scout\H4_Scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\H4_Scout_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model="F66th_M56_Scout_Helmet";
        Camo="Default";
        Visor_Color="Base";
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
};
class PB_Trim_Scout_Helmet : PB_Helmet_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Marshal's Helmet";
    model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    picture = "\F66th_Armor\data\Icons\F66th.paa"; //TODO: Update this
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\H4_Scout\Trim_H4scout_CO.paa",
        "F66th_Armor\data\Helmets\H4_Scout\Trim_H4scout_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Trim"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
};

/// ODST Reach Helmets (ALL)
class PB_HRODST_Helmet:PB_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S-R Helmet";
    model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture="\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model="PB_Base_Helmets";
        Variant = "HR ODST"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};
class PB_HRODST_Helmet_Abbadon : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Abbadon)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Abbadon_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Abbadon_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Abbadon_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Asmo : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Asmo)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Asmo_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Asmo_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Asmo_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Azazel : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Azazel)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Azazel_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Azazel_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Azazel_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Belphegor : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Belphegor)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Belphegor_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Belphegor_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Belphegor_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Cerberus : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Cerberus)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Cerberus_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Cerberus_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Cerberus_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Leviathan : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Leviathan)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Leviathan_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Leviathan_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Leviathan_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Lilith : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Lilith)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Lilith_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Lilith_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Lilith_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Lucifer : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Lucifer)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Lucifer_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Lucifer_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Lucifer_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_Mammon : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (Mammon)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\Mammon_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\Mammon_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Mammon_Helmets";
        Variant = "HR ODST"
    };
};
class PB_HRODST_Helmet_SCP : PB_HRODST_Helmet
{
    displayName = "[F66th] HR ODST (SCP)";
    ctab_camera = 1;
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Squads\SCP_HR_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Visors\SCP_HR_ODST_Visor_CO.paa"
    };
    class XtdGearInfo
    {
        model = "PB_SCP_Helmets";
        Variant = "HR ODST"
    };
};
// Custom ODST
class PB_HRODST_Helmet_Cat :PB_HRODST_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Cat ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Cat"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Cat_ODST_Helmet_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Cat_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};
class PB_HRODST_Helmet_Ahriman :PB_HRODST_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Ahriman ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Ahriman"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Ahriman_ODST_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Ahriman_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};
class PB_HRODST_Helmet_Reaper :PB_HRODST_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Reaper ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Reaper"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Reaper_ODST_Helmet_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Reaper_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};
class PB_HRODST_Helmet_Komoto :PB_HRODST_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Komoto ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";

    class XtdGearInfo
    {
        model = "PB_Custom_Helmets";
        Variant = "Komoto"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Komoto_ODST_Helmet_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Komoto_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};
class PB_HRODST_Helmet_Angelic :PB_HRODST_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    displayName = "[F66th] Angelic ODST";
    model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    picture = "\PB_Armor\data\Icons\F66th.paa";


    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Angelic_ODST_Helmet_CO.paa",
        "F66th_Armor\data\Helmets\HR_ODST\Custom\Angelic_ODST_Visor_co.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
    };
};

/// EOD Helmets (Split Visor/All)
class PB_M56E_Helmet: PB_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56-E Helmet";
    model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
    picture="\F66th_Armor\data\Icons\F66th.paa"; 
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Helmets\EOD\EOD_co.paa",
        "F66th_Armor\data\Helmets\EOD\EOD_Visor_co.paa"
    };
    class XtdGearInfo
    {
        model = "PB_Base_Helmets";
        Variant = "H3 EOD"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
    };
};

/// CBRN NVG
class G_Spectacles;
class PB_EOD_CBRN_Chronos_NVG : NVGoggles
{
    scope = 2;
    scopeArsenal = 2;
    author = "F66th Pebbles";
    displayName = "[F66th] Chronos CBRN Attachment (NVG)";
    model = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
    hiddenSelections[] =
    {
        "Camo1"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Attachments\CBRN\Chronos_CBRN_CO.paa"
    };
    class ItemInfo
    {
        type = 616;
        hmdType = 3;
        uniformModel = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
        modelOff = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
        mass = 1;
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Attachments\EOD_CBRN\Color_Variants\Olive_CBRN_CO.paa"
        };
    };
};
class MA_EOD_CBRN_Facewear_Attachment : G_Spectacles
{
    scope = 2;
    scopeArsenal = 2;
    author = "Trim";
    identitytypes[] = {};
    displayName = "[66th] Abbadon CBRN Attachment";
    model = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
    hiddenSelections[] =
    {
        "Camo1"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Attachments\EOD_CBRN\Color_Variants\Chronos_CBRN_CO.paa"
    };
};