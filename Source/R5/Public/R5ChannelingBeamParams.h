#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ChannelingBeamGPData.h"
#include "R5ChannelingBeamTagData.h"
#include "R5ChannelingBeamParams.generated.h"

class UR5ChannelingBeamFXParams;

UCLASS(Blueprintable)
class R5_API UR5ChannelingBeamParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChannelingBeamGPData GPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChannelingBeamTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChannelingBeamFXParams* FXParams;
    
    UR5ChannelingBeamParams();

};

