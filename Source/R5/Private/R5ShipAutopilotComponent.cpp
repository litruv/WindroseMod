#include "R5ShipAutopilotComponent.h"

UR5ShipAutopilotComponent::UR5ShipAutopilotComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ShipAutopilotComponent::OnPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
}
