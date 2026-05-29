#include "R5SubtitleManager.h"

void UR5SubtitleManager::ClearHistorySubtitle()
{
}

bool UR5SubtitleManager::IsHistoryEmpty()
{
    return false;
}

void UR5SubtitleManager::ClearActiveSubtitle()
{
}

UR5SubtitleManager* UR5SubtitleManager::Get(UObject* Wco)
{
    return nullptr;
}

bool UR5SubtitleManager::IsActiveEmpty()
{
    return false;
}

FText UR5SubtitleManager::GetActiveSubtitle()
{
    return {};
}

void UR5SubtitleManager::PlaySubtitle(const UWorld* Wco, const FText& Text, float Duration, int64 Group, int32 Priority)
{
}

FText UR5SubtitleManager::GetHistorySubtitle()
{
    return {};
}

UR5SubtitleManager::UR5SubtitleManager()
{
}
