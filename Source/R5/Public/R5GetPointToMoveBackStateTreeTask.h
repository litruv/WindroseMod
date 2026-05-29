#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5GetPointToMoveBackStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetPointToMoveBackStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5GetPointToMoveBackStateTreeTask();
};

