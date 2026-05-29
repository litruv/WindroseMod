#include "R5AbilityTask_MoveToTargetBySpline.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_MoveToTargetBySpline::UR5AbilityTask_MoveToTargetBySpline() {
    this->Target = NULL;
    this->SplineCreateParams = NULL;
    this->BaseSpeed = 0.00f;
    this->SpeedMultiplierCurve = NULL;
    this->Duration = 0.00f;
    this->SplineActor = NULL;
    this->SplineComponent = NULL;
}

UR5AbilityTask_MoveToTargetBySpline* UR5AbilityTask_MoveToTargetBySpline::MoveToTargetBySplineWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* NewTarget, UR5MoveBySplineCreateParams* NewSplineCreateParams, const FR5RootMotionMoveToTargetBySpline& RootMotionData) {
    return NULL;
}

UR5AbilityTask_MoveToTargetBySpline* UR5AbilityTask_MoveToTargetBySpline::MoveToTargetBySpline(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* NewTarget, UR5MoveBySplineCreateParams* NewSplineCreateParams, float NewBaseSpeed, UCurveFloat* NewSpeedMultiplierCurve, float NewDuration, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
    return NULL;
}

void UR5AbilityTask_MoveToTargetBySpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_MoveToTargetBySpline, Target);
    DOREPLIFETIME(UR5AbilityTask_MoveToTargetBySpline, SplineCreateParams);
    DOREPLIFETIME(UR5AbilityTask_MoveToTargetBySpline, BaseSpeed);
    DOREPLIFETIME(UR5AbilityTask_MoveToTargetBySpline, SpeedMultiplierCurve);
    DOREPLIFETIME(UR5AbilityTask_MoveToTargetBySpline, Duration);
}


