#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioBlackboardType.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioBlackboardType : uint8 {
    DefaultBlackboardType,
    Local,
    Poi,
    Account,
    Player,
    World,
    PlayerInWorld,
};

