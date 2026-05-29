#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5SetCharacterMovementSpeedStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5SetCharacterMovementSpeedStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5SetCharacterMovementSpeedStateTreeTask();
};

