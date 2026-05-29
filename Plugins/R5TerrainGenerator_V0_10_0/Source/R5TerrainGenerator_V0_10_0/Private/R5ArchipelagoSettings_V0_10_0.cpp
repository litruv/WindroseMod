#include "R5ArchipelagoSettings_V0_10_0.h"

UR5ArchipelagoSettings_V0_10_0::UR5ArchipelagoSettings_V0_10_0() {
    this->bUsePredefinedSeed = false;
    this->PredefinedSeed = 100000;
    this->bUsePreviewSeed = false;
    this->PreviewSeed = 100000;
    this->WorldSize = 16384;
    this->SimulationSpeed = 1;
    this->bShowNames = false;
    this->bDrawVoronoi = false;
    this->bDrawEdges = true;
    this->bUseGhostRegion = false;
    this->bUseCircularBoundary = false;
    this->bCenterNodesInBounds = true;
    this->RadialClearance = 0.00f;
    this->BoundaryOffset = 0.00f;
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


