#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponsePort.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponsePort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponsePort();
};

