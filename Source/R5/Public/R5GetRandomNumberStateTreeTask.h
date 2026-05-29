#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5GetRandomNumberStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetRandomNumberStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5GetRandomNumberStateTreeTask();
};

