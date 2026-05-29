#pragma once
#include "CoreMinimal.h"
#include "R5STC_ShipDistanceBaseInstanceData.h"
#include "R5STC_ShipDistanceInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipDistanceInstanceData : public FR5STC_ShipDistanceBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    FR5STC_ShipDistanceInstanceData();
};

