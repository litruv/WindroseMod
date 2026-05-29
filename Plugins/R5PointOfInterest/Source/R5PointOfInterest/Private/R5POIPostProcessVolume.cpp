#include "R5POIPostProcessVolume.h"

void AR5POIPostProcessVolume::StaticRegisterNativesAR5POIPostProcessVolume()
{
}


AR5POIPostProcessVolume::AR5POIPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
}

bool AR5POIPostProcessVolume::EncompassesPoint(FVector Point, float SphereRadius, float* OutDistanceToPoint)
{
    return false;
}

FPostProcessVolumeProperties AR5POIPostProcessVolume::GetProperties() const
{
    FPostProcessVolumeProperties Properties;
    Properties.Settings = &PostProcessSettings;
    Properties.Priority = Priority;
    Properties.BlendRadius = BlendRadius;
    Properties.BlendWeight = BlendWeight;
    Properties.bIsEnabled = true;
    Properties.bIsUnbound = false;
    return Properties;
}

#if DEBUG_POST_PROCESS_VOLUME_ENABLE
FString AR5POIPostProcessVolume::GetDebugName() const
{
    return GetName();
}
#endif

