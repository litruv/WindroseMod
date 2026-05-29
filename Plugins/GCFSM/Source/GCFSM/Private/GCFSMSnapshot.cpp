#include "GCFSMSnapshot.h"

UGCFSMSnapshot::UGCFSMSnapshot() {
}

FString UGCFSMSnapshot::ToString() const {
    return TEXT("");
}

UGCFSMSnapshot* UGCFSMSnapshot::FromString(const FString& String) {
    return NULL;
}

bool UGCFSMSnapshot::AreSnapshotsEqual(const UGCFSMSnapshot* snapshot1, const UGCFSMSnapshot* snapshot2) {
    return false;
}


