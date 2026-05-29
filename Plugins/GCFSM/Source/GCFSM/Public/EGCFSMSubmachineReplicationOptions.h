#pragma once
#include "CoreMinimal.h"
#include "EGCFSMSubmachineReplicationOptions.generated.h"

UENUM(BlueprintType)
enum class EGCFSMSubmachineReplicationOptions : uint8 {
    SameAsParentFSM,
    NonReplicated,
    NonReplicatedWithHistory = 3,
    Replicated = 2,
};

