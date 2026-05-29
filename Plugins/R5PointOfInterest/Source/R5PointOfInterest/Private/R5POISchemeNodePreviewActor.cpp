#include "R5POISchemeNodePreviewActor.h"
#include "R5POIPreviewMetaDataComponent.h"

void AR5POISchemeNodePreviewActor::StaticRegisterNativesAR5POISchemeNodePreviewActor()
{
}


AR5POISchemeNodePreviewActor::AR5POISchemeNodePreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewMetaDataComponent = CreateDefaultSubobject<UR5POIPreviewMetaDataComponent>(TEXT("PreviewMetaDataComponent"));
}


