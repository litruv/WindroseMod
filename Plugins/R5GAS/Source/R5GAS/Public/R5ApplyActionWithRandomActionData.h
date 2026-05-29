#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5ApplyActionWithRandomActionData.generated.h"

class UR5AbilityTask_DefaultInstanced;

USTRUCT(BlueprintType)
struct FR5ApplyActionWithRandomActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UR5AbilityTask_DefaultInstanced>> ActionClasses;
    
    R5GAS_API FR5ApplyActionWithRandomActionData();
};

