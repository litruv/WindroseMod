#pragma once
#include "CoreMinimal.h"
#include "R5STPF_ActorRadius_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STPF_ActorRadius_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FR5STPF_ActorRadius_InstanceData();
};

