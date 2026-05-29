#pragma once
#include "CoreMinimal.h"
#include "ER5PhysicsPerformanceOptimizerType.generated.h"

UENUM()
enum class ER5PhysicsPerformanceOptimizerType : int32 {
    Default,
    DisableKinematicUpdate,
};

