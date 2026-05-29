#pragma once
#include "CoreMinimal.h"
#include "R5FactionsKey.generated.h"

USTRUCT(BlueprintType)
struct R5RELATIONSHIP_API FR5FactionsKey {
    GENERATED_BODY()
public:
    FR5FactionsKey();
};
FORCEINLINE uint32 GetTypeHash(const FR5FactionsKey) { return 0; }

