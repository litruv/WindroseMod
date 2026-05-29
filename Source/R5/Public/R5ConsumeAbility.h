#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5ConsumeAbility.generated.h"

class UAbilityTask_WaitDelay;
class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5BLInventoryView;
class UR5CommonConsumeAbilityParams;
class UR5ConsumeAbilityData;

UCLASS(Blueprintable)
class R5_API UR5ConsumeAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ConsumeAbilityData* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CommonConsumeAbilityParams* CommonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* TaskDelayToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* AnimMontageTask;
    
public:
    UR5ConsumeAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnd(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbility();
    
    UFUNCTION(BlueprintCallable)
    void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
};

