#include "HFSMStateComponent.h"

UHFSMStateComponent::UHFSMStateComponent() {
    this->State = NULL;
    this->bTickable = false;
    this->bAllowUseEnhancedInput = false;
}

void UHFSMStateComponent::SetComponentTickEnabled(bool bEnabled) {
}




UHFSMState* UHFSMStateComponent::GetState() const {
    return NULL;
}


