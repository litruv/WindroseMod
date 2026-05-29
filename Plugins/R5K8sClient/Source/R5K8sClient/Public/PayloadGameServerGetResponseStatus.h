#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponsePlayers.h"
#include "PayloadGameServerGetResponsePort.h"
#include "PayloadGameServerGetResponseStatus.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponsePlayers Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPayloadGameServerGetResponsePort> Ports;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseStatus();
};

