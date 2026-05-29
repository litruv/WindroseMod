#include "R5ThreatComponent.h"

UR5ThreatComponent::UR5ThreatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Params = NULL;
}

UR5ThreatComponentParams* UR5ThreatComponent::GetParams() const {
    return NULL;
}


