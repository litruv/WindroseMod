#pragma once
#include "CoreMinimal.h"
#include "R5ReplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct FR5ReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistancePriorityScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarvationPriorityScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedNetPriorityBias;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ActorChannelFrameTimeout;
    
    R5_API FR5ReplicationInfo();
};

