/*
 * Author: MikeMatrix
 * Create an IED of given type at given position in specified spawn radius.
 *
 * Arguments:
 * 0: IED Type <STRING>
 * 1: Position <ARRAY>
 * 2: Spawn Radius <NUMBER>
 * 3: Trigger Radius <NUMBER>
 *
 * Return Value:
 * IED <OBJECT>
 *
 * Example:
 * ["IEDLandBig_F", getPos player, 3] call TWC_fnc_spawnIed
 */
params ["_iedType", "_position", ["_spawnRadius", 0], ["_triggerRadius", 12]];

// Create visible explosive object

_position params ["_xpos","_ypos","_zpos"];
_ied = createVehicle [_iedType, [_xpos,_ypos, random -0.20], [], _spawnRadius, "NONE"];

// Handle creating explosion and cleaning up on object being destroyed
_ied addEventHandler ["Killed", {
    params ["_unit", "_killer"];
    _iedExplosive = createMine [typeOf _unit, getPos _unit, [], 0];
    _iedExplosive setDamage 1;
    deleteVehicle (_unit getVariable ["InsP_trigger", objNull]);
    deleteVehicle _unit;
}];

// Create trigger for setting off the explosive
_trigger = createTrigger ["EmptyDetector", _position, true];
_trigger setTriggerArea [_triggerRadius, _triggerRadius, 0, false];
_trigger setTriggerActivation ["ANY", "PRESENT", true];
_trigger setTriggerStatements [
    "{
        if (abs (speed _x) >= 15 && (getPosATL _x select 2) < 4) exitWith {true};
        false
    } forEach thisList;",
    "(thisTrigger getVariable ['InsP_ied', objNull]) setDamage 1;",
    ""
];

// Make trigger and object known to each other
_trigger setVariable ["InsP_ied", _ied, true];
_ied setVariable ["InsP_trigger", _trigger, true];

_ied
