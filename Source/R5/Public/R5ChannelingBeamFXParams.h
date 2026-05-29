#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ChannelingBeamFXData.h"
#include "R5ChannelingBeamFXParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ChannelingBeamFXParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChannelingBeamFXData FXData;
    
    UR5ChannelingBeamFXParams();

};

