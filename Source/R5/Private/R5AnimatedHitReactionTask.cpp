#include "R5AnimatedHitReactionTask.h"

UR5AnimatedHitReactionTask* UR5AnimatedHitReactionTask::CreateAnimatedHitReactionTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& InImpactDirection, float InImpactPower, float InDuration, UCurveFloat* InCurve)
{
    return nullptr;
}

UR5AnimatedHitReactionTask::UR5AnimatedHitReactionTask()
{
}

void UR5AnimatedHitReactionTask::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

