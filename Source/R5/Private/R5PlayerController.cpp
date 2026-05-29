#include "R5PlayerController.h"
#include "AbilitySystemComponent.h"

void AR5PlayerController::StaticRegisterNativesAR5PlayerController()
{
}


UAbilitySystemComponent* AR5PlayerController::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5PlayerController::AR5PlayerController(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

AR5PlayerCharacter* AR5PlayerController::GetR5PlayerCharacter() const
{
    return nullptr;
}

AR5PlayerController* AR5PlayerController::GetR5PlayerControllerForLocalPlayer(const UObject* Wco)
{
    return nullptr;
}

bool AR5PlayerController::IsCinematicModeActive() const
{
    return false;
}

void AR5PlayerController::ClientClearControllerFromPawn_Implementation(APawn* InPawn, APlayerController* InPlayerController)
{
}
