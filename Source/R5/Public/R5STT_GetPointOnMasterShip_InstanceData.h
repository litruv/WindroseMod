#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5STT_GetPointOnMasterShip_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetPointOnMasterShip_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOnShip;
    
    FR5STT_GetPointOnMasterShip_InstanceData();
};

