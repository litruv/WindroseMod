#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseItem.h"
#include "PayloadGameServerGetResponse.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPayloadGameServerGetResponseItem> Items;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponse();
};

