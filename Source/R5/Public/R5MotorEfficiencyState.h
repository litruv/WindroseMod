#pragma once
#include "CoreMinimal.h"
#include "R5BaseEfficiencyState.h"
#include "R5MotorEfficiencyState.generated.h"

USTRUCT(BlueprintType)
struct FR5MotorEfficiencyState : public FR5BaseEfficiencyState {
    GENERATED_BODY()
public:
    R5_API FR5MotorEfficiencyState();
};

