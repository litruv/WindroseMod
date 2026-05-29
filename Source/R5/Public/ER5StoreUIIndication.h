#pragma once
#include "CoreMinimal.h"
#include "ER5StoreUIIndication.generated.h"

UENUM(BlueprintType)
enum class ER5StoreUIIndication : uint8 {
    None,
    Steam,
    EGS,
    Stove,
};

