#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_WaitTriggerInteractionOption.generated.h"

class UGameplayAbility;
class UR5AbilityTask_WaitTriggerInteractionOption;
class UR5InteractionOption;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_WaitTriggerInteractionOption : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionDelegate, UR5InteractionOption*, Option);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionDelegate OnOptionTriggered;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5InteractionOption* Option;
    
public:
    UR5AbilityTask_WaitTriggerInteractionOption();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitTriggerInteractionOption* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5InteractionOption* NewOption);
    
};

