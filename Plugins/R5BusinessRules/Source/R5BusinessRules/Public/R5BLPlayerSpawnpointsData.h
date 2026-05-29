#pragma once
#include "CoreMinimal.h"
#include "R5BLPlayerSpawnpoint.h"
#include "R5BLPlayerSpawnpointsData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerSpawnpointsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLPlayerSpawnpoint> Spawnpoints;
    
    FR5BLPlayerSpawnpointsData();
};

