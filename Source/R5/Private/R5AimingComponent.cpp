#include "R5AimingComponent.h"

UR5AimingComponent::UR5AimingComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5AimingComponent::OnRep_CompressedMeleePitch()
{
}

void UR5AimingComponent::OnRep_CompressedAimYaw()
{
}

void UR5AimingComponent::OnRep_CurrentTarget()
{
}

void UR5AimingComponent::OnRep_CompressedAimPitch()
{
}

void UR5AimingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
