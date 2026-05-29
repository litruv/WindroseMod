#pragma once
#include "CoreMinimal.h"
#include "PayloadGameServerGetResponseMetadata.h"
#include "PayloadGameServerGetResponseSpec.h"
#include "PayloadGameServerGetResponseStatus.h"
#include "PayloadGameServerGetResponseItem.generated.h"

USTRUCT(BlueprintType)
struct FPayloadGameServerGetResponseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseMetadata MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadGameServerGetResponseSpec Spec;
    
    R5K8SCLIENT_API FPayloadGameServerGetResponseItem();
};

