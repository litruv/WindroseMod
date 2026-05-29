#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5SetRotationRateStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5SetRotationRateStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5SetRotationRateStateTreeTask();
};

