#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipAvoidTerrainInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipAvoidTerrainInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PredictionStepsCount;
    
    FR5STT_ShipAvoidTerrainInstanceData();
};

