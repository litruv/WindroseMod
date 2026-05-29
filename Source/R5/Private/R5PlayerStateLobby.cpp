#include "R5PlayerStateLobby.h"

void AR5PlayerStateLobby::StaticRegisterNativesAR5PlayerStateLobby()
{
}

UR5CharacterCustomizationComponent* AR5PlayerStateLobby::GetCharacterCustomizationComponent() const
{
    return nullptr;
}

AR5PlayerStateLobby::AR5PlayerStateLobby(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}
