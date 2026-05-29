#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ApplyGEOnNearTargetForStacksOnHitData.h"
#include "R5ApplyGEOnNearTargetForStacksOnHitParams.generated.h"

class UR5AS_EnvironmentRequestParams;

UCLASS(Blueprintable)
class R5_API UR5ApplyGEOnNearTargetForStacksOnHitParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ApplyGEOnNearTargetForStacksOnHitData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_EnvironmentRequestParams* FindNearTargets;
    
    UR5ApplyGEOnNearTargetForStacksOnHitParams();

};

