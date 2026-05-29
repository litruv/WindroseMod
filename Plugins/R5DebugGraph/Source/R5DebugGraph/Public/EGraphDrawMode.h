#pragma once
#include "CoreMinimal.h"
#include "EGraphDrawMode.generated.h"

UENUM(BlueprintType)
enum class EGraphDrawMode : uint8 {
    DoNotDraw,
    OwnGraph,
    CategoryGraph,
    MainGraph,
};

