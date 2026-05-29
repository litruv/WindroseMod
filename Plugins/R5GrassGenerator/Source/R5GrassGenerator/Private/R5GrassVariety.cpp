#include "R5GrassVariety.h"

FR5GrassVariety::FR5GrassVariety() {
    this->GrassMesh = NULL;
    this->GrassDensity = 0.00f;
    this->bRandomRotation = false;
    this->bAlignToSurface = false;
    this->Propagation = ER5GrassPropagationType::Ignore;
    this->FoliageChannelFlags = 0;
    this->bUseNoise = false;
    this->NoiseSeed = 0;
    this->NoiseScale = 0.00f;
    this->bReceivesDecals = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = false;
    this->bCastContactShadow = false;
    this->InstanceWorldPositionOffsetDisableDistance = 0;
    this->ShadowCacheInvalidationBehavior = EShadowCacheInvalidationBehavior::Auto;
    this->PropagationChannels = (ER5FoliageChannels)0;
}

