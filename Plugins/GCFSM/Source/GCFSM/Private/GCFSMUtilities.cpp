#include "GCFSMUtilities.h"

UGCFSMUtilities::UGCFSMUtilities() {
}

void UGCFSMUtilities::TriggerEvent(UObject* stateOrContext, FName EventName, EGCFSMTriggerEventTargetPolicy targetPolicy, bool propagateToSubstates, bool triggerInternalEvents, EGCFSMTriggerEventQueuePolicy queuePolicy, float expireAfter) {
}

void UGCFSMUtilities::ShouldFSMsRunWhileGameIsPaused(UObject* stateOrContext, bool Run) {
}

void UGCFSMUtilities::RestoreFSMSnapshot(UObject* stateOrContext, const UGCFSMSnapshot* Snapshot) {
}

void UGCFSMUtilities::PauseFSMs(UObject* stateOrContext, bool Pause) {
}

UGCFSMSnapshot* UGCFSMUtilities::MakeFSMSnapshot(UObject* stateOrContext) {
    return NULL;
}

void UGCFSMUtilities::LaunchFSM(UObject* stateOrContext, FName fsmName, EGCFSMReplicationOptions replicationOptions, UObject* blueprintContext) {
}

bool UGCFSMUtilities::IsRestoringFSMSnapshot(UObject* stateOrContext) {
    return false;
}

bool UGCFSMUtilities::IsFSMRunning(UObject* stateOrContext, FName fsmName) {
    return false;
}

UGCFSMBasicState* UGCFSMUtilities::GetActiveState(UObject* stateOrContext, FName fsmName, TSoftClassPtr<UGCFSMBasicState> stateSoftClass, EGCFSMGetActiveStateResult& Result) {
    return NULL;
}

bool UGCFSMUtilities::AreFSMsPaused(UObject* stateOrContext) {
    return false;
}


