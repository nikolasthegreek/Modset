class Modern_USMC_Base: B_Soldier_base_F
{
scope=1;
displayName="Base (Modern)";
faction="twc_public_usmc";
editorSubcategory = "USMC_Modern_WD";
vehicleClass="Men_Modern";
icon="iconMan";
nakedUniform="U_BasicBody";
uniformClass="rhs_uniform_FROG01_wd";
twc_radioType = "ACRE_PRC148";
twc_radioChannel = 3;
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
Items[]=
{
"ACE_fieldDressing",
"ACRE_PRC148",
"ACE_EarPlugs",

"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet",
"ACE_tourniquet",
"ACE_MapTools"
};
respawnitems[]=
{
"ACE_fieldDressing",
"ACRE_PRC148",
"ACE_EarPlugs",

"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet",
"ACE_tourniquet",
"ACE_MapTools"
};
};

class Modern_USMC_Base_d: B_Soldier_base_F
{
scope=1;
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
twc_radioType = "ACRE_PRC148";
twc_radioChannel = 3;

};


class Modern_USMC_Squadleader: Modern_USMC_Base
{
scope=2;
displayName="Squad Leader@USMC Section";
icon="iconManLeader";
backpack="TWC_Backpack_USMC_Sectionleader";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"twc_rhs_weap_m16a4_m203_acog_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"twc_rhs_weap_m16a4_m203_acog_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Teamleader: Modern_USMC_Base
{
scope=2;
displayName="Team Leader";
icon="iconManLeader";
backpack="TWC_Backpack_USMC_Teamleader";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ACE_EarPlugs",
"ACRE_PRC343",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ACE_EarPlugs",
"ACRE_PRC343",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"twc_rhs_weap_m4a1_m203_acog_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"twc_rhs_weap_m4a1_m203_acog_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Rifleman: Modern_USMC_Base
{
scope=2;
displayName="Rifleman AT";
backpack="rhsusf_assault_eagleaiii_coy";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m16a4_acog_lazer",
"rhs_weap_M136_hedp",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m16a4_acog_lazer",
"rhs_weap_M136_hedp",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Breacher: Modern_USMC_Base
{
scope=2;
displayName="Breacher";
backpack="TWC_Backpack_USMC_Breacher";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"rhs_weap_M590_8RD",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"rhs_weap_M590_8RD",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Autorifleman: Modern_USMC_Base
{
scope=2;
displayName="Autorifleman";
backpack="TWC_Backpack_USMC_AutomaticRifleman";
linkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m249_pip_L_mgo_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m249_pip_L_mgo_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_200Rnd_556x45_soft_pouch",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_AsstAutorifleman: Modern_USMC_Base
{
scope=2;
displayName="Asst. Automatic Rifleman";
icon="iconManMG";
backpack="TWC_Backpack_USMC_AutomaticRifleman";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_MachineGunner: Modern_USMC_Base
{
scope=2;
displayName="Machine Gunner";
icon="iconManMG";
backpack="TWC_Backpack_USMC_MachineGunner";
linkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m240B_mgo_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m240B_mgo_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"rhsusf_100Rnd_762x51_m62_tracer",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_AsstMachineGunner: Modern_USMC_Base
{
scope=2;
displayName="Asst. Machine Gunner";
icon="iconManMG";
backpack="TWC_Backpack_USMC_MachineGunner";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhs_weap_M136_hedp",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhs_weap_M136_hedp",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Medic: Modern_USMC_Base
{
scope=2;
displayName="Corpsman";
icon="iconManMedic";
backpack="TWC_Backpack_USMC_Medic";
attendant = 1;
linkedItems[]=
{
"rhsusf_spc_corpsman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_corpsman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class Modern_USMC_Squadleader_d: Modern_USMC_Squadleader
{
scope=2;
displayName="Squad Leader@USMC Section";
icon="iconManLeader";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_Teamleader_d: Modern_USMC_Teamleader
{
scope=2;
displayName="Team Leader";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ACE_EarPlugs",
"ACRE_PRC343",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ACE_EarPlugs",
"ACRE_PRC343",
"ItemWatch"
};
};
class Modern_USMC_Rifleman_d: Modern_USMC_Rifleman
{
scope=2;
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
displayName="Rifleman AT";
backpack="rhsusf_assault_eagleaiii_coy";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class Modern_USMC_Breacher_d: Modern_USMC_Breacher
{
scope=2;
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
displayName="Breacher";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class Modern_USMC_Autorifleman_d: Modern_USMC_Autorifleman
{
scope=2;
displayName="Autorifleman";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
backpack="TWC_Backpack_USMC_AutomaticRifleman";
linkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_AsstAutorifleman_d: Modern_USMC_AsstAutorifleman
{
scope=2;
displayName="Asst. Automatic Rifleman";
icon="iconManMG";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
backpack="TWC_Backpack_USMC_AutomaticRifleman";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_MachineGunner_d: Modern_USMC_MachineGunner
{
scope=2;
displayName="Machine Gunner";
icon="iconManMG";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
backpack="TWC_Backpack_USMC_MachineGunner";
linkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_mg",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_AsstMachineGunner_d: Modern_USMC_AsstMachineGunner
{
scope=2;
displayName="Asst. Machine Gunner";
icon="iconManMG";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
backpack="TWC_Backpack_USMC_MachineGunner";
linkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_rifleman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_Medic_d: Modern_USMC_Medic
{
scope=2;
displayName="Corpsman";
icon="iconManMedic";
editorSubcategory = "USMC_Modern_D";
uniformClass="rhs_uniform_FROG01_d";
backpack="TWC_Backpack_USMC_Medic";
attendant = 1;
linkedItems[]=
{
"rhsusf_spc_corpsman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_corpsman",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};


class Modern_USMC_Platoon_Commander: Modern_USMC_Squadleader
{
scope=2;
displayName="USMC Platoon Commander";
backpack="rhsusf_assault_eagleaiii_coy";
icon="iconManLeader";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_Platoon_Sergeant: Modern_USMC_Platoon_Commander
{
scope=2;
displayName="USMC Platoon Commander";
backpack="rhsusf_assault_eagleaiii_coy";
icon="iconManLeader";
linkedItems[]=
{
"rhsusf_spc_squadleader",
"rhs_uniform_FROG01_d",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_squadleader",
"rhs_uniform_FROG01_d",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
};
class Modern_USMC_VehicleCommander: Modern_USMC_Base
{
scope=2;
displayName="Vehicle Commander";
uniformClass="CUP_U_B_USArmy_PilotOverall";
backpack="TWC_Backpack_Modern_HeloPilot";
linkedItems[]=
{
"UK3CB_BAF_H_CrewHelmet_B",
"rhsusf_spc_crewman",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
respawnlinkedItems[]=
{
"UK3CB_BAF_H_CrewHelmet_B",
"rhsusf_spc_crewman",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
weapons[]=
{
"Throw",
"Put",
"rhs_weap_m4"
};
respawnweapons[]=
{
"Throw",
"Put",
"rhs_weap_m4"
};
magazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_VehicleCrew:Modern_USMC_vehiclecommander
{
	backpack ="";
displayName="Vehicle Crew";
};
class Modern_USMC_HeliPilot: Modern_USMC_Base
{
scope=2;
displayName="USMC Helicopter Pilot";
uniformClass="CUP_U_B_USArmy_PilotOverall";
backpack="TWC_Backpack_Modern_HeloPilot";
linkedItems[]=
{
"CUP_H_USMC_Helmet_Pilot",
"CUP_V_B_PilotVest",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
respawnLinkedItems[]=
{
"CUP_H_USMC_Helmet_Pilot",
"CUP_V_B_PilotVest",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
weapons[]=
{
"Throw",
"Put",
"rhsusf_weap_m1911a1",
"rhs_weap_m4"
};
respawnweapons[]=
{
"Throw",
"Put",
"rhsusf_weap_m1911a1",
"rhs_weap_m4"
};
magazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"SmokeShell",
"SmokeShell"
};
};

class Modern_USMC_crewchief:Modern_USMC_HeliPilot
{
scope=2;
displayName="Helicopter Crew Chief";
uniformClass="CUP_U_B_USArmy_PilotOverall";
backpack="TWC_Backpack_Modern_HeloPilot";
};
class Modern_USMC_JetPilot: Modern_USMC_Base
{
_generalMacro="Modern_USMCJetPilot";
scope=2;
displayName="Fixed Wing Pilot";
faction="twc_public_usmc";
editorSubcategory = "Men_Modern";
vehicleClass="Men_Modern";
icon="iconMan";
nakedUniform="U_BasicBody";
uniformClass="CUP_U_B_USMC_PilotOverall";
backpack="TWC_Backpack_Modern_HeloPilot";
linkedItems[]=
{
"RHS_jetpilot_usaf",
"CUP_V_B_PilotVest",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
respawnLinkedItems[]=
{
"RHS_jetpilot_usaf",
"CUP_V_B_PilotVest",
"ItemMap",
"ItemCompass",
"ItemWatch",
"ItemcTab"
};
weapons[]=
{
"Throw",
"Put",
"rhsusf_weap_m9"
};
respawnweapons[]=
{
"Throw",
"Put",
"rhsusf_weap_m9"
};
magazines[]=
{
"rhsusf_mag_15Rnd_9x19_JHP",
"rhsusf_mag_15Rnd_9x19_JHP",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_15Rnd_9x19_JHP",
"rhsusf_mag_15Rnd_9x19_JHP",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_MortarGunner: Modern_USMC_Rifleman
{
scope=2;
displayName="USMC Mortar Gunner";
icon="iconMan";
backpack="rhsusf_assault_eagleaiii_coy";
linkedItems[]=
{
"rhsusf_spc_corpsman",
"UK3CB_BAF_H_Mk7_Camo_D",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_corpsman",
"UK3CB_BAF_H_Mk7_Camo_D",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"UK3CB_BAF_L16"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"UK3CB_BAF_L16"
};
magazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"SmokeShell"
};
};
class Modern_USMC_MortarAssistant: Modern_USMC_MortarGunner
{
displayName="USMC Mortar Assistant";
backpack="rhsusf_assault_eagleaiii_coy";
weapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"UK3CB_BAF_L16_Tripod"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_rhs_weap_m4a1_acog_lazer",
"UK3CB_BAF_L16_Tripod"
};
};
class Modern_USMC_Sniper: Modern_USMC_Base
{
scope=2;
displayName="USMC Sniper";
nakedUniform="U_BasicBody";
uniformClass="rhs_uniform_FROG01_d";
backpack="rhsusf_assault_eagleaiii_coy";
linkedItems[]=
{
"rhsusf_spc_light",
"rhsusf_mich_helmet_marpatwd_norotos_headset",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_light",
"rhsusf_mich_helmet_marpatwd_norotos_headset",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"rhs_weap_m40a5_d"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"rhsusf_weap_m1911a1",
"rhs_weap_m40a5_d"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"HandGrenade",
"SmokeShell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"HandGrenade",
"SmokeShell",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_Spotter: Modern_USMC_Sniper
{
displayName="USMC Spotter";
icon="iconManLeader";
nakedUniform="U_BasicBody";
uniformClass="rhs_uniform_FROG01_d";
backpack="rhsusf_assault_eagleaiii_coy";
weapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"rhs_weap_m4_carryhandle_pmag"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Vector",
"rhs_weap_m4_carryhandle_pmag"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"HandGrenade",
"SmokeShell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"rhs_mag_30Rnd_556x45_M855_Stanag",
"HandGrenade",
"SmokeShell",
"SmokeShell",
"SmokeShell"
};
};
class Modern_USMC_FAC: Modern_USMC_Base
{
scope=2;
displayName="USMC FAC";
backpack="rhsusf_assault_eagleaiii_coy";
linkedItems[]=
{
"rhsusf_spc_crewman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"rhsusf_spc_crewman",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemcTab",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"UK3CB_BAF_Soflam_Laserdesignator",
"rhs_weap_m4_carryhandle_pmag"
};
respawnweapons[]=
{
"Throw",
"Put",
"UK3CB_BAF_Soflam_Laserdesignator",
"rhs_weap_m4_carryhandle_pmag"
};
magazines[]=
{
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
};
Respawnmagazines[]=
{
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
};
};