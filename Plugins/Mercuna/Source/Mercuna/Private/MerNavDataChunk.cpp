#include "MerNavDataChunk.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AMerNavDataChunk::StaticRegisterNativesAMerNavDataChunk()
{
}


AMerNavDataChunk::AMerNavDataChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->NavGraphPtr = NULL;
    this->CRC = 0;
}


