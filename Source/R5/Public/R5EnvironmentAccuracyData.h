#pragma once
#include "CoreMinimal.h"
#include "R5EnvironmentAccuracyData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5EnvironmentAccuracyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxWaveAmplitudeMetersCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AtmosphereTransparencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DayCycleComponentCurve;
    
    R5_API FR5EnvironmentAccuracyData();
};

