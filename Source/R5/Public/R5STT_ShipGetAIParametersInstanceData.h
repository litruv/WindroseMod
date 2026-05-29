#pragma once
#include "CoreMinimal.h"
#include "R5AIShipData.h"
#include "R5STT_ShipGetAIParametersInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipGetAIParametersInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIShipData Params;
    
    FR5STT_ShipGetAIParametersInstanceData();
};

