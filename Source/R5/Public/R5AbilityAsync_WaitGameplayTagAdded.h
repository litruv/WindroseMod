#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityAsync_WaitGameplayTag -FallbackName=AbilityAsync_WaitGameplayTag
#include "Abilities/Async/AbilityAsync_WaitGameplayTag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AbilityAsync_WaitGameplayTagAdded.generated.h"

class AActor;
class UR5AbilityAsync_WaitGameplayTagAdded;

UCLASS(Blueprintable)
class R5_API UR5AbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5AsyncWaitGameplayTagDelegate, FGameplayTag, Tag);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AsyncWaitGameplayTagDelegate Added;
    
    UR5AbilityAsync_WaitGameplayTagAdded();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityAsync_WaitGameplayTagAdded* R5WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
    
};

