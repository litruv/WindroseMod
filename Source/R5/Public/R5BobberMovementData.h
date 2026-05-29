#pragma once
#include "CoreMinimal.h"
#include "R5BobberFollowingMovementData.h"
#include "R5BobberPullOutMovementData.h"
#include "R5BobberMovementData.generated.h"

USTRUCT(BlueprintType)
struct FR5BobberMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberPullOutMovementData PullOutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberFollowingMovementData FollowingData;
    
    R5_API FR5BobberMovementData();
};

