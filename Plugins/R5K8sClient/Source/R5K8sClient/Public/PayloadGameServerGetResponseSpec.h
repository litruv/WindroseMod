#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseTemplate.h"
#include "PayloadGameServerGetResponseSpec.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseTemplate Template;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseSpec();
};

