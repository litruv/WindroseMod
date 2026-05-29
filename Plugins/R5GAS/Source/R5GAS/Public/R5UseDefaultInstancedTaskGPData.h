#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5UseDefaultInstancedTaskGPData.generated.h"

class UR5AbilityTask_DefaultInstanced;

USTRUCT(BlueprintType)
struct FR5UseDefaultInstancedTaskGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UR5AbilityTask_DefaultInstanced>> TasksClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnMontageFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopIfMontageInterruptedAfterStartTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnTaskFinished;
    
    R5GAS_API FR5UseDefaultInstancedTaskGPData();
};

