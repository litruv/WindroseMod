#include "R5PointLightTierSettings.h"

FR5PointLightTierSettings::FR5PointLightTierSettings() {
    this->bAllowLightFunction = false;
    this->bAllowVSM = false;
    this->bAllowVSMSkeletalMeshOnly = false;
    this->bAllowDFS = false;
    this->bAllowGDFShadows = false;
    this->bAffectTranslucentLighting = false;
    this->bAffectIndirectLighting = false;
    this->AttenuationRadiusScale = 0.00f;
    this->ContactShadowLengthScale = 0.00f;
    this->VirtualShadowMapResolutionBiasOffset = 0.00f;
}

