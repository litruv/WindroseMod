#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5GetRandomPointInRadiusStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetRandomPointInRadiusStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5GetRandomPointInRadiusStateTreeTask();
};

