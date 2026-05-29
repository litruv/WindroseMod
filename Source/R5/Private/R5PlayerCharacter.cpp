#include "R5PlayerCharacter.h"

void AR5PlayerCharacter::StaticRegisterNativesAR5PlayerCharacter()
{
}

AR5PlayerCharacter::AR5PlayerCharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}



UR5BLInventoryView* AR5PlayerCharacter::GetInventoryView() const
{
    return nullptr;
}

AR5PlayerCharacter* AR5PlayerCharacter::GetR5CharacterForLocalPlayer(const UObject* Wco)
{
    return nullptr;
}

UR5AmmoComponent* AR5PlayerCharacter::GetAmmoComponent() const
{
    return nullptr;
}

void AR5PlayerCharacter::InputModeChanged(ER5InputMode Mode)
{
}

void AR5PlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UR5EquipmentComponent* AR5PlayerCharacter::GetEquipmentComponent_Implementation() const
{
    return nullptr;
}

UR5DefaultEquipment* AR5PlayerCharacter::GetDefaultEquipment_Implementation() const
{
    return nullptr;
}
