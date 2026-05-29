#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CameraTargetRotationData.h"
#include "R5FocusTransitionData.h"
#include "R5HFSMCameraComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5HFSMCameraComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CameraTargetRotationData TargetRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FocusTransitionData FocusTransitionData;
    
    UR5HFSMCameraComponentParams();

};

