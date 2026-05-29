#include "R5UIPinQuestViewModel.h"

TSoftObjectPtr<UR5BLQuestParams> UR5UIPinQuestViewModel::GetPinnedQuest() const
{
    return {};
}

void UR5UIPinQuestViewModel::PinQuest(const TSoftObjectPtr<UR5BLQuestParams>& QuestToPin)
{
}

UR5UIPinQuestViewModel* UR5UIPinQuestViewModel::CreatePinQuestVM(UObject* WorldContextObject)
{
    return nullptr;
}

UR5UIPinQuestViewModel::UR5UIPinQuestViewModel()
{
}
