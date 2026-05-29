#pragma once
#include "CoreMinimal.h"
#include "R5AS_CommonMemoryKey.h"
#include "R5AS_DoubleMemoryKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_DoubleMemoryKey : public FR5AS_CommonMemoryKey {
    GENERATED_BODY()
public:
    FR5AS_DoubleMemoryKey();
};
FORCEINLINE uint32 GetTypeHash(const FR5AS_DoubleMemoryKey) { return 0; }

