#pragma once
#include "CoreMinimal.h"
#include "R5BaseEfficiencyState.h"
#include "R5SailEfficiencyState.generated.h"

USTRUCT(BlueprintType)
struct FR5SailEfficiencyState : public FR5BaseEfficiencyState {
    GENERATED_BODY()
public:
    R5_API FR5SailEfficiencyState();
};

