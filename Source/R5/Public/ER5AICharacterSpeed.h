#pragma once
#include "CoreMinimal.h"
#include "ER5AICharacterSpeed.generated.h"

UENUM(BlueprintType)
enum class ER5AICharacterSpeed : uint8 {
    None,
    WanderSpeed,
    StrafeSpeed,
    AggressionSpeed,
    FastWalkSpeed,
    BlockSpeed,
};

