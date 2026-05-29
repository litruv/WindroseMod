#pragma once
#include "CoreMinimal.h"
#include "ERShipTurnAroundMode.generated.h"

UENUM(BlueprintType)
enum class ERShipTurnAroundMode : uint8 {
    Any,
    ByBow,
    ByStern,
};

