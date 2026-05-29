#include "R5BoardingParticipantComponent.h"

void UR5BoardingParticipantComponent::OnPawnChanged(APawn* NewPawn)
{
}

UR5BoardingParticipantComponent::UR5BoardingParticipantComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BoardingParticipantComponent::OnRep_IsInActiveBoardingVolume()
{
}

void UR5BoardingParticipantComponent::OnRep_ReplicatedResult()
{
}

void UR5BoardingParticipantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
