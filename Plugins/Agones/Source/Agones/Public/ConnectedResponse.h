#pragma once
#include "CoreMinimal.h"
#include "ConnectedResponse.generated.h"

USTRUCT(BlueprintType)
struct FConnectedResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConnected;
    
    AGONES_API FConnectedResponse();
};

