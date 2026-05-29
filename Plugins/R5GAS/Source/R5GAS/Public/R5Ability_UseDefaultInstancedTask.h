#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_UseDefaultInstancedTask.generated.h"

class UR5AbilityTask_DefaultInstanced;
class UR5UseDefaultInstancedTaskParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_UseDefaultInstancedTask : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UseDefaultInstancedTaskParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5AbilityTask_DefaultInstanced*> InstancedTasks;
    
public:
    UR5Ability_UseDefaultInstancedTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished();
    
};

