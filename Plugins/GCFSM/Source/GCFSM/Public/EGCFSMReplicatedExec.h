#pragma once
#include "CoreMinimal.h"
#include "EGCFSMReplicatedExec.generated.h"

UENUM(BlueprintType)
enum class EGCFSMReplicatedExec : uint8 {
    AuthorityOrLocal,
    Proxy,
};

