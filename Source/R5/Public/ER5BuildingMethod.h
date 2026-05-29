#pragma once
#include "CoreMinimal.h"
#include "ER5BuildingMethod.generated.h"

UENUM(BlueprintType)
enum class ER5BuildingMethod : uint8 {
    None,
    Create,
    Delete,
    Destroy,
    Blueprints,
};

