#pragma once
#include "CoreMinimal.h"
#include "ER5ShipHullDamageCPDIndex.generated.h"

UENUM(BlueprintType)
enum class ER5ShipHullDamageCPDIndex : uint8 {
    None = 0,
    HullDamage = 20,
    HullBurn,
};

