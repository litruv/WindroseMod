#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PointLightSettings.h"
#include "R5PointLightData.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PointLightData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PointLightSettings PointLightSettings;
    
    UR5PointLightData();

};

