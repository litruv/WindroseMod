#pragma once
#include "CoreMinimal.h"
#include "R5BaseEfficiencyState.h"
#include "R5BatteryEfficiencyState.generated.h"

USTRUCT(BlueprintType)
struct FR5BatteryEfficiencyState : public FR5BaseEfficiencyState {
    GENERATED_BODY()
public:
    R5_API FR5BatteryEfficiencyState();
};

