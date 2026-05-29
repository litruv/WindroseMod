#include "R5FoliageType_V0_9_0.h"

UR5FoliageType_V0_9_0::UR5FoliageType_V0_9_0() {
    this->EnvironmentZone = ER5EnvironmentZone_V0_9_0::Terrestrial;
    this->MaxPerIsland = 0;
    this->CollisionRadius = 100.00f;
    this->AlignDirection = ER5AlignDirection_V0_9_0::NoAlignment;
    this->AlignMaxAngle = 0;
    this->bRandomYaw = true;
    this->bApplyAdditionalHeights = false;
    this->bApplyAdditionalWeights = false;
    this->PlacementMode = ER5PlacementMode_V0_9_0::Average;
    this->bFlatness = false;
    this->FlatnessShape = ER5FlatnessShape_V0_9_0::Radial;
    this->FlatnessInnerRadius = 256.00f;
    this->FlatnessOuterRadius = 512.00f;
    this->bExtrusion = false;
    this->ExtrusionShape = ER5ExtrusionShape_V0_9_0::Radial;
    this->ExtrusionDepth = 0.00f;
    this->ExtrusionRadius = 512.00f;
    this->bAffectGrass = false;
    this->GrassAffectRadius = 100.00f;
    this->Channel = ER5FoliageChannels::FoliageChannel1;
}


