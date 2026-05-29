#pragma once
#include "CoreMinimal.h"
#include "R5STT_GetOwner_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetOwner_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    FR5STT_GetOwner_InstanceData();
};

