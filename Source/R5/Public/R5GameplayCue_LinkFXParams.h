#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5LinkSFXData.h"
#include "R5LinkVFXData.h"
#include "R5GameplayCue_LinkFXParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5GameplayCue_LinkFXParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LinkVFXData VFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LinkSFXData SFXData;
    
    UR5GameplayCue_LinkFXParams();

};

