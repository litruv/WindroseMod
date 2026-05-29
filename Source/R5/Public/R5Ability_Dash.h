#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_Dash.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5AbilityTask_ApplyRootMotionConstantForce;
class UR5Ability_DashGPParams;
class UR5Ability_DashTechParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_Dash : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5Ability_DashGPParams* GPParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5Ability_DashTechParams* TechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionConstantForce* RootMotionTask;
    
public:
    UR5Ability_Dash();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished();
    
};

