#pragma once
#include "CoreMinimal.h"
#include "R5BLPlayerSpawnpoint_V0_8_0.h"
#include "R5BLPlayerSpawnpointsData_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerSpawnpointsData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLPlayerSpawnpoint_V0_8_0> Spawnpoints;
    
    FR5BLPlayerSpawnpointsData_V0_8_0();
};

