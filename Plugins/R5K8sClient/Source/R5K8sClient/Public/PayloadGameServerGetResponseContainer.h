#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseContainer.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Image;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseContainer();
};

