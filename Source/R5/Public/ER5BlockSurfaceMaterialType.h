#pragma once
#include "CoreMinimal.h"
#include "ER5BlockSurfaceMaterialType.generated.h"

UENUM(BlueprintType)
enum class ER5BlockSurfaceMaterialType : uint8 {
    None,
    Default,
    Wood,
    Skin,
    Iron,
};

