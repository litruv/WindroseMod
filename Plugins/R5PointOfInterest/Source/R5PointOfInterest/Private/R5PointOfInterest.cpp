#include "R5PointOfInterest.h"
#include "R5POISchemeNode.h"

UR5PointOfInterest::UR5PointOfInterest() {
    this->Version = 0;
    this->AreaActivityCooldownTime = 0.00f;
    this->AreaActivationDistance = 0.00f;
    this->bOverrideSupportedAgentTypes = false;
    this->bSubCellRasterization = false;
    this->SchemeNodeTreeRoot = CreateDefaultSubobject<UR5POISchemeNode>(TEXT("SchemeNodeTree"));
    this->bEnableAreaActivationSettings = false;
}


