#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ChestFXData.h"
#include "R5ChestFXParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ChestFXParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChestFXData ContainsSharedRewardFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChestFXData ContainsPersonalRewardFX;
    
    UR5ChestFXParams();

};

