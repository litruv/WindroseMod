#pragma once
#include "CoreMinimal.h"
#include "R5BLPlayerLastPositionData_V0_8_0.h"
#include "R5BLPlayerSpawnpointsData_V0_8_0.h"
#include "R5BLPlayerSpawnData_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerSpawnData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPlayerLastPositionData_V0_8_0 LastPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPlayerSpawnpointsData_V0_8_0 Spawnpoints;
    
    FR5BLPlayerSpawnData_V0_8_0();
};

