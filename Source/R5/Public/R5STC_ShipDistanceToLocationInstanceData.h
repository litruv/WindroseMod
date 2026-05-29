#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5STC_ShipDistanceBaseInstanceData.h"
#include "R5STC_ShipDistanceToLocationInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipDistanceToLocationInstanceData : public FR5STC_ShipDistanceBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FR5STC_ShipDistanceToLocationInstanceData();
};

