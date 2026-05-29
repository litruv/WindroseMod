#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5BobberHomingMovementData.h"
#include "R5BobberFollowingMovementData.generated.h"

USTRUCT(BlueprintType)
struct FR5BobberFollowingMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval FollowingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberHomingMovementData HomingData;
    
    R5_API FR5BobberFollowingMovementData();
};

