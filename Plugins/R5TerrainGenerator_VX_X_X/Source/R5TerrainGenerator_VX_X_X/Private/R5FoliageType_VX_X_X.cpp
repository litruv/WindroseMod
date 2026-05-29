#include "R5FoliageType_VX_X_X.h"

UR5FoliageType_VX_X_X::UR5FoliageType_VX_X_X() {
    this->EnvironmentZone = ER5EnvironmentZone_VX_X_X::Terrestrial;
    this->MaxPerIsland = 0;
    this->CollisionRadius = 100.00f;
    this->AlignDirection = ER5AlignDirection_VX_X_X::NoAlignment;
    this->AlignMaxAngle = 0;
    this->bRandomYaw = true;
    this->bApplyAdditionalHeights = false;
    this->bApplyAdditionalWeights = false;
    this->PlacementMode = ER5PlacementMode_VX_X_X::Average;
    this->bFlatness = false;
    this->FlatnessShape = ER5FlatnessShape_VX_X_X::Radial;
    this->FlatnessInnerRadius = 256.00f;
    this->FlatnessOuterRadius = 512.00f;
    this->bExtrusion = false;
    this->ExtrusionShape = ER5ExtrusionShape_VX_X_X::Radial;
    this->ExtrusionDepth = 0.00f;
    this->ExtrusionRadius = 512.00f;
    this->bAffectGrass = false;
    this->GrassAffectRadius = 100.00f;
    this->Channel = ER5FoliageChannels::FoliageChannel1;
    this->bAlignToNormal = false;
    this->bAffectHeight = false;
    this->DensityMultiplier = 1.00f;
    this->ShadowMultiplier = 1.00f;
    this->Extrude = 0.00f;
    this->HeightModifier = ER5HeightModifier_VX_X_X::None;
    this->CurrentTerrainPatchHash = 0;
    this->PreviousTerrainPatchHash = 0;
}


