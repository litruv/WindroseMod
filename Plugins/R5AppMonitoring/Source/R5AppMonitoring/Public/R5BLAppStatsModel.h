#pragma once
#include "CoreMinimal.h"
#include "ER5BLAppType.h"
#include "R5BLAppStatsModel.generated.h"

USTRUCT(BlueprintType)
struct R5APPMONITORING_API FR5BLAppStatsModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLAppType AppType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsAverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsPercentile10;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsPercentile50;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsPercentile90;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FpsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingPercentile10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingPercentile50;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingPercentile90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingMax;
    
    FR5BLAppStatsModel();
};

