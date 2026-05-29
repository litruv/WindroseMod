#include "R5AICharacter.h"
#include "AbilitySystemComponent.h"

void AR5AICharacter::StaticRegisterNativesAR5AICharacter()
{
}


UAbilitySystemComponent* AR5AICharacter::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5AICharacter::AR5AICharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}





















void AR5AICharacter::ActivateCharacter()
{
}

AR5AIController* AR5AICharacter::GetR5AIController() const
{
    return nullptr;
}

void AR5AICharacter::OnRep_ColorID()
{
}

void AR5AICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
