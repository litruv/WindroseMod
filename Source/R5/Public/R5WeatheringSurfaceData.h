#pragma once
#include "CoreMinimal.h"
#include "R5WeatheringSurfaceData.generated.h"

USTRUCT(BlueprintType)
struct FR5WeatheringSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatheringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeatheringValue;
    
    R5_API FR5WeatheringSurfaceData();
};

