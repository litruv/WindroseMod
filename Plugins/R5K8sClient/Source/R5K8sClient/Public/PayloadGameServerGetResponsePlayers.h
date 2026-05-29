#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponsePlayers.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponsePlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponsePlayers();
};

