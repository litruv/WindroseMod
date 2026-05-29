#include "R5NewOverlapDamageComponent.h"

UR5NewOverlapDamageComponent::UR5NewOverlapDamageComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5NewOverlapDamageComponent::OnRadiusCoeffChanged()
{
}

void UR5NewOverlapDamageComponent::OnRep_CurrentState()
{
}

void UR5NewOverlapDamageComponent::GetCurrentState(ER5NewOverlapDamageState& OutState) const
{
}

void UR5NewOverlapDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5NewOverlapDamageComponent::MulticastChangeState_Implementation(ER5NewOverlapDamageState NewState)
{
}
