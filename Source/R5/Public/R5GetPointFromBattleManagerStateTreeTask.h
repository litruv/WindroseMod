#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5GetPointFromBattleManagerStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetPointFromBattleManagerStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5GetPointFromBattleManagerStateTreeTask();
};

