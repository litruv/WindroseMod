#pragma once
#include "CoreMinimal.h"
#include "DisconnectResponse.generated.h"

USTRUCT(BlueprintType)
struct FDisconnectResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisconnected;
    
    AGONES_API FDisconnectResponse();
};

