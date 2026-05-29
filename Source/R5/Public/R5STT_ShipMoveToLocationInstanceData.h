#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5STT_ShipMoveToBaseInstanceData.h"
#include "R5STT_ShipMoveToLocationInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipMoveToLocationInstanceData : public FR5STT_ShipMoveToBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    FR5STT_ShipMoveToLocationInstanceData();
};

