#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5ChangeFsmStateStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ChangeFsmStateStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5ChangeFsmStateStateTreeTask();
};

