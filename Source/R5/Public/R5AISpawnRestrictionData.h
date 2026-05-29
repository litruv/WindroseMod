#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5AISpawnRestrictionData.generated.h"

class UR5NWeatherPreset;

USTRUCT(BlueprintType)
struct R5_API FR5AISpawnRestrictionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatInterval> DayCycleTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5NWeatherPreset*> AllowedWeatherPresets;
    
    FR5AISpawnRestrictionData();
};

