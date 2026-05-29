#include "MercunaVolumeComponent.h"

UMercunaVolumeComponent::UMercunaVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = true;
    this->bUseEditorCompositing = true;
}


