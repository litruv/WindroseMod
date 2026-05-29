#pragma once
#include "CoreMinimal.h"
#include "EForceGraphDrawMode.generated.h"

UENUM(BlueprintType)
enum class EForceGraphDrawMode : uint8 {
    DoNotDraw,
    OwnGraph,
    PackGraph,
    MainGraph,
};

