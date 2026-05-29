#include "R5ShipEmbarkComponent.h"

void UR5ShipEmbarkComponent::AliveStatusChanged(bool bAliveStatus)
{
}

UR5ShipEmbarkComponent::UR5ShipEmbarkComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ShipEmbarkComponent::OnRep_Captain(AActor* OldCaptain)
{
}

void UR5ShipEmbarkComponent::CaptainDeath(AActor* DeadCaptain)
{
}

void UR5ShipEmbarkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5ShipEmbarkComponent::MulticastEmbarkNotify_Implementation(const FVector_NetQuantize& Location, bool Embark)
{
}

void UR5ShipEmbarkComponent::ServerDisembarkCaptain_Implementation()
{
}
