#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseLabels.h"
#include "PayloadGameServerGetResponseMetadata.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreationTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseLabels Labels;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseMetadata();
};

