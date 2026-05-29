#pragma once
#include "CoreMinimal.h"
#include "R5TargetPredictionAccuracyData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5TargetPredictionAccuracyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceSigmaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProjectileFlightTimeSigmaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelocitySigmaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TurnVelocitySigmaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatePeriod;
    
    R5_API FR5TargetPredictionAccuracyData();
};

