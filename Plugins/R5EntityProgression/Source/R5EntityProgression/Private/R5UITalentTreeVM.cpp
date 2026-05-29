#include "R5UITalentTreeVM.h"

UR5UITalentTreeVM::UR5UITalentTreeVM() {
    this->EntityProgressionVM = NULL;
    this->TalentTreeProgressionParams = NULL;
}

void UR5UITalentTreeVM::UpNodeLevel(FGameplayTag NodeTag, int32 LevelsToUp) {
}

void UR5UITalentTreeVM::UnselectNodeLevel(FGameplayTag NodeTag, int32 LevelsToUnlock) {
}

void UR5UITalentTreeVM::UnselectAllNodes() {
}

void UR5UITalentTreeVM::SelectNodeLevel(FGameplayTag NodeTag, int32 LevelsToLock, const TSoftObjectPtr<UR5BLPerkParams>& SelectedPerk) {
}

void UR5UITalentTreeVM::ResetTalentTree() {
}

bool UR5UITalentTreeVM::IsLayerInProgress(FGameplayTag BranchTag, int32 LayerIndex) const {
    return false;
}

bool UR5UITalentTreeVM::IsLayerFinished(FGameplayTag BranchTag, int32 LayerIndex) const {
    return false;
}

bool UR5UITalentTreeVM::HasSelectedLevels() const {
    return false;
}

bool UR5UITalentTreeVM::HasActiveNode() const {
    return false;
}

TArray<FR5BLItemsStackData> UR5UITalentTreeVM::GetResetProgressionCost() const {
    return TArray<FR5BLItemsStackData>();
}

int32 UR5UITalentTreeVM::GetPointsInBranch(int32 BranchId) const {
    return 0;
}

UR5UITalentTreeNodeVM* UR5UITalentTreeVM::GetNodeByUISlotTag(FGameplayTag SotTag) const {
    return NULL;
}

UR5UITalentTreeNodeVM* UR5UITalentTreeVM::GetNodeByTag(FGameplayTag NodeTag) const {
    return NULL;
}

FR5UILayerProgressionInfo UR5UITalentTreeVM::GetLayerProgress(FGameplayTag BranchTag, int32 LayerIndex) const {
    return FR5UILayerProgressionInfo{};
}

int32 UR5UITalentTreeVM::GetFreeTalentPoints() const {
    return 0;
}

UR5EntityProgressionVM* UR5UITalentTreeVM::GetEntityProgressionVM() const {
    return NULL;
}

int32 UR5UITalentTreeVM::GetCurrentRequiredPointsForNodesTag(FGameplayTag NodesTag) const {
    return 0;
}

int32 UR5UITalentTreeVM::GetAvailableTalentPoints() const {
    return 0;
}

void UR5UITalentTreeVM::Confirm() {
}

bool UR5UITalentTreeVM::CanUpNodeLevel(FGameplayTag NodeTag, int32 LevelsToUp) {
    return false;
}

bool UR5UITalentTreeVM::CanResetProgression() const {
    return false;
}


