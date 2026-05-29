#pragma once
#include "CoreMinimal.h"
#include "GameServerResources.generated.h"

USTRUCT(BlueprintType)
struct FGameServerResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memory;
    
    R5K8SCLIENT_API FGameServerResources();
};

