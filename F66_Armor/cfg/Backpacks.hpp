class B_Kitbag_rgr;
class PB_Backpack_Base: B_Kitbag_rgr
{
    scope = 0;
    scopeArsenal = 0;
    author = "F66th Pebbles";
    displayname = "[F66th] Base Backpack";
    model = "";
    maximumLoad = 250;
    hiddenSelections[]=
    {
        "camo"
    };
};

// Base Pack
class PB_M56S_Rucksack: PB_Backpack_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[F66th] M56S Rucksack";
    model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
    picture="\F66th_Armor\data\Icons\F66th.paa";
    maximumLoad = 350;
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Backpacks\ODST_Rucksack\Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Rucksack\Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Abbadon : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Abbadon (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Abbadon_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Abbadon_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Asmo : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Asmo (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Asmo_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Asmo_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Azazel : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Azazel (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Azazel_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Azazel_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Belphagor : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Belphagor (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Belphegor_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Belphegor_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Cerberus : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Cerberus (Base)";
    maximumLoad = 600;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Cerberus_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Cerberus_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Leviathan : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Leviathan (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Leviathan_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Leviathan_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Lilith : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Lilith (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lilith_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lilith_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Lucifer : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Lucifer (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lucifer_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lucifer_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Mammon : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack Mammon (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Mammon_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Mammon_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_SCP : PB_M56S_Rucksack
{
    displayName = "[F66th] M56S Rucksack SCP (Base)";
    maximumLoad = 400;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\SCP_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\SCP_Backpack_CO.paa"
    };
};

//Medic Variants (Needed)
class PB_M56S_Rucksack_Medic: PB_M56S_Rucksack
{
    displayName="[F66th] M56S Rucksack (Medic)";
    maximumLoad = 400;
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\ODST_Ruck_Medical_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_Green_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Backpack_CO.paa"
    };
};

//LR Variants
class PB_M56S_Rucksack_Radio: PB_M56S_Rucksack
{
    displayName="[F66th] M56S Rucksack Base (LR)";
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
//      "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Backpack_CO.paa"
    };
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
};
class PB_M56S_Rucksack_Abbadon_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Abbadon (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Abbadon_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Abbadon_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Asmo_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Asmodeus (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Asmo_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Asmo_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Azazel_Radio: PB_M56S_Rucksack_Radio
{
    displayName="[F66th] M56S Rucksack Azazel (LR)";
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
//      "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Azazel_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Azazel_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Belphagor_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Belphagor (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Belphegor_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Belphegor_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Cerberus_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Cerberus (LR)";
    maximumLoad = 600;
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Cerberus_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Cerberus_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Leviathan_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Leviathan (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Leviathan_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Leviathan_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Lilith_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Lilith (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lilith_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lilith_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Lucifer_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Lucifer (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lucifer_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Lucifer_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Mammon_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack Mammon (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Mammon_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Mammon_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_SCP_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] M56S Rucksack SCP (LR)";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\SCP_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\SCP_Backpack_CO.paa"
    };
};

//Custom LR
class PB_M56S_Rucksack_Trim_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] TrimPack";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Trim_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Trim_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Pebbles_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] PebPack";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Pebbles_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Pebbles_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Spinny_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] SpinPack";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Spinny_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Spinny_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Ahriman_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] Radio Ahriman";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Ahriman_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Ahriman_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Reaper_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] Radio Reaper";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Reaper_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Reaper_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Revan_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] Radio Revan";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Revan_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Revan_Backpack_CO.paa"
    };
};
class PB_M56S_Rucksack_Angelic_Radio : PB_M56S_Rucksack_Radio
{
    displayName = "[F66th] Radio Angelic";
    hiddenSelections[] =
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        //      "Radio"
    };
    hiddenSelectionsTextures[] =
    {
        "F66th_Armor\data\Backpacks\ODST_Backpack\Angelic_Backpack_CO.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Attachments\Backpack_Radio_ODST_co.paa",
        "F66th_Armor\data\Backpacks\ODST_Backpack\Angelic_Backpack_CO.paa"
    };
};