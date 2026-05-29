#include "HealthComponent.h"

bool UHealthComponent::IsAliveActor(const AActor* Actor)
{
    return false;
}

void UHealthComponent::OnRep_ChangedAliveState()
{
}

UHealthComponent* UHealthComponent::GetHealthComponent(const AActor* Actor)
{
    return nullptr;
}

bool UHealthComponent::IsAlive() const
{
    return bAlive;
}

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
