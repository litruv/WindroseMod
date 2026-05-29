#include "R5ScenarioTracker_EnemiesKilledCount_ManyClass.h"

UR5ScenarioTracker* UR5ScenarioTracker_EnemiesKilledCount_ManyClass::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, TArray<TSubclassOf<APawn>> EnemyClasses, FGameplayTag KillCounterTag, bool AllowRegisterChildClasses)
{
    return nullptr;
}

void UR5ScenarioTracker_EnemiesKilledCount_ManyClass::OnPawnEnemyDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage)
{
}

UR5ScenarioTracker_EnemiesKilledCount_ManyClass::UR5ScenarioTracker_EnemiesKilledCount_ManyClass()
{
}
