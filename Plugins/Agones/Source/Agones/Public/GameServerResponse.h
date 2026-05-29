#pragma once
#include "CoreMinimal.h"
#include "ObjectMeta.h"
#include "Spec.h"
#include "Status.h"
#include "GameServerResponse.generated.h"

USTRUCT(BlueprintType)
struct FGameServerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectMeta ObjectMeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpec Spec;
    
    AGONES_API FGameServerResponse();
};

