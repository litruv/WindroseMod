#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5OffHandHoldActionStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5OffHandHoldActionStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5OffHandHoldActionStateTreeTask();
};

