class XtdGearModels
{
    class CfgWeapons
    {
        cTab_helmetClass_has_HCam[] = { "PB_HRODST_Helmet","PB_HRODST_Helmet_Abbadon","PB_HRODST_Helmet_Asmo","PB_HRODST_Helmet_Azazel","PB_HRODST_Helmet_Cerberus","PB_HRODST_Helmet_Leviathan","PB_HRODST_Helmet_Lilith","PB_HRODST_Helmet_Lucifer"};

// Helmet Selections By Squad
        class PB_Base_Helmets
        {
            label = "[F66th] Helmets";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "AA",
                    "Commando",
                    "CQC",
                    "HR EOD",
                    "EVA",
                    "Grenadier",
                    "Gungnir",
                    "ODST",
                    "JFO",
                    "MP",
                    "Pilot",
                    "Recon",
                    "Scout",
                    "Marine"
                };
            };


        };
        class PB_Unused   
        {
            label = "[F66th] Unused";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "H3EOD",
                    "H4Scout",
                    "SPI"
                };
            };
        };
        class PB_Abbadon_Helmets   
        {
            label = "[F66th] Abbadon Helmets";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
             {
                values[] =
                {
                    "HR EOD",
                    "EVA",
                    "Grenadier",
                    "ODST",
                    "Recon
                };
            };
        };
        class PB_Asmo_Helmets   
        {
            label = "[F66th] Unused";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "H3EOD",
                    "H4Scout",
                    "SPI"
                };
            };
        };

 // Vests Selections By squad

        class PB_Standard_Vests
        {
            label="[F66th] M56 Standard Vests";
            author="F66th Pebbles";
            options[]=
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Abbadon_Vests
        {
            label = "[F66th] M56 Abbadon Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Abbadon
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Abbadon
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Abbadon
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Abbadon
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Abbadon
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Abbadon
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Abbadon
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Abbadon
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Abbadon
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Asmo_Vests
        {
            label = "[F66th] M56 Asmodeus Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56R_Medic_Asmo
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Asmo
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Asmo
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Asmo
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Asmo
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Asmo
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Azazel_Vests
        {
            label = "[F66th] M56 Azazel Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Azazel
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Azazel
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Azazel
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Azazel
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Azazel
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Azazel
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Azazel
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Azazel
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Azazel
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Belphegor_Vests
        {
            label = "[F66th] M56 Belphegor Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Belphegor
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Belphegor
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Belphegor
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Belphegor
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Belphegor
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Belphegor
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Belphegor
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Belphegor
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Belphegor
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Cerberus_Vests
        {
            label = "[F66th] M56 Cerberus Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Cerberus
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Cerberus
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Cerberus
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Cerberus
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Cerberus
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Cerberus
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Cerberus
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Cerberus
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Cerberus
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Leviathan_Vests
        {
            label = "[F66th] M56 Leviathan Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Leviathan
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Leviathan
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Leviathan
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Leviathan
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Leviathan
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Leviathan
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Leviathan
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Leviathan
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Leviathan
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Lilith_Vests
        {
            label = "[F66th] M56 Lilith Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Lilith
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Lilith
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Lilith
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Lilith
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Lilith
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Lilith
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Lilith
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Lilith
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Lilith
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Lucifer_Vests
        {
            label = "[F66th] M56 Lucifer Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Lucifer
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Lucifer
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Lucifer
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Lucifer
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Lucifer
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Lucifer
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Lucifer
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Lucifer
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Lucifer
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_Mammon_Vests
        {
            label = "[F66th] M56 Mammon Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic_Mammon
                {
                    label = "M56S (Medic)";
                };
                class M56S_Recon_Mammon
                {
                    label = "M56S (Recon)";
                };
                class M56S_Light_Mammon
                {
                    label = "M56S (Light)";
                };
                class M56R_Medic_Mammon
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_Mammon
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_Mammon
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_Mammon
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_Mammon
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_Mammon
                {
                    label = "M56R (Sniper)";
                };

            };


        };
        class PB_SCP_Vests
        {
            label = "[F66th] M56 SCP Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56R_Medic_SCP
                {
                    label = "M56R (Medic)";
                };
                class M56R_Recon_SCP
                {
                    label = "M56R (Recon)";
                };
                class M56R_Light_SCP
                {
                    label = "M56R (Light)";
                };
                class M56R_Radio_SCP
                {
                    label = "M56R (Radio)";
                };
                class M56R_CQB_SCP
                {
                    label = "M56R (CQB)";
                };
                class M56R_Sniper_SCP
                {
                    label = "M56R (Sniper)";
                };

            };


        };

        //Customs
        class PB_Custom_Helmets
        {
            label = "[F66th] Custom Helmets";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "Pebbles",
                    "Revan",
                    "Spinny",
                    "Cat",
                    "Navvaro",
                    "Nyquil",
                    "Chronos",
                    "Blue",
                    "Ahriman",
                    "Komoto",
                    "Trim",
                    "Reaper",
                    "Wren",
                    "Revan",
                    "Fixer",
                };

                class Pebbles_EOD_R
                {
                    label = "Pebble's EOD"
                };
                class Spinny_Grenadier
                {
                    label = "Spinny";
                };
                class Cat_HR_ODST
                {
                    label = "Cat";
                };
                class Navvaro_Marine
                {
                    label = "Navvaro";
                };
                class Nyquil_MP
                {
                    label = "Nyquil";
                };
                class Chronos_Gungnir
                {
                    label = "Chronos";
                };
                class Blue_EVA
                {
                    label = "Blue";
                };
                class Ahriman_HR_ODST
                {
                    label = "Ahriman";
                };
                class Komoto_HR_ODST
                {
                    label = "Komoto";
                };
                class Trim_H4Scout
                {
                    label = "Trim";
                };
                class Reaper_HR_ODST
                {
                    label = "Reaper";
                };
                class Wren_AA
                {
                    label = "Wren";
                };
                class Revan_JFO 
                {
                    label = "Revan";
                };
                class Fixer_EOD_R
                {
                    label = "Fixer's EOD"
                };
            };
        };
        class PB_Custom_Vests
        {
            label = "[F66th] M56 Custom Vests";
            author = "F66th Pebbles";
            options[] =
            {
                "Variant"
            };
            class Variant
            {
                values[] =
                {
                    "Pebbles",
                    "Revan",
                    "Spinny",
                    "Ahriman",
                    "Nyquil",
                    "Komoto",
                    "Trim",
                    "Reaper",
                    "Fixer",
                };

                class Pebbles_Operator
                {
                    Label = "Pebbles Operator"
                };
                class Spinny_Sniper
                {
                    label = "Spinny Sniper" 
                };
                class Trim_CQB
                {
                    label = "Trim";
                };
                class Ahriman_Medic
                {
                    label = "Ahriman";
                };
                class Nyquil_CQB
                {
                    label = "Nyquil";
                };
                class Komoto_Light
                {
                    label = "Komoto NS";
                };
                class Reaper_Sniper
                {
                    label = "Reaper Sniper"
                };
                class Revan_Sniper
                {
                    label = "Revan Sniper"
                };
                class Fixer_Standard
                {
                    label = "Fixer";
                };
            };


        };
    };
};
