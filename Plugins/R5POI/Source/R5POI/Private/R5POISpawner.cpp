#include "R5POISpawner.h"
#include "R5POISpawnerComponentBase.h"

void AR5POISpawner::StaticRegisterNativesAR5POISpawner()
{
}

AR5POISpawner::AR5POISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UR5POISpawnerComponentBase>(TEXT("Root"));
    this->bCutGrassUnderneath = false;
    this->RadiusOffset = 0.00f;
}


