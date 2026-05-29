#pragma once
#include "CoreMinimal.h"
#include "R5STPF_OwnerActor_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STPF_OwnerActor_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Output;
    
    FR5STPF_OwnerActor_InstanceData();
};

