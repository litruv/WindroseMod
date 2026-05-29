#include "R5UIScenarioBlackboardValueObserver.h"

bool UR5UIScenarioBlackboardValueObserver::HasValue() const
{
    return false;
}

FGameplayTag UR5UIScenarioBlackboardValueObserver::GetObservedKey() const
{
    return {};
}

UR5UIScenarioBlackboardValueObserver::UR5UIScenarioBlackboardValueObserver()
{
}
