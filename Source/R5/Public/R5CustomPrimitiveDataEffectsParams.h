#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CustomPrimitiveDataEffectsParams.generated.h"

class UR5CustomPrimitiveDataBloodWoundParams;
class UR5CustomPrimitiveDataWeatheringParams;

UCLASS(Blueprintable)
class UR5CustomPrimitiveDataEffectsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataBloodWoundParams* BloodWoundParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataWeatheringParams* WeatheringParams;
    
    UR5CustomPrimitiveDataEffectsParams();

};

