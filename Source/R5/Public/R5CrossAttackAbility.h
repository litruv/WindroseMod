#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5CrossAttackAbility.generated.h"

class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5CrossAttackAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5CrossAttackAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CrossAttackAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* PlayMontageTask;
    
public:
    UR5CrossAttackAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
};

