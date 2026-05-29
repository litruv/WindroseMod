#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5FootstepActionData.h"
#include "R5FootstepActionParams.generated.h"

UCLASS(Blueprintable)
class UR5FootstepActionParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FootstepActionData Data;
    
    UR5FootstepActionParams();

};

