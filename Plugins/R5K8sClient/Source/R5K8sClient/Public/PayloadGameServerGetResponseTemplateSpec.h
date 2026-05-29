#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseContainer.h"
#include "PayloadGameServerGetResponseTemplateSpec.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseTemplateSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPayloadGameServerGetResponseContainer> Containers;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseTemplateSpec();
};

