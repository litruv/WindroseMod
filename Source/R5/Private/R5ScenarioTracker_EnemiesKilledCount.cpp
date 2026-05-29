#include "R5ScenarioTracker_EnemiesKilledCount.h"

UR5ScenarioTracker* UR5ScenarioTracker_EnemiesKilledCount::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, TSubclassOf<APawn> EnemyClass, FGameplayTag KillCounterTag, bool AllowRegisterChildClasses)
{
    return nullptr;
}

void UR5ScenarioTracker_EnemiesKilledCount::OnPawnEnemyDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage)
{
}

UR5ScenarioTracker_EnemiesKilledCount::UR5ScenarioTracker_EnemiesKilledCount()
{
}
