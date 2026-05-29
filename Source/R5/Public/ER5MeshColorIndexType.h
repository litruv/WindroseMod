#pragma once
#include "CoreMinimal.h"
#include "ER5MeshColorIndexType.generated.h"

UENUM(BlueprintType)
enum class ER5MeshColorIndexType : uint8 {
    None,
    Main,
    Secondary,
    Detail,
};

