#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5AnimatedInteractionHandler.h"
#include "R5Ability_TransitionToInteraction.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UR5AbilityTask_MoveToAnimatedInteractionBySpline;
class UR5AbilityTask_SearchInteractionInRadius;
class UR5ChangeCollisionPresetTask;
class UR5TransitionToInteractionAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_TransitionToInteraction : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TransitionToInteractionAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_SearchInteractionInRadius* SearchInteractionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* TransitionMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_MoveToAnimatedInteractionBySpline* RootMotionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5ChangeCollisionPresetTask* ChangeCollisionProfileTask;
    
public:
    UR5Ability_TransitionToInteraction();

protected:
    UFUNCTION(BlueprintCallable)
    void RootMotionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFoundInteraction(FR5AnimatedInteractionHandler TargetData, int32 TransitionDataIndex);
    
};

