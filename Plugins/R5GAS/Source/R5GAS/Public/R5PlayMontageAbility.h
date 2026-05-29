#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5PlayMontageAbility.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_WaitDelay;
class UR5PlayAnimMontageParams;

UCLASS(Blueprintable)
class R5GAS_API UR5PlayMontageAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PlayAnimMontageParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* WaitDelayTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* PlayAnimMontageTask;
    
public:
    UR5PlayMontageAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void MontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void MontageFinished();
    
    UFUNCTION(BlueprintCallable)
    void FinishAbility();
    
};

