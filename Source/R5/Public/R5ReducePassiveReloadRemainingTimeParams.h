#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ReducePassiveReloadRemainingTimeData.h"
#include "R5ReducePassiveReloadRemainingTimeParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ReducePassiveReloadRemainingTimeParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ReducePassiveReloadRemainingTimeData Data;
    
    UR5ReducePassiveReloadRemainingTimeParams();

};

