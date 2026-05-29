#pragma once
#include "CoreMinimal.h"
#include "ER5ShipModuleEfficiencyCalculatingAlgo.generated.h"

UENUM()
enum class ER5ShipModuleEfficiencyCalculatingAlgo : int32 {
    None,
    Less,
    Avg,
    Multiply,
};

