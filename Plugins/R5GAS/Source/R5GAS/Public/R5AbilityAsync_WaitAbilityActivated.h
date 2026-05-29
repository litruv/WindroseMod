#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityAsync -FallbackName=AbilityAsync
#include "Abilities/Async/AbilityAsync.h"
#include "Templates/SubclassOf.h"
#include "R5AbilityAsync_WaitAbilityActivated.generated.h"

class AActor;
class UGameplayAbility;
class UR5AbilityAsync_WaitAbilityActivated;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityAsync_WaitAbilityActivated : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilitySignature, UGameplayAbility*, Ability);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySignature OnAbilityActive;
    
    UR5AbilityAsync_WaitAbilityActivated();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityAsync_WaitAbilityActivated* NewAction(AActor* TargetActor, TSubclassOf<UGameplayAbility> AbilityClass, bool bAllowDerivedAbilityClasses);
    
};

