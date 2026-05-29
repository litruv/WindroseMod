#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5ChooseZoneStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ChooseZoneStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5ChooseZoneStateTreeTask();
};

