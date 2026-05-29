#include "R5UIScenarioBlackboardIntObserver.h"

UR5UIScenarioBlackboardIntObserver::UR5UIScenarioBlackboardIntObserver()
{
}

UR5UIScenarioBlackboardIntObserver* UR5UIScenarioBlackboardIntObserver::CreateBlackboardIntObserverForBB(UObject* WorldContextObject, FGameplayTag ValueKey, UR5ScenarioBlackboard* Blackboard)
{
    return nullptr;
}

UR5UIScenarioBlackboardIntObserver* UR5UIScenarioBlackboardIntObserver::CreateBlackboardIntObserver(UObject* WorldContextObject, FGameplayTag ValueKey, ER5ScenarioBlackboardType Type)
{
    return nullptr;
}

int32 UR5UIScenarioBlackboardIntObserver::GetValue() const
{
    return 0;
}
