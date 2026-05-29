#include "R5MarkersWorldSubsystem.h"

void UR5MarkersWorldSubsystem::HideMarkersByWhiteList(const FGameplayTag& LinkTag, int32 MarkersMask)
{
}

void UR5MarkersWorldSubsystem::RemoveMarkerByWidgetClass(UR5MarkerModelBase* MarkerModel, const TSoftClassPtr<UR5MarkerWidget>& WidgetClass)
{
}

void UR5MarkersWorldSubsystem::RemoveMarker(UR5MarkerModelBase* MarkerModel)
{
}

void UR5MarkersWorldSubsystem::UnmountMarker(UR5MarkerModelBase* MarkerModel)
{
}

TArray<FVector> UR5MarkersWorldSubsystem::GetQuestMarkersPoints(const TSoftObjectPtr<UR5BLQuestParams>& QuestParams) const
{
    return {};
}

void UR5MarkersWorldSubsystem::AddMarker(UR5MarkerModelBase* MarkerModel, bool bShouldReplicate)
{
}

TArray<UR5MarkerModelBase*> UR5MarkersWorldSubsystem::GetModels() const
{
    return {};
}

void UR5MarkersWorldSubsystem::MountMarker(UR5MarkerModelBase* MarkerModel)
{
}

void UR5MarkersWorldSubsystem::ShowMarkersByWhiteList(const FGameplayTag& LinkTag, int32 MarkersMask)
{
}

TArray<UR5MarkersObserver*> UR5MarkersWorldSubsystem::GetObservers() const
{
    return {};
}

UR5MarkersObserver* UR5MarkersWorldSubsystem::GetObserverByWidgetType(const TSoftClassPtr<UR5MarkerWidget>& WidgetClass) const
{
    return nullptr;
}

UR5MarkersWorldSubsystem::UR5MarkersWorldSubsystem()
{
}
