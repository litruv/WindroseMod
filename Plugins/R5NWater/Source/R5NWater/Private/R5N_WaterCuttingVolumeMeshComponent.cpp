#include "R5N_WaterCuttingVolumeMeshComponent.h"

UR5N_WaterCuttingVolumeMeshComponent::UR5N_WaterCuttingVolumeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bEnableAutoLODGeneration = false;
    this->bRenderInMainPass = false;
    this->bAffectDistanceFieldLighting = false;
    this->Settings = 3;
}


