#pragma once
#include "CoreMinimal.h"
#include "ER5N_SmokeSolverType.generated.h"

UENUM(BlueprintType)
enum class ER5N_SmokeSolverType : uint8 {
    SPH,
    MPM,
    SemiLagrangian,
    SemiLagrangianSIMD,
    None,
};

