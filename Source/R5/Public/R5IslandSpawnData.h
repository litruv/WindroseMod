#pragma once
#include "CoreMinimal.h"
#include "ER5RevivePositionType.h"
#include "R5RevivePoint.h"
#include "R5IslandSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FR5IslandSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5RevivePositionType RevivePositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RevivePoint> RespawnPoints;
    
    R5_API FR5IslandSpawnData();
};

