#include "R5BuoyancyComponent.h"

UR5BuoyancyComponent::UR5BuoyancyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShipModelSettings = NULL;
    this->bKeepRotationIntegrationError = false;
    this->DefaultZ = 0.00f;
    this->DefaultPitch = 0.00f;
}

void UR5BuoyancyComponent::SuspendSimulation() {
}

void UR5BuoyancyComponent::ResumeSimulation() {
}


