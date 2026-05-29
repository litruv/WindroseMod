#pragma once
#include "CoreMinimal.h"
#include "R5PendingEventKey.generated.h"

USTRUCT(BlueprintType)
struct FR5PendingEventKey {
    GENERATED_BODY()
public:
    R5GAS_API FR5PendingEventKey();
};
FORCEINLINE uint32 GetTypeHash(const FR5PendingEventKey) { return 0; }

