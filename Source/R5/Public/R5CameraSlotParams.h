#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CameraPresetData.h"
#include "R5CameraSlotParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CameraSlotParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CameraPresetData CameraPresetData;
    
    UR5CameraSlotParams();

};

