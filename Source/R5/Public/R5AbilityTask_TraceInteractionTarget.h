#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5InteractTraceData.h"
#include "R5AbilityTask_TraceInteractionTarget.generated.h"

class UGameplayAbility;
class UR5AbilityTask_TraceInteractionTarget;
class UR5InteractionTargetModel;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_TraceInteractionTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_TraceInteractionTarget();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_TraceInteractionTarget* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5InteractionTargetModel* TargetModel, const FR5InteractTraceData& TraceData, bool bAlwaysCheckOptionsAccessibility);
    
};

