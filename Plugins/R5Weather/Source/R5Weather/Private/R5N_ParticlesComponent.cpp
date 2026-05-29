#include "R5N_ParticlesComponent.h"

UR5N_ParticlesComponent::UR5N_ParticlesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceHeightRT = NULL;
    this->WetnessMaskRT = NULL;
    this->OverlapMaskRT = NULL;
    this->DepthCapture = NULL;
}


