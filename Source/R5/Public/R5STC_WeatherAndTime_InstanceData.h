#pragma once
#include "CoreMinimal.h"
#include "R5AISpawnRestrictionData.h"
#include "R5STC_WeatherAndTime_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_WeatherAndTime_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AISpawnRestrictionData WeatherAndTimeParams;
    
    FR5STC_WeatherAndTime_InstanceData();
};

