#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipFX_Settings.h"
#include "R5SteeringWheelRotationCustomData.h"
#include "R5WaterlineCustomData.h"
#include "R5ShipFXParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipFXParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipFX_Settings> FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SteeringWheelRotationCustomData SteeringWheelRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WaterlineCustomData WaterlineCustomData;
    
    UR5ShipFXParams();

};

