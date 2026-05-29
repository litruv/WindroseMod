#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5STPF_CalculateMoveTimeToLocation_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STPF_CalculateMoveTimeToLocation_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToMove;
    
    FR5STPF_CalculateMoveTimeToLocation_InstanceData();
};

