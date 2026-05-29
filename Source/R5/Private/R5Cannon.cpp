#include "R5Cannon.h"
#include "AbilitySystemComponent.h"

void AR5Cannon::StaticRegisterNativesAR5Cannon()
{
}


UAbilitySystemComponent* AR5Cannon::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5Cannon::AR5Cannon(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5Cannon::OnOwnerDestroyed(AActor* DestroyedActor)
{
}

void AR5Cannon::SetCannonTick(bool Enable)
{
}

FR5CannonScenarioInfo AR5Cannon::GetScenarioInfo() const
{
    return {};
}

void AR5Cannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
