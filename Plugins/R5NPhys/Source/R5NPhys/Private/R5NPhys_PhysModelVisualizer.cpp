#include "R5NPhys_PhysModelVisualizer.h"

UR5NPhys_PhysModelVisualizer::UR5NPhys_PhysModelVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->AlwaysLoadOnClient = false;
    this->R5NPhys_ModelSettings = NULL;
}


