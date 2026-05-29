#include "R5ArchipelagoSettings_VX_X_X.h"

UR5ArchipelagoSettings_VX_X_X::UR5ArchipelagoSettings_VX_X_X() {
    this->bUsePredefinedSeed = false;
    this->PredefinedSeed = 100000;
    this->bUsePreviewSeed = false;
    this->PreviewSeed = 100000;
    this->WorldSize = 16384;
    this->SimulationSpeed = 1;
    this->bShowNames = false;
    this->bDrawVoronoi = false;
    this->bUseGhostRegion = false;
    this->bUseCircularBoundary = false;
    this->RepulsionForce = 200.00f;
    this->RepulsionRadius = 300.00f;
    this->AttractionForce = 100.00f;
    this->Friction = 0.95f;
    this->MaxSpeed = 1.00f;
    this->RelaxIterations = 10000;
    this->bIntersectionTest = false;
    this->MinRadius = 0.00f;
    this->MaxRadius = 0.00f;
    this->IntersectionDepth = 0.00f;
    this->EdgeDeflection = 0.00f;
}


