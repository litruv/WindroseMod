#pragma once
#include "CoreMinimal.h"
#include "R5AS_CommonMemoryKey.h"
#include "R5AS_GameplayTagContainerMemoryKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_GameplayTagContainerMemoryKey : public FR5AS_CommonMemoryKey {
    GENERATED_BODY()
public:
    FR5AS_GameplayTagContainerMemoryKey();
};

