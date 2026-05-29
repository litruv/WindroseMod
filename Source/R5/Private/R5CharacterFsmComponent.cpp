#include "R5CharacterFsmComponent.h"

UR5CharacterFsmComponent::UR5CharacterFsmComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5CharacterFsmComponent* UR5CharacterFsmComponent::GetCharacterFsmComponent(const AActor* Actor)
{
    return nullptr;
}

FGameplayTag UR5CharacterFsmComponent::GetCurrentState() const
{
    return {};
}

UR5CharacterFsmComponent* UR5CharacterFsmComponent::GetR5CharacterFsmForLocalPlayer(const UObject* Wco)
{
    return nullptr;
}

bool UR5CharacterFsmComponent::CanChangeState(const FGameplayTag& NewState, ER5FSMChangeStateType ChangeStateType, bool bIsAuthorityRequest) const
{
    return false;
}

void UR5CharacterFsmComponent::ChangeState(const FGameplayTag& NewState)
{
}

void UR5CharacterFsmComponent::ChangeStateToDefault()
{
}

void UR5CharacterFsmComponent::HasCurrentState(bool& bIsCorrectly, FGameplayTag& CurrentState) const
{
}

void UR5CharacterFsmComponent::ServerChangeState_Implementation(const FGameplayTag& NewState, ER5FSMChangeStateType ChangeStateType)
{
}

void UR5CharacterFsmComponent::ServerEnableDefaultState_Implementation(ER5FSMChangeStateType ChangeStateType)
{
}
