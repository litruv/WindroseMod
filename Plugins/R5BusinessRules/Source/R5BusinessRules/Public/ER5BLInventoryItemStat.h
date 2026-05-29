#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemStat.generated.h"

UENUM(BlueprintType)
enum class ER5BLInventoryItemStat : uint8 {
    None,
    Default,
    AttackPower,
    ArmorPenetration,
    Agility,
    Blunt,
    Crude,
    Cursed,
    Corrupt,
    Endurance,
    Defence,
    Fire,
    Fortitude,
    Holy,
    Mastery,
    Mobility,
    Pierce,
    Precision,
    Poison,
    Strength,
    Sail,
    Slash,
    Vitality,
    CritChance,
    CritDamage,
    ShipFireRangeRANK,
    ShipFireAccuracyRANK,
    ShipCannonDamage,
    ShipCannonReloadTime,
};

