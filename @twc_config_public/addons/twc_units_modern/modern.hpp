
	class Modern_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (Modern)";
		faction="twc_public_baf";
		editorSubcategory = "Men_Modern";
		vehicleClass="Men_Modern";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP";
		twc_radioType = "ACRE_PRC343";
		twc_radioChannel = 1;
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
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
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
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
			"ACE_tourniquet"
		};
	};
	class Modern_British_Squadleader: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Section Leader@Alpha Section";
		icon="iconManLeader";
		backpack="TWC_Backpack_Modern_Sectionlead";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_D",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_D",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
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
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_Quartermaster: Modern_British_Base
	{
		scope=2;
		displayName="Quartermaster";
		uniformClass="UK3CB_BAF_U_RolledUniform_MTP";
		icon="iconManLeader";
		backpack="TWC_Backpack_Modern_quartermaster";
		attendant = 1;
		linkedItems[]=
		{
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"UK3CB_BAF_H_Beret_RLC_Commando_PRR",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Rangemaster_belt",
			"UK3CB_BAF_H_Beret_RLC_Commando_PRR",
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
			"UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
		

	};


	class Modern_British_Rifleman: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Rifleman";
		backpack="UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"launch_NLAW_F"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"launch_NLAW_F"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Grenadier: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Grenadier";
		icon="iconManExplosive";
		backpack="UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_B",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_B",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"rhs_weap_m72a7"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"rhs_weap_m72a7"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Autorifleman: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Automatic Rifleman";
		icon="iconManMG";
		backpack="TWC_Backpack_Modern_Autorifleman_Kitbag";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L110A2_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L110A2_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_2IC: Modern_British_Rifleman
	{
		displayName="Alpha 2IC";
		backpack="TWC_Backpack_Modern_2IC";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_Machinegunner: Modern_British_Autorifleman
	{
		scope=2;
		displayName="Alpha Machine Gunner";
		backpack="TWC_Backpack_Modern_MachineGunner_Kitbag";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Marksman: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Marksman";
		backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_E",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_E",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"launch_NLAW_F"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"launch_NLAW_F"
		};
		magazines[]=
		{
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Platoon_Commander: Modern_British_Squadleader
	{
		scope=2;
		displayName="Platoon Commander (Modern)";
		icon="iconManLeader";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Holster",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Holster",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class Modern_British_Platoon_Sergeant: Modern_British_Platoon_Commander
	{
		scope=2;
		displayName="Platoon Sergeant (Modern)";
		icon="iconMan";
		backpack="TWC_Backpack_Modern_Platoon_Sergeant";
	};
	class Modern_British_Platoon_Mortar: Modern_British_Rifleman
	{
		displayName="Platoon Mortar (Modern)";
		icon="iconManExplosive";
		backpack="TWC_Backpack_Modern_Platoon_Mortar";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_M6"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_M6"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells",
			"UK3CB_BAF_1Rnd_60mm_Mo_Shells"
		};
	};
	class Modern_British_Medic: Modern_British_Base
	{
		scope=2;
		displayName="Alpha Medic";
		icon="iconManMedic";
		backpack="TWC_Backpack_Modern_Medic";
		attendant = 1;
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_D",
			"UK3CB_BAF_H_Mk7_Camo_CESS_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_D",
			"UK3CB_BAF_H_Mk7_Camo_CESS_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Platoon_CSM: Modern_British_Squadleader
	{
		displayName="Company Sergeant Major (Modern)";
		backpack="TWC_Backpack_Modern_Platoon_Sergeant";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};

	class Modern_British_HeliPilot: Modern_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP";
		backpack="";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L22A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L22A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		respawnitems[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
	};

class Modern_British_crewchief:Modern_British_HeliPilot
{
		scope=2;
		displayName="Helicopter Crew Chief";
		backpack="";
		linkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
};
	class Modern_British_MERT_HeliPilot: Modern_British_HeliPilot
	{
		scope=2;
		displayName="MERT Helicopter Pilot";
		uniformClass="UK3CB_BAF_U_RolledUniform_MTP";
		backpack="";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_A",
			"CUP_H_BAF_Helmet_Pilot",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_A",
			"CUP_H_BAF_Helmet_Pilot",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"itemCTAB"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
	};

	class Modern_British_JetPilot: Modern_British_Base
	{
		_generalMacro="Modern_JetPilot";
		scope=2;
		displayName="Fixed Wing Pilot";
		faction="twc_public_baf";
		editorSubcategory = "Men_Modern";
		vehicleClass="Men_Modern";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_Army";
		backpack="TWC_Backpack_Modern_HeloPilot";
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemcTab"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_B",
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
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",	
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Sniper: Modern_British_Base {
		scope=2;
		displayName="Sniper";
		uniformClass="U_B_FullGhillie_sard";
		icon="iconManLeader";
		backpack="";
		linkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"UK3CB_BAF_H_Mk7_Scrim_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"UK3CB_BAF_H_Mk7_Scrim_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		weapons[]= {
			"Throw",
			"Put",
			"twc_l115a3_wd",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_l115a3_wd",
			"rhsusf_weap_glock17g4"
		};

		magazines[]= {
			"rhsusf_mag_17Rnd_9x19_JHP",
			"ACE_10Rnd_338_300gr_HPBT_Mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};

		Respawnmagazines[]= {
			"rhsusf_mag_17Rnd_9x19_JHP",
			"ACE_10Rnd_338_300gr_HPBT_Mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};

	class Modern_British_Spotter: Modern_British_Base {
		scope=2;
		displayName="Spotter";
		uniformClass="U_B_FullGhillie_sard";
		icon="iconManLeader";
		backpack="TWC_Backpack_Modern_Spotter_coin";
		linkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ACE_Vector",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ACE_Vector",
			"ItemWatch"
		};

		Items[]= {
			"ACE_Kestrel4500",
			"ACE_ATragMX",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_microDAGR",
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
			"ACE_tourniquet"
		};

		respawnItems[]= {
			"ACE_Kestrel4500",
			"ACE_ATragMX",
			"ACE_fieldDressing",
			"rhsusf_ANPVS_14",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_microDAGR",
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
			"ACE_tourniquet"
		};

		weapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_l129a1_spotter",
			"rhsusf_weap_glock17g4"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_l129a1_spotter",
			"rhsusf_weap_glock17g4"
		};

		magazines[]= {
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};

		Respawnmagazines[]= {
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};

	class Modern_British_FAC: Modern_British_Base
	{
		scope=2;
		displayName="Section FAC(Modern)";
		backpack="TWC_Backpack_Modern_FAC";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_ESS_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_ESS_A",
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
			"UK3CB_BAF_L85A2_UGL_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_1Rnd_HE_Grenade_Shell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_1Rnd_HE_Grenade_Shell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"B_IR_Grenade"
		};
	};
	class Modern_British_logitech: Modern_British_Base
	{
		scope=2;
		displayName="Logistics Technician";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		icon="iconMan";
		linkedItems[]=
		{
			"UK3CB_BAF_H_Mk7_Camo_C",
			"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_Mk7_Camo_C",
			"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_AFG"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_AFG"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd"
		};
	};
	class Modern_British_Medic_Mert: Modern_British_Base
	{
		scope=2;
		displayName="MERT Medic";
		icon="iconManMedic";
		uniformClass="UK3CB_BAF_U_RolledUniform_MTP";
		attendant = 1;
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_C",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_C",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		items[]=
		{
			"ACE_personalAidKit",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		Respawnitems[]=
		{
			"ACE_personalAidKit",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
	};
	class Modern_British_VehicleCrew: Modern_British_Base
	{
		scope=2;
		displayName="Armour Crewman";
		icon="iconMan";
		linkedItems[]=
		{
			"UK3CB_BAF_H_CrewHelmet_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_CrewHelmet_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L22A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L22A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"smokeshell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"smokeshell"
		};
	};
	class Modern_British_VehicleCommander: Modern_British_VehicleCrew
	{
		displayName="Armour Commander";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		backpack="";
		linkedItems[]=
		{	
			"UK3CB_BAF_H_CrewHelmet_ESS_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{		
			"UK3CB_BAF_H_CrewHelmet_ESS_A",
			"UK3CB_BAF_V_Osprey",
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
			"UK3CB_BAF_L22A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L22A2"
		};
	};


	class Modern_British_FSTCommander: Modern_British_Base {
		scope=2;
		displayName="FST Commander@Fire Support Team";
		icon="iconManLeader";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		backpack="TWC_Backpack_Modern_Sectionlead";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Lite",
			"UK3CB_BAF_H_Mk7_Net_D",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Lite",
			"UK3CB_BAF_H_Mk7_Net_D",
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
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};

	class Modern_British_FSTForwardObserver: Modern_British_Base {
		scope=2;
		displayName="FST Forward Observer";
		icon="iconManExplosive";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		backpack="TWC_Backpack_Modern_FSTForwardObserver";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACRE_PRC152"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACRE_PRC152"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"Laserbatteries",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"Laserbatteries",
			"SmokeShell"
		};
	};

	class Modern_British_FSTAssistant: Modern_British_Base {
		scope=2;
		displayName="FST Assistant";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		backpack="UK3CB_BAF_B_Carryall_MTP";
		
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Lite",
			"UK3CB_BAF_H_Mk7_Net_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Lite",
			"UK3CB_BAF_H_Mk7_Net_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	class Modern_Artillery_Commander: Modern_British_Base
	{
		scope=2;
		displayName="Artillery Gun Commander";
		icon="iconManLeader";
		backpack="TWC_Backpack_Modern_Sectionlead";
		uniformClass="UK3CB_BAF_U_RolledUniform_MTP";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
	};

	class Modern_Artillery_Gunner: Modern_Artillery_Commander
	{
		scope=2;
		displayName="Artillery Gun Operator";
		backpack="";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_TShirt";
		
	};