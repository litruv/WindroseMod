#pragma once
#include "CoreMinimal.h"
#include "R5STT_IsReachableAsync_InstanceData.generated.h"

class AActor;
class UR5IsReachableAsyncCallbackWrapper;

USTRUCT(BlueprintType)
struct R5_API FR5STT_IsReachableAsync_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5IsReachableAsyncCallbackWrapper* CallbackWrapper;
    
    FR5STT_IsReachableAsync_InstanceData();
};

