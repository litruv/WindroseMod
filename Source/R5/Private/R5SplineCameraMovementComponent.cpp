#include "R5SplineCameraMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"

UR5SplineCameraMovementComponent::UR5SplineCameraMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5SplineCameraMovementComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController)
{
}

void UR5SplineCameraMovementComponent::AddUpInput(const FInputActionValue& Value)
{
}

void UR5SplineCameraMovementComponent::AddZoomInput(const FInputActionValue& Value)
{
}

void UR5SplineCameraMovementComponent::AddTurnInput(const FInputActionValue& Value)
{
}

void UR5SplineCameraMovementComponent::ChangeOrbitAimingState(uint8 NewState, AActor* Owner)
{
}

void UR5SplineCameraMovementComponent::OnRep_CameraState()
{
}

void UR5SplineCameraMovementComponent::ChangeAimInput(const FInputActionValue& Value)
{
}

void UR5SplineCameraMovementComponent::OnAliveStatusChanged(bool bAlive)
{
}

void UR5SplineCameraMovementComponent::ChangeSpyGlassInput(const FInputActionValue& Value)
{
}

void UR5SplineCameraMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5SplineCameraMovementComponent::ServerSetCameraState_Implementation(const FGameplayTag& NewState, const FGameplayTag& PreviousState)
{
}

void UR5SplineCameraMovementComponent::ServerSetCameraTransform_Implementation(const FVector& Location, const FRotator& Rotation)
{
}
