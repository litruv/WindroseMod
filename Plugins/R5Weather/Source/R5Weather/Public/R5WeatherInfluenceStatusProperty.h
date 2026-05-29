#pragma once
#include "CoreMinimal.h"
#include "R5WeatherInfluenceStatusProperty.generated.h"

USTRUCT(BlueprintType)
struct FR5WeatherInfluenceStatusProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZShiftTraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShiftTraceStart;
    
    R5WEATHER_API FR5WeatherInfluenceStatusProperty();
};

