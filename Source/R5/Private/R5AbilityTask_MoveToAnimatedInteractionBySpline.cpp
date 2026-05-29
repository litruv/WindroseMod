#include "R5AbilityTask_MoveToAnimatedInteractionBySpline.h"

UR5AbilityTask_MoveToAnimatedInteractionBySpline* UR5AbilityTask_MoveToAnimatedInteractionBySpline::MoveToAnimatedInteractionBySplineWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, UObject* AnimatedInteraction, UR5MoveBySplineCreateParams* InSplineCreateParams, const FR5RootMotionMoveToTargetBySpline& RootMotionData)
{
    return nullptr;
}

void UR5AbilityTask_MoveToAnimatedInteractionBySpline::OnRep_TargetData()
{
}

UR5AbilityTask_MoveToAnimatedInteractionBySpline::UR5AbilityTask_MoveToAnimatedInteractionBySpline()
{
}

void UR5AbilityTask_MoveToAnimatedInteractionBySpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

