#include "R5MercunaPlayerGroundNavInvokerComponent.h"

UR5MercunaPlayerGroundNavInvokerComponent::UR5MercunaPlayerGroundNavInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->GenerationRadius = 3000.00f;
    this->RemovalRadius = 5000.00f;
}


