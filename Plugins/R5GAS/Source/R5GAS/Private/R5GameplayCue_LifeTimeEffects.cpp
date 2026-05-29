#include "R5GameplayCue_LifeTimeEffects.h"

void AR5GameplayCue_LifeTimeEffects::StaticRegisterNativesAR5GameplayCue_LifeTimeEffects()
{
}


AR5GameplayCue_LifeTimeEffects::AR5GameplayCue_LifeTimeEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HideOnSpawnDuration = 1.00f;
    this->MaxDurationRatioToSpawnFX = 0.50f;
    this->OnSpawnSystem = NULL;
    this->OnDespawnSystem = NULL;
    this->SpawnedNS = NULL;
    this->Target = NULL;
}


