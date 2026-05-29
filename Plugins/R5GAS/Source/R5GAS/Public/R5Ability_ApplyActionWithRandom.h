#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_ApplyActionWithRandom.generated.h"

class UR5AbilityTask_DefaultInstanced;
class UR5AbilityTask_RandomBase;
class UR5ApplyActionWithRandomParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_ApplyActionWithRandom : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ApplyActionWithRandomParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_RandomBase* RandomTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5AbilityTask_DefaultInstanced*> ActionTasks;
    
public:
    UR5Ability_ApplyActionWithRandom();

};

