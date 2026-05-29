#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5RotateToStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RotateToStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5RotateToStateTreeTask();
};

