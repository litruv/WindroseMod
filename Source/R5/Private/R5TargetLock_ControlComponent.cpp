#include "R5TargetLock_ControlComponent.h"

UR5TargetLock_ControlComponent::UR5TargetLock_ControlComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5TargetLock_TargetComponent* UR5TargetLock_ControlComponent::GetTarget() const
{
    return nullptr;
}

USceneComponent* UR5TargetLock_ControlComponent::GetTargetSceneComponent() const
{
    return nullptr;
}

FVector UR5TargetLock_ControlComponent::GetTargetLocation() const
{
    return {};
}

bool UR5TargetLock_ControlComponent::HasTargetSocket() const
{
    return false;
}

FName UR5TargetLock_ControlComponent::GetTargetSocketName() const
{
    return {};
}

bool UR5TargetLock_ControlComponent::IsTargetLocked() const
{
    return false;
}

void UR5TargetLock_ControlComponent::ServerSwitchTarget_Implementation(UR5TargetLock_TargetComponent* Target)
{
}

void UR5TargetLock_ControlComponent::ServerEnableTargetLock_Implementation(UR5TargetLock_TargetComponent* Target)
{
}

void UR5TargetLock_ControlComponent::ServerClearTargetLock_Implementation()
{
}
