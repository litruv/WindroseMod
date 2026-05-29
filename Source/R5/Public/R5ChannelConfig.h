#pragma once
#include "CoreMinimal.h"
#include "R5ChannelConfig.generated.h"

USTRUCT(BlueprintType)
struct FR5ChannelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitRadius;
    
    R5_API FR5ChannelConfig();
};

