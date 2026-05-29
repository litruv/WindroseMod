#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityAsync -FallbackName=AbilityAsync
#include "Abilities/Async/AbilityAsync.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayTagRequirements -FallbackName=GameplayTagRequirements
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayTargetDataFilterHandle -FallbackName=GameplayTargetDataFilterHandle
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "R5AsyncTaskWaitGameplayEffectAdded.generated.h"

class AActor;
class UR5AsyncTaskWaitGameplayEffectAdded;

UCLASS(Blueprintable)
class R5GAS_API UR5AsyncTaskWaitGameplayEffectAdded : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAppliedDelegate, AActor*, Source, FActiveGameplayEffectHandle, ActiveHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppliedDelegate OnApplied;
    
    UR5AsyncTaskWaitGameplayEffectAdded();

    UFUNCTION(BlueprintCallable)
    static UR5AsyncTaskWaitGameplayEffectAdded* R5WaitGameplayEffectAddedToActor(AActor* TargetActor, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce);
    
};

