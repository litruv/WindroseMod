#pragma once
#include "CoreMinimal.h"
#include "NetworkMetrics.generated.h"

USTRUCT(BlueprintType)
struct FNetworkMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerFrameTime;
    
    R5_API FNetworkMetrics();
};

