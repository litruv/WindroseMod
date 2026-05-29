#pragma once
#include "CoreMinimal.h"
#include "R5N_WeatherInDoorSettings.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_WeatherInDoorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Wetness;
    
    FR5N_WeatherInDoorSettings();
};

