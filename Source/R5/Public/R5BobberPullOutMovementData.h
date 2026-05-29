#pragma once
#include "CoreMinimal.h"
#include "R5BobberHomingMovementData.h"
#include "R5BobberParabolicMovementData.h"
#include "R5BobberPullOutMovementData.generated.h"

USTRUCT(BlueprintType)
struct FR5BobberPullOutMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchReadyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectFlyDistancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberParabolicMovementData ParabolaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberHomingMovementData HomingData;
    
    R5_API FR5BobberPullOutMovementData();
};

