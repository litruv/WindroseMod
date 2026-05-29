#include "R5ScenarioTracker_PoiCharactersInZone.h"

void UR5ScenarioTracker_PoiCharactersInZone::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void UR5ScenarioTracker_PoiCharactersInZone::OnActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

UR5ScenarioTracker_PoiCharactersInZone* UR5ScenarioTracker_PoiCharactersInZone::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer CharacterTags, FGameplayTag WriteToBlackboardAs, FGameplayTagContainer PoiOverlapZones)
{
    return nullptr;
}

UR5ScenarioTracker_PoiCharactersInZone::UR5ScenarioTracker_PoiCharactersInZone()
{
}
