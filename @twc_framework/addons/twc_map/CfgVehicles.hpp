#define ADD_MAP(className) \
    class className: Items_Base_F { \
        class EventHandlers { \
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {}; \
        }; \
        class ACE_Actions { \
            class ACE_MainActions { \
                selection = ""; \
                distance  = 2; \
                condition = "true"; \
                class TWC_Map_OpenMap { \
                    displayName = "Open Map"; \
                    distance = 2; \
                    condition = "true"; \
                    statement = "[_target] call twc_map_fnc_openMap"; \
                    icon = "A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa"; \
                }; \
                class TWC_Map_PickupMap { \
                    displayName = "Pickup Map"; \
                    distance = 2; \
                    condition = "!(""ItemMap"" in (assignedItems _player))"; \
                    statement  = "[_target, _player] call twc_map_fnc_pickupMap"; \
                    icon = "A3\Ui_f\data\MAP\Markers\Military\pickup_ca.paa"; \
                }; \
            }; \
        }; \
    };

class CBA_Extended_EventHandlers;

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class TWC_Map_Unfold {
					displayName = "Unfold Map";
					condition = """ItemMap"" in (assignedItems player)";
					statement = "[_player] spawn twc_map_fnc_unfoldMap";
					icon = "A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa";
				};
			};
		};
	};

	class Items_Base_F;
	ADD_MAP(Land_Map_blank_F)
	ADD_MAP(Land_Map_altis_F)
	ADD_MAP(Land_Map_stratis_F)
};