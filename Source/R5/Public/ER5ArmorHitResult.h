#pragma once
#include "CoreMinimal.h"
#include "ER5ArmorHitResult.generated.h"

UENUM(BlueprintType)
enum class ER5ArmorHitResult : uint8 {
    None,
    Penetration,
    NotPenetration,
    Ricochet,
};

