#include "R5N_WaterLocalBodySystem.h"

UR5N_WaterLocalBodySystem::UR5N_WaterLocalBodySystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIC[0] = NULL;
    this->MIC[1] = NULL;
    this->Mid[0] = NULL;
    this->Mid[1] = NULL;
    this->ISMComponent[0] = NULL;
    this->ISMComponent[1] = NULL;
    this->StaticMesh = NULL;
}


