#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "R5CustomPrimitiveDataEffectParams.h"
#include "R5WeatheringSurfaceData.h"
#include "R5CustomPrimitiveDataWeatheringParams.generated.h"

UCLASS(Blueprintable)
class UR5CustomPrimitiveDataWeatheringParams : public UR5CustomPrimitiveDataEffectParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WeatheringSurfaceData DefaultSurfaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5WeatheringSurfaceData> SurfaceData;
    
    UR5CustomPrimitiveDataWeatheringParams();

};

