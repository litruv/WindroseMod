#include "R5GameplayOrchestrator.h"

UR5GameplayOrchestrator::UR5GameplayOrchestrator() {
    this->ChunksProcessingTimeLimitPerFrame = 3.00f;
    this->BlocksProcessingTimeLimitPerFrame = 3.00f;
    this->ChunksIntenseProcessingTimeLimitPerFrame = 30.00f;
    this->BlocksIntenseProcessingTimeLimitPerFrame = 30.00f;
    this->bAsyncAssetsPreloading = true;
    this->OrchestratedSubsystems.AddDefaulted(10);
    this->IntenseProcessingRequestTimeLimit = 60.00f;
}


