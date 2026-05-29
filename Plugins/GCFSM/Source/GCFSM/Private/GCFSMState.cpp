#include "GCFSMState.h"

UGCFSMState::UGCFSMState() {
    this->RootState = NULL;
}




UGCFSMState* UGCFSMState::MakeStateObject(UGCFSM* FSM, TSoftClassPtr<UGCFSMState> implementationSoftClass, bool processTickEvent, float Timeout, const FString& StateName) {
    return NULL;
}

UGCFSM* UGCFSMState::MakeFSM(FName fsmName, EGCFSMReplicationOptions replicationOptions, EGCFSMReplicatedExec& exec) {
    return NULL;
}

void UGCFSMState::InternalEventEntryPoint(float Age) {
}



