#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5StaggerActionAbility.generated.h"

class UR5AbilityTask_ApplyRootMotionConstantForce;
class UR5AbilityTask_NetworkSyncPoint;
class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5StaggerAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5StaggerActionAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaggerAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* StaggerMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionConstantForce* StaggerRootMotionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_NetworkSyncPoint* NetSyncTask;
    
public:
    UR5StaggerActionAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void FinishStaggerEffect(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
};

