#pragma once
#include "CoreMinimal.h"
#include "ER5BoardingBattleResult.generated.h"

UENUM(BlueprintType)
enum class ER5BoardingBattleResult : uint8 {
    None,
    Victory,
    Defeat,
};

