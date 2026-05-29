#include "R5HFSM_BuildingPanel.h"

int32 UR5HFSM_BuildingPanel::GetMaxCountBuildBrush(const UR5BuildingBrush* BuildingBrush, const APlayerState* PlayerState)
{
    return 0;
}

TArray<FR5GenericTabData> UR5HFSM_BuildingPanel::CreateTabsData(const UR5BuildingBrush* SelectedBrush) const
{
    return {};
}

void UR5HFSM_BuildingPanel::MarkItemSeen(const FR5BuildingItemRuntimeData& ItemData)
{
}

TArray<UR5BuildingGroupWidget*> UR5HFSM_BuildingPanel::GetBuildingGroupsByCategoryTag(const FGameplayTag& CategoryTag, const UR5BuildingBrush* SelectedBrush) const
{
    return {};
}

UR5HFSM_BuildingPanel::UR5HFSM_BuildingPanel()
{
}
