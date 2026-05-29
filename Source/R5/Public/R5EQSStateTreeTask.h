#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5EQSStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5EQSStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5EQSStateTreeTask();
};

