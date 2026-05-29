#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AbilityTask_WaitInteractTargetAccessibility.generated.h"

class IR5InteractionTarget;
class UR5InteractionTarget;
class UGameplayAbility;
class UR5AbilityTask_WaitInteractTargetAccessibility;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_WaitInteractTargetAccessibility : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAccessibilitySetSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccessibilitySetSignature OnAccessibilitySet;
    
    UR5AbilityTask_WaitInteractTargetAccessibility();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitInteractTargetAccessibility* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, TScriptInterface<IR5InteractionTarget> InteractTarget, const FString& InteractionItemId, bool bWaitAccessible, const FGameplayTagContainer& InInstigatorInteractType);
    
};

