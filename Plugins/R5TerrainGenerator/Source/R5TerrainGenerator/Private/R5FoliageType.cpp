#include "R5FoliageType.h"

UR5FoliageType::UR5FoliageType() {
    this->EnvironmentZone = ER5EnvironmentZone::Terrestrial;
    this->MaxPerIsland = 0;
    this->CollisionRadius = 100.00f;
    this->AlignDirection = ER5AlignDirection::NoAlignment;
    this->AlignMaxAngle = 0;
    this->bRandomYaw = true;
    this->bApplyAdditionalHeights = false;
    this->bApplyAdditionalWeights = false;
    this->PlacementMode = ER5PlacementMode::Average;
    this->bFlatness = false;
    this->FlatnessShape = ER5FlatnessShape::Radial;
    this->FlatnessInnerRadius = 256.00f;
    this->FlatnessOuterRadius = 512.00f;
    this->bExtrusion = false;
    this->ExtrusionShape = ER5ExtrusionShape::Radial;
    this->ExtrusionDepth = 0.00f;
    this->ExtrusionRadius = 512.00f;
    this->bAffectGrass = false;
    this->GrassAffectRadius = 100.00f;
    this->Channel = ER5FoliageChannels::FoliageChannel1;
}


