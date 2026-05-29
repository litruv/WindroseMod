#include "R5UIQuestObserver.h"

UR5BLQuestParams* UR5UIQuestObserver::GetQuestParamsInstance() const
{
    return nullptr;
}

TSoftObjectPtr<UR5BLQuestParams> UR5UIQuestObserver::GetQuestParams() const
{
    return {};
}

bool UR5UIQuestObserver::HasUpdate() const
{
    return false;
}

ER5ScenarioQuestState UR5UIQuestObserver::GetQuestState() const
{
    return {};
}

void UR5UIQuestObserver::OnQuestScoreValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver)
{
}

void UR5UIQuestObserver::OnQuestStateValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver)
{
}

bool UR5UIQuestObserver::HasQuestScore() const
{
    return false;
}

UR5UIQuestObserver* UR5UIQuestObserver::CreateQuestObserver(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& QuestToObserve)
{
    return nullptr;
}

int32 UR5UIQuestObserver::GetCurrentQuestScore() const
{
    return 0;
}

int32 UR5UIQuestObserver::GetMaxQuestScore() const
{
    return 0;
}

void UR5UIQuestObserver::OnQuestMaxScoreValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver)
{
}

UR5UIQuestObserver::UR5UIQuestObserver()
{
}
