#include "R5ShipPhysicalMovementComponent.h"

UR5ShipPhysicalMovementComponent::UR5ShipPhysicalMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShipMovementControlData = NULL;
}

void UR5ShipPhysicalMovementComponent::UpGearInputComplete() {
}

void UR5ShipPhysicalMovementComponent::ServerShiftGear_Implementation(bool bIncrease) {
}

void UR5ShipPhysicalMovementComponent::ServerChangeRudderInput_Implementation(ERudderInput InRudderInput) {
}

void UR5ShipPhysicalMovementComponent::OnOwnerPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UR5ShipPhysicalMovementComponent::OnCaptainChanged(AActor* NewCaptain, AActor* OldCaptain) {
}

void UR5ShipPhysicalMovementComponent::DownGearInputComplete() {
}


