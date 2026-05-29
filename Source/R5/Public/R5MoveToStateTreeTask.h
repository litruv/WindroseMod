#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5MoveToStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MoveToStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5MoveToStateTreeTask();
};

