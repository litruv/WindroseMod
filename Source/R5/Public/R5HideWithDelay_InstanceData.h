#pragma once
#include "CoreMinimal.h"
#include "R5HideWithDelay_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5HideWithDelay_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopTaskOnEnd;
    
    FR5HideWithDelay_InstanceData();
};

