#pragma once
#include "CoreMinimal.h"
#include "AgonesPlayer.generated.h"

USTRUCT(BlueprintType)
struct FAgonesPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    AGONES_API FAgonesPlayer();
};

