#pragma once
#include "CoreMinimal.h"
#include "R5GameplaySpawnerPendingSpawnElement.h"
#include "R5GameplaySpawnContext.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GameplaySpawnContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplaySpawnerPendingSpawnElement> PendingSpawnElements;
    
    FR5GameplaySpawnContext();
};

