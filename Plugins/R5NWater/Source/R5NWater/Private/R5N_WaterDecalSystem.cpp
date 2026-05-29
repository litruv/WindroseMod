#include "R5N_WaterDecalSystem.h"

UR5N_WaterDecalSystem::UR5N_WaterDecalSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecalsDeformRT = NULL;
    this->DecalsFoamRT = NULL;
    this->DecalsColorRT = NULL;
}


