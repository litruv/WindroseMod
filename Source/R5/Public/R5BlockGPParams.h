#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BlockAnimationData.h"
#include "R5BlockGPData.h"
#include "R5BlockPostureData.h"
#include "R5BlockVisualData.h"
#include "R5BlockGPParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BlockGPParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockAnimationData AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockGPData GPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockPostureData PostureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockVisualData VisualData;
    
    UR5BlockGPParams();

};

