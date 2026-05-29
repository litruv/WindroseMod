#include "R5MarkerModelShip.h"

UR5FactionComponent* UR5MarkerModelShip::GetFactionComponent() const
{
    return nullptr;
}

void UR5MarkerModelShip::OnModuleHealthChanged(const FGameplayTag& ModuleTag, float TotalHealth)
{
}

bool UR5MarkerModelShip::IsOwnedShip() const
{
    return false;
}

FLinearColor UR5MarkerModelShip::GetColor(const FString& Key) const
{
    return {};
}

UAbilitySystemComponent* UR5MarkerModelShip::GetAbilitySystemComponent() const
{
    return nullptr;
}

bool UR5MarkerModelShip::HasHealthModule(const FGameplayTag& ModuleTag) const
{
    return false;
}

FText UR5MarkerModelShip::GetShipName() const
{
    return {};
}

bool UR5MarkerModelShip::IsBot() const
{
    return false;
}

void UR5MarkerModelShip::ListenForChangeAttributes(TArray<FGameplayAttribute> Attributes, FOnAttributeChanged Delegate)
{
}

UR5AttributeSet* UR5MarkerModelShip::GetAttributeSet() const
{
    return nullptr;
}

TSoftObjectPtr<UTexture2D> UR5MarkerModelShip::GetFactionIcon() const
{
    return {};
}

UR5MarkerModelShip::UR5MarkerModelShip()
{
}
