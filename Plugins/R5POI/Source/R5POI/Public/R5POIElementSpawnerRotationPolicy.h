#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5POIElementSpawnerRotationPolicy.generated.h"

USTRUCT(BlueprintType)
struct R5POI_API FR5POIElementSpawnerRotationPolicy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval YawInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawStep;
    
    FR5POIElementSpawnerRotationPolicy();
};

