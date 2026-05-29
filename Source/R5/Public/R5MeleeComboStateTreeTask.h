#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5MeleeComboStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeComboStateTreeTask : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5MeleeComboStateTreeTask();
};

