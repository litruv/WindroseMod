#include "R5PointLightBalancerSettings.h"

UR5PointLightBalancerSettings::UR5PointLightBalancerSettings() {
    this->TierSettings.AddDefaulted(5);
    this->NumNeighboursDeactivationThreshold = 128;
    this->MergeDistance = 55.00f;
    this->bRandomizeLightTiers = true;
}


