#include "GCFSM.h"

UGCFSM::UGCFSM() {
    this->activeState = NULL;
    this->replicationComponent = NULL;
}

void UGCFSM::Stop() {
}

void UGCFSM::ReplicationWaitFunction(FName& stateOrStop, FLatentActionInfo LatentInfo) {
}

void UGCFSM::EnterState(UGCFSMBasicState* State, FGuid NodeGuid, FLatentActionInfo LatentInfo, FName& EventName, float& DeltaTime, const TArray<FName>& processedEvents, int32 numTransitions) {
}


