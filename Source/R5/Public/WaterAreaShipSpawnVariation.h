#pragma once
#include "CoreMinimal.h"
#include "WaterAreaShipSpawnParams.h"
#include "WaterAreaShipSpawnVariation.generated.h"

USTRUCT(BlueprintType)
struct FWaterAreaShipSpawnVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterAreaShipSpawnParams> ShipsParamsVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    R5_API FWaterAreaShipSpawnVariation();
};

