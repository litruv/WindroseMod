#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseLabels.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseLabels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString islandId;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseLabels();
};

