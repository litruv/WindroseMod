#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5CannonAimingData.h"
#include "R5CannonFXData.h"
#include "R5CannonShotData.h"
#include "R5CannonVisualData.h"
#include "R5ShipItemParams.h"
#include "R5CannonParams.generated.h"

class UR5CannonAmmoNomenclatureParams;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5CannonParams : public UR5ShipItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CannonAmmoNomenclatureParams* AmmoNomenclature;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ShotRangeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonVisualData VisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonAimingData CannonAimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonShotData ShotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawVisualFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchVisualFactor;
    
    UR5CannonParams();

};

