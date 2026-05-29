#include "R5POISpawnerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5POISpawnerActor::StaticRegisterNativesAR5POISpawnerActor()
{
}


AR5POISpawnerActor::AR5POISpawnerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->POIAsset = NULL;
}


