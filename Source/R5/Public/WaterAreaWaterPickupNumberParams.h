#pragma once
#include "CoreMinimal.h"
#include "WaterAreaWaterPickupNumberParams.generated.h"

class AR5WaterPickupResource;

USTRUCT(BlueprintType)
struct FWaterAreaWaterPickupNumberParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5WaterPickupResource> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceNumber;
    
    R5_API FWaterAreaWaterPickupNumberParams();
};

