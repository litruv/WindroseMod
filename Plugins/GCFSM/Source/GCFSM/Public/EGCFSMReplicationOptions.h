#pragma once
#include "CoreMinimal.h"
#include "EGCFSMReplicationOptions.generated.h"

UENUM(BlueprintType)
enum class EGCFSMReplicationOptions : uint8 {
    NonReplicated,
    Replicated,
};

