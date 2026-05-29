#pragma once
#include "CoreMinimal.h"
#include "ER5RemoveDecreasePerfectBlockType.generated.h"

UENUM(BlueprintType)
enum class ER5RemoveDecreasePerfectBlockType : uint8 {
    Never,
    OnAnyAttack,
    OnEveryBlock,
    OnPerfectBlock,
};

