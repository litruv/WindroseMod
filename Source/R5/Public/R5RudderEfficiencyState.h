#pragma once
#include "CoreMinimal.h"
#include "R5BaseEfficiencyState.h"
#include "R5RudderEfficiencyState.generated.h"

USTRUCT(BlueprintType)
struct FR5RudderEfficiencyState : public FR5BaseEfficiencyState {
    GENERATED_BODY()
public:
    R5_API FR5RudderEfficiencyState();
};

