#include "R5UITalentTreeNodeVM.h"

UR5UITalentTreeNodeVM::UR5UITalentTreeNodeVM() {
    this->NodeModel = NULL;
}

void UR5UITalentTreeNodeVM::UpNodeLevel(int32 LevelsToUp) {
}

void UR5UITalentTreeNodeVM::UnselectNodeLevel(int32 LevelsToUnlock) {
}

void UR5UITalentTreeNodeVM::SelectNodeLevel(int32 LevelsToLock, const TSoftObjectPtr<UR5BLPerkParams>& TalentParams) {
}

bool UR5UITalentTreeNodeVM::NotEnoughPoints() const {
    return false;
}

bool UR5UITalentTreeNodeVM::IsSkippedTalent(const TSoftObjectPtr<UR5BLPerkParams>& TalentParams) const {
    return false;
}

bool UR5UITalentTreeNodeVM::IsSelected() const {
    return false;
}

bool UR5UITalentTreeNodeVM::IsNodeAvailable() const {
    return false;
}

bool UR5UITalentTreeNodeVM::HasActiveLevels() const {
    return false;
}

FGameplayTag UR5UITalentTreeNodeVM::GetUISlotTag() const {
    return FGameplayTag{};
}

int32 UR5UITalentTreeNodeVM::GetTotalRequiredPoints() const {
    return 0;
}

int32 UR5UITalentTreeNodeVM::GetTalentsCount() const {
    return 0;
}

TArray<FR5BLPerkInfo> UR5UITalentTreeNodeVM::GetTalents() const {
    return TArray<FR5BLPerkInfo>();
}

FR5BLPerkInfo UR5UITalentTreeNodeVM::GetTalentInfo(const TSoftObjectPtr<UR5BLPerkParams>& TalentParams) const {
    return FR5BLPerkInfo{};
}

int32 UR5UITalentTreeNodeVM::GetSelectedTalentIndex() const {
    return 0;
}

FGameplayTag UR5UITalentTreeNodeVM::GetNodeTag() const {
    return FGameplayTag{};
}

int32 UR5UITalentTreeNodeVM::GetNodeMaxLevel() const {
    return 0;
}

int32 UR5UITalentTreeNodeVM::GetNodeLevel() const {
    return 0;
}

int32 UR5UITalentTreeNodeVM::GetNodeCost() const {
    return 0;
}

int32 UR5UITalentTreeNodeVM::GetCurrentRequiredPoints() const {
    return 0;
}

int32 UR5UITalentTreeNodeVM::GetActiveNodeLevel() const {
    return 0;
}

bool UR5UITalentTreeNodeVM::CanUpNodeLevel() const {
    return false;
}


