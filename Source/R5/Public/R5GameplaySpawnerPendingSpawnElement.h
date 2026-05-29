#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerMutatorChain.h"
#include "R5GameplaySpawnerPendingSpawnElement.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5_API FR5GameplaySpawnerPendingSpawnElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnerMutatorChain MutatorChain;
    
    FR5GameplaySpawnerPendingSpawnElement();
};

