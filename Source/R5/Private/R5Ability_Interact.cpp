#include "R5Ability_Interact.h"

UR5InteractionTargetModel* UR5Ability_Interact::GetInteractionTargetModel() const
{
    return nullptr;
}

void UR5Ability_Interact::OnPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
}

void UR5Ability_Interact::OnInteractRequestEventReceived(FGameplayEventData Payload)
{
}

void UR5Ability_Interact::OnAccessibleOptionsChanged(const TArray<UR5InteractionOption*>& NewOptions)
{
}

UR5Ability_Interact::UR5Ability_Interact()
{
}
