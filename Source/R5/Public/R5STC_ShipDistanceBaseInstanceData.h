#pragma once
#include "CoreMinimal.h"
#include "R5STC_ShipDistanceBaseInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipDistanceBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FR5STC_ShipDistanceBaseInstanceData();
};

