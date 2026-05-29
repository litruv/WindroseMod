#pragma once
#include "CoreMinimal.h"
#include "R5AS_CommonMemoryKey.h"
#include "R5AS_IntegerMemoryKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_IntegerMemoryKey : public FR5AS_CommonMemoryKey {
    GENERATED_BODY()
public:
    FR5AS_IntegerMemoryKey();
};
FORCEINLINE uint32 GetTypeHash(const FR5AS_IntegerMemoryKey) { return 0; }

