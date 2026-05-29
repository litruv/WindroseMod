#include "R5StatTreeVM.h"

UR5StatTreeVM::UR5StatTreeVM() {
    this->EntityProgressionVM = NULL;
}

void UR5StatTreeVM::ResetStats() {
}

bool UR5StatTreeVM::HasActiveNode() const {
    return false;
}

TArray<FR5BLItemsStackData> UR5StatTreeVM::GetResetProgressionCost() const {
    return TArray<FR5BLItemsStackData>();
}

TArray<UR5StatTreeNodeVM*> UR5StatTreeVM::GetNodes() const {
    return TArray<UR5StatTreeNodeVM*>();
}

int32 UR5StatTreeVM::GetFreeStatPoints() const {
    return 0;
}

UR5EntityProgressionVM* UR5StatTreeVM::GetEntityProgressionVM() const {
    return NULL;
}

int32 UR5StatTreeVM::GetAvailableStatPoints() const {
    return 0;
}

void UR5StatTreeVM::Confirm(const TMap<FGameplayTag, int32>& StatPointsByNodeTag) {
}

bool UR5StatTreeVM::CanResetProgression() const {
    return false;
}


