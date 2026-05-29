#include "R5ScenarioTracker_CrewDeadCount.h"

UR5ScenarioTracker_CrewDeadCount* UR5ScenarioTracker_CrewDeadCount::CreateTracker(ER5ScenarioBlackboardType Blackboard, UR5ScenarioNode* Owner, bool SaveToPersistent, FGameplayTagContainer MobTypeTags, int32 CountOfDeath, FGameplayTag CurrentDeathCountTag)
{
    return nullptr;
}

void UR5ScenarioTracker_CrewDeadCount::OnCrewDead(const FGameplayTag& CrewmemberType, int32 InCount)
{
}

UR5ScenarioTracker_CrewDeadCount::UR5ScenarioTracker_CrewDeadCount()
{
}
