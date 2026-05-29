#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5HitReactionAbility.generated.h"

class UR5AbilityTask_ApplyRootMotionConstantForce;
class UR5AnimatedHitReactionTask;
class UR5HitReactionAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5HitReactionAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HitReactionAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AnimatedHitReactionTask* HitReactionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ApplyRootMotionConstantForce* RootMotionTask;
    
public:
    UR5HitReactionAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRootMotionTaskFinished();
    
};

