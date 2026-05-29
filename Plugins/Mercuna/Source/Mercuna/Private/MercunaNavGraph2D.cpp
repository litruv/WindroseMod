#include "MercunaNavGraph2D.h"
#include "MerNavGridRenderingComponent.h"

void AMercunaNavGraph2D::StaticRegisterNativesAMercunaNavGraph2D()
{
}


AMercunaNavGraph2D::AMercunaNavGraph2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMerNavGridRenderingComponent>(TEXT("MerNavGridRenderingComponent"));
    this->MerNavGraphRenderingComponent = (UMerNavGraphRenderingComponent*)RootComponent;
    this->bUsePhysicalMaterials = false;
    this->bUseNavSeeds = true;
    this->DebugDrawMode = EMerGridDebugDrawMode::DISABLED;
    this->DebugDrawSubmode = EMerGridDebugDrawSubmode::NAVIGABLE;
    this->NextMaterialId = 0;
}

bool AMercunaNavGraph2D::HasGeneratedNavMeshInVolumes(const TArray<FBox>& Volumes) {
    return false;
}


