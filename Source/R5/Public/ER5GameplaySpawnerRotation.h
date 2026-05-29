#pragma once
#include "CoreMinimal.h"
#include "ER5GameplaySpawnerRotation.generated.h"

UENUM(BlueprintType)
enum class ER5GameplaySpawnerRotation : uint8 {
    None,
    Pitch,
    Yaw,
    Roll = 4,
};

