#pragma once
#include "CoreMinimal.h"
#include "WaterAreaWaterPickupNumberParams.h"
#include "WaterAreaWaterPickupSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FWaterAreaWaterPickupSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterAreaWaterPickupNumberParams> ResourceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    R5_API FWaterAreaWaterPickupSpawnParams();
};

