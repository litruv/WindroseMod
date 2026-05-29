#include "R5AbilityTask_FindTeleportSpot.h"

UR5AbilityTask_FindTeleportSpot::UR5AbilityTask_FindTeleportSpot() {
    this->TestLimitPerFrame = 3;
    this->FindBaseSweepOffsetDown = 1500.00f;
}

UR5AbilityTask_FindTeleportSpot* UR5AbilityTask_FindTeleportSpot::NewTaskLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FR5TeleportSpotCollision SpotCollision, TArray<FVector> PredefinedLocations, float SearchRadius, const FVector& LocationToSearchAround) {
    return NULL;
}

UR5AbilityTask_FindTeleportSpot* UR5AbilityTask_FindTeleportSpot::NewTaskActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, FR5TeleportSpotCollision SpotCollision, TArray<FVector> PredefinedLocations, float SearchRadius, const AActor* ActorToSearchAround) {
    return NULL;
}


