#pragma once
#include "CoreMinimal.h"
#include "ER5ProximityActorType.generated.h"

UENUM(BlueprintType)
enum class ER5ProximityActorType : uint8 {
    Player,
    Ship,
    Dock,
    Max,
};

