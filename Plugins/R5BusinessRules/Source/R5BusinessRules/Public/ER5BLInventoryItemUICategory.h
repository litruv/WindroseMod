#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemUICategory.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryItemUICategory : uint8 {
    None,
    Default,
    Misc,
    Resource,
    Metal,
    Food,
    Alchemy,
    Tool,
    MeleeWeapon,
    RangeWeapon,
    Ammo,
    Armor,
    Ring,
    Necklace,
    Insignia,
    Medicine,
    Backpack,
    ShipWeapon,
    ShipHullMod,
    ShipSailMod,
    ShipCombatOrder,
    ShipCrewEquipment,
};

