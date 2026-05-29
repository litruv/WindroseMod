#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ApplyGameplayEffectOnTargets.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5ApplyGameplayEffectOnTargetParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ApplyGameplayEffectOnTargets : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ApplyGameplayEffectOnTargetParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
public:
    UR5Ability_ApplyGameplayEffectOnTargets();

protected:
    UFUNCTION(BlueprintCallable)
    void MontageFinished();
    
    UFUNCTION(BlueprintCallable)
    void MontageCanceled();
    
};

