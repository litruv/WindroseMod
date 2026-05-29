#include "R5AMCollisionContextActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5AMCollisionContextActor::StaticRegisterNativesAR5AMCollisionContextActor()
{
}


AR5AMCollisionContextActor::AR5AMCollisionContextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionsRootComponent"));
}


