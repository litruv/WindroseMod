#include "R5DeployableAIActor.h"
#include "AbilitySystemComponent.h"

void AR5DeployableAIActor::StaticRegisterNativesAR5DeployableAIActor()
{
}


UAbilitySystemComponent* AR5DeployableAIActor::GetAbilitySystemComponent() const
{
    return nullptr;
}

void AR5DeployableAIActor::OnHealthChanged(float Health, float MaxHealth)
{
}

AR5DeployableAIActor::AR5DeployableAIActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}
