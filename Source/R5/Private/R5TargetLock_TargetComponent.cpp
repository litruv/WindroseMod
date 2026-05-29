#include "R5TargetLock_TargetComponent.h"

UR5TargetLock_TargetComponent::UR5TargetLock_TargetComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool UR5TargetLock_TargetComponent::HasTargetSocket() const
{
    return false;
}
