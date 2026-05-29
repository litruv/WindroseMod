#pragma once
#include "CoreMinimal.h"
#include "ER5BLAvailableBBForRecipe.generated.h"

UENUM(BlueprintType)
enum class ER5BLAvailableBBForRecipe : uint8 {
    World,
    Player,
    PlayerInWorld,
};

