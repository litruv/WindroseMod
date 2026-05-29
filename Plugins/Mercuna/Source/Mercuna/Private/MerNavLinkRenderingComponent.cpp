#include "MerNavLinkRenderingComponent.h"

UMerNavLinkRenderingComponent::UMerNavLinkRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


