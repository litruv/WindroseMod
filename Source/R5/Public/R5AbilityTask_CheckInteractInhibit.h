#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AbilityTask_CheckInteractInhibit.generated.h"

class UGameplayAbility;
class UR5AbilityTask_CheckInteractInhibit;
class UR5InteractionTargetModel;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_CheckInteractInhibit : public UAbilityTask {
    GENERATED_BODY()
public:
    UR5AbilityTask_CheckInteractInhibit();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_CheckInteractInhibit* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5InteractionTargetModel* TargetModel, const FGameplayTag& InhibitTag);
    
};

