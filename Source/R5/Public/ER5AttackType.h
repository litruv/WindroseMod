#pragma once
#include "CoreMinimal.h"
#include "ER5AttackType.generated.h"

UENUM(BlueprintType)
enum class ER5AttackType : uint8 {
    AttackType_1,
    AttackType_2,
    AttackType_3,
    AttackType_4,
    Other,
};

