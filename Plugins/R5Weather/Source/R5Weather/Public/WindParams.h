#pragma once
#include "CoreMinimal.h"
#include "WindParams.generated.h"

USTRUCT(BlueprintType)
struct FWindParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindDirectionDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WindEndTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Duration;
    
    R5WEATHER_API FWindParams();
};

