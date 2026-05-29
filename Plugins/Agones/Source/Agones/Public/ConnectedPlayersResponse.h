#pragma once
#include "CoreMinimal.h"
#include "ConnectedPlayersResponse.generated.h"

USTRUCT(BlueprintType)
struct FConnectedPlayersResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConnectedPlayers;
    
    AGONES_API FConnectedPlayersResponse();
};

