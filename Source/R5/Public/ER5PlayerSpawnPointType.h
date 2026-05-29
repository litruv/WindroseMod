#pragma once
#include "CoreMinimal.h"
#include "ER5PlayerSpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ER5PlayerSpawnPointType : uint8 {
    None,
    Bedroll,
    Ship,
};

