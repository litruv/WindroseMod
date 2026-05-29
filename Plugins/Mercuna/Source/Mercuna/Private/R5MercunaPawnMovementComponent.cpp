#include "R5MercunaPawnMovementComponent.h"

UR5MercunaPawnMovementComponent::UR5MercunaPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxWalkSpeed = 600.00f;
    this->MaxAcceleration = 2048.00f;
    this->BrakingDecelerationWalking = 2048.00f;
    this->GroundFriction = 8.00f;
}


