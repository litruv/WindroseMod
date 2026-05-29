#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_MoveToTargetBySpline -FallbackName=R5AbilityTask_MoveToTargetBySpline
#include "R5AbilityTask_MoveToTargetBySpline.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=R5RootMotionMoveToTargetBySpline -FallbackName=R5RootMotionMoveToTargetBySpline
#include "R5RootMotionMoveToTargetBySpline.h"
#include "R5AnimatedInteractionHandler.h"
#include "R5AbilityTask_MoveToAnimatedInteractionBySpline.generated.h"

class UGameplayAbility;
class UObject;
class UR5AbilityTask_MoveToAnimatedInteractionBySpline;
class UR5MoveBySplineCreateParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_MoveToAnimatedInteractionBySpline : public UR5AbilityTask_MoveToTargetBySpline {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetData, meta=(AllowPrivateAccess=true))
    FR5AnimatedInteractionHandler TargetData;
    
public:
    UR5AbilityTask_MoveToAnimatedInteractionBySpline();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetData();
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_MoveToAnimatedInteractionBySpline* MoveToAnimatedInteractionBySplineWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, UObject* AnimatedInteraction, UR5MoveBySplineCreateParams* InSplineCreateParams, const FR5RootMotionMoveToTargetBySpline& RootMotionData);
    
};

