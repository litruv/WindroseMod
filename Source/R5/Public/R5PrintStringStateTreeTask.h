#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5PrintStringStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5PrintStringStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5PrintStringStateTreeTask();
};

