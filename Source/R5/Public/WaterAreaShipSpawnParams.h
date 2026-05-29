#pragma once
#include "CoreMinimal.h"
#include "WaterAreaShipNumberParams.h"
#include "WaterAreaShipSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FWaterAreaShipSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterAreaShipNumberParams> ShipsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    R5_API FWaterAreaShipSpawnParams();
};

