#include "R5ScenarioTracker_PoiActorsInZone.h"

void UR5ScenarioTracker_PoiActorsInZone::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

UR5ScenarioTracker_PoiActorsInZone* UR5ScenarioTracker_PoiActorsInZone::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer ActorTags, FGameplayTag WriteToBlackboardAs, FGameplayTagContainer PoiOverlapZones, TSubclassOf<AActor> FilterClass)
{
    return nullptr;
}

void UR5ScenarioTracker_PoiActorsInZone::OnActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

UR5ScenarioTracker_PoiActorsInZone::UR5ScenarioTracker_PoiActorsInZone()
{
}
