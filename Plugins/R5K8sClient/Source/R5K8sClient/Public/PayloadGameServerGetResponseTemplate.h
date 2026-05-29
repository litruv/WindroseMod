#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseTemplateSpec.h"
#include "PayloadGameServerGetResponseTemplate.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseTemplateSpec Spec;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseTemplate();
};

