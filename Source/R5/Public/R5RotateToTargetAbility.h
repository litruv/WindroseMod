#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RotateToTargetAbility.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5AbilityTask_ApplyRootMotionConstantForce;
class UR5AbilityTask_ApplyRootMotionForward;
class UR5AbilityTask_ApplyRootMotionRotation;
class UR5RotateToTargetAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5RotateToTargetAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RotateToTargetAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionRotation* RotationTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* RotationMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionForward* ForwardRootMotionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionConstantForce* ConstantForceMotionTask;
    
public:
    UR5RotateToTargetAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnRotationFinished();
    
};

