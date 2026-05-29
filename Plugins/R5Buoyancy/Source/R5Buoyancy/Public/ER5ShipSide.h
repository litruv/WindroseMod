#pragma once
#include "CoreMinimal.h"
#include "ER5ShipSide.generated.h"

UENUM(BlueprintType)
enum class ER5ShipSide : uint8 {
    None,
    Bow,
    Starboard,
    Port,
    Stern,
};

