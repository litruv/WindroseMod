#include "R5AMEffectSpawnerContextActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5AMEffectSpawnerContextActor::StaticRegisterNativesAR5AMEffectSpawnerContextActor()
{
}


AR5AMEffectSpawnerContextActor::AR5AMEffectSpawnerContextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("VFXSpawnPointsRoot"));
}


