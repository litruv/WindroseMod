#include "R5UIScenarioLibrary.h"

bool UR5UIScenarioLibrary::ContainsUpdatedQuestForFilter(UObject* WorldContextObject, const FGameplayTagContainer& Filter, int32 QuestState, ER5BLQuestFilterType FilterType)
{
    return {};
}

void UR5UIScenarioLibrary::ReceiveQuestUpdate(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& Quest)
{
}

ER5ScenarioQuestState UR5UIScenarioLibrary::GetQuestState(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& Quest)
{
    return {};
}

void UR5UIScenarioLibrary::SendScenarioEvent(UObject* WorldContextObject, const FGameplayTag& EventTag)
{
}

TArray<TSoftObjectPtr<UR5BLQuestParams>> UR5UIScenarioLibrary::GetQuestsParamsByFilter(UObject* WorldContextObject, const FGameplayTagContainer& Filter, int32 QuestState, ER5BLQuestFilterType FilterType, bool bSortByOrder)
{
    return {};
}

UR5UIScenarioLibrary::UR5UIScenarioLibrary()
{
}
