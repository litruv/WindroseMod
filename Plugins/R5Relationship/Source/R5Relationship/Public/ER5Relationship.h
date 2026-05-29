#pragma once
#include "CoreMinimal.h"
#include "ER5Relationship.generated.h"

UENUM(BlueprintType)
enum class ER5Relationship : uint8 {
    None,
    Neutral,
    Friend,
    Enemy = 4,
};

