#include "R5ScenarioTracker_ShipPassengersCount.h"

void UR5ScenarioTracker_ShipPassengersCount::OnPassengerAdded(APawn* NewPassenger)
{
}

void UR5ScenarioTracker_ShipPassengersCount::OnPassengerRemoved(APawn* ExPassenger)
{
}

UR5ScenarioTracker_ShipPassengersCount* UR5ScenarioTracker_ShipPassengersCount::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer ActorTags, FGameplayTag WriteToBlackboardAs, TSubclassOf<APawn> FilterClass)
{
    return nullptr;
}

UR5ScenarioTracker_ShipPassengersCount::UR5ScenarioTracker_ShipPassengersCount()
{
}
