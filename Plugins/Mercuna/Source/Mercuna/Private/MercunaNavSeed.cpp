#include "MercunaNavSeed.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AMercunaNavSeed::StaticRegisterNativesAMercunaNavSeed()
{
}


AMercunaNavSeed::AMercunaNavSeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("NavSeedComp"));
}


