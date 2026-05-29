#include "R5StatTreeNodeVM.h"

UR5StatTreeNodeVM::UR5StatTreeNodeVM() {
    this->NodeModel = NULL;
}

FGameplayTag UR5StatTreeNodeVM::GetAttributeTag() const {
    return FGameplayTag{};
}

int32 UR5StatTreeNodeVM::GetAttributePoints() const {
    return 0;
}

int32 UR5StatTreeNodeVM::GetAttributeMaxLevel() const {
    return 0;
}

FR5BLPerkInfo UR5StatTreeNodeVM::GetAttributeInfo() const {
    return FR5BLPerkInfo{};
}

bool UR5StatTreeNodeVM::CanUpNodeLevel() const {
    return false;
}


