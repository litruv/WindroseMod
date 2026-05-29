#pragma once
#include "CoreMinimal.h"
#include "R5SeaSpawnPoint.h"
#include "R5SeaSpawnerParameterPoints.generated.h"

USTRUCT(BlueprintType)
struct FR5SeaSpawnerParameterPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SeaSpawnPoint> PointsArray;
    
    R5_API FR5SeaSpawnerParameterPoints();
};

