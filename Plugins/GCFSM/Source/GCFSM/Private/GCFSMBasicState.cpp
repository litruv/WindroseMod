#include "GCFSMBasicState.h"

UGCFSMBasicState::UGCFSMBasicState() {
}

UGCFSMBasicState* UGCFSMBasicState::MakeBasicStateObject(UGCFSM* FSM, bool processTickEvent, float Timeout, const FString& StateName) {
    return NULL;
}

FName UGCFSMBasicState::GetTimeOutEventName() {
    return NAME_None;
}

FString UGCFSMBasicState::GetStateName() const {
    return TEXT("");
}

float UGCFSMBasicState::GetActiveTime() const {
    return 0.0f;
}


