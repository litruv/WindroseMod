#include "R5ScenarioTracker_CurrentActorDeathCount.h"

UR5ScenarioTracker_CurrentActorDeathCount* UR5ScenarioTracker_CurrentActorDeathCount::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTag DeathCounterTag)
{
    return nullptr;
}

void UR5ScenarioTracker_CurrentActorDeathCount::OnDeath(AActor* Owner)
{
}

UR5ScenarioTracker_CurrentActorDeathCount::UR5ScenarioTracker_CurrentActorDeathCount()
{
}
