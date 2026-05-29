#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5InteractOverlapData.h"
#include "R5AbilityTask_OverlapInteractionTarget.generated.h"

class UGameplayAbility;
class UR5AbilityTask_OverlapInteractionTarget;
class UR5InteractionTargetModel;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_OverlapInteractionTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_OverlapInteractionTarget();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_OverlapInteractionTarget* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5InteractionTargetModel* TargetModel, const FR5InteractOverlapData& InOverlapData, bool bInAlwaysCheckOptionsAccessibility);
    
};

