#pragma once
#include "CoreMinimal.h"
#include "ER5BLCharacterAge.generated.h"

UENUM(BlueprintType)
enum class ER5BLCharacterAge : uint8 {
    Young,
    Mature,
    Old,
    Num,
};

