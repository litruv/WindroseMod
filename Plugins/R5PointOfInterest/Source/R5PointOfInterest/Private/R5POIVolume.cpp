#include "R5POIVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5POIVolume::StaticRegisterNativesAR5POIVolume()
{
}


AR5POIVolume::AR5POIVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ShapeComponent = NULL;
}


