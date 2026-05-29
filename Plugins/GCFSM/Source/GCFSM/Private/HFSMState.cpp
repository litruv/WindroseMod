#include "HFSMState.h"
#include "Templates/SubclassOf.h"

UHFSMState::UHFSMState() {
    this->bAllowUseEnhancedInput = false;
    this->bAllowMultiTransition = false;
}


bool UHFSMState::GetClosestComponentInHierarchyUp(TSubclassOf<UHFSMStateComponent> ComponentClass, UHFSMStateComponent*& OutComponent) {
    return false;
}


