#include "R5BiomeFogVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Components/StaticMeshComponent.h"

void AR5BiomeFogVolume::StaticRegisterNativesAR5BiomeFogVolume()
{
}

AR5BiomeFogVolume::AR5BiomeFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FogVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FogVolume"));
    this->FogVolume->SetupAttachment(RootComponent);
}


