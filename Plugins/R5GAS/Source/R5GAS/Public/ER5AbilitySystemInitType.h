#pragma once
#include "CoreMinimal.h"
#include "ER5AbilitySystemInitType.generated.h"

UENUM(BlueprintType)
enum class ER5AbilitySystemInitType : uint8 {
    DefaultSpawn,
    Revive,
    NotAuthority,
};

