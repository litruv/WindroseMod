#pragma once
#include "CoreMinimal.h"
#include "WaterAreaWaterPickupSpawnParams.h"
#include "WaterAreaWaterPickupSpawnVariation.generated.h"

USTRUCT(BlueprintType)
struct FWaterAreaWaterPickupSpawnVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterAreaWaterPickupSpawnParams> ResourceParamsVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    R5_API FWaterAreaWaterPickupSpawnVariation();
};

