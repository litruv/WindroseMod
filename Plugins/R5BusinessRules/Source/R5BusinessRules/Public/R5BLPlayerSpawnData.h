#pragma once
#include "CoreMinimal.h"
#include "R5BLPlayerLastPositionData.h"
#include "R5BLPlayerSpawnpointsData.h"
#include "R5BLPlayerSpawnData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPlayerLastPositionData LastPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPlayerSpawnpointsData Spawnpoints;
    
    FR5BLPlayerSpawnData();
};

