#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5ChangeVisibilityStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ChangeVisibilityStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5ChangeVisibilityStateTreeTask();
};

