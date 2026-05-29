#include "MerNavGridRenderingComponent.h"

UMerNavGridRenderingComponent::UMerNavGridRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawPolygons = true;
    this->bDrawPolygonLabels = false;
    this->bDrawGenerationBoxes = false;
    this->bDrawAutoJumpLinks = true;
    this->DrawDistance = 3200;
}


