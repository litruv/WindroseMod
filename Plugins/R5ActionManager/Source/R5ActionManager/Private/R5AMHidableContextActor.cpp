#include "R5AMHidableContextActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5AMHidableContextActor::StaticRegisterNativesAR5AMHidableContextActor()
{
}


AR5AMHidableContextActor::AR5AMHidableContextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


