#pragma once
#include "CoreMinimal.h"
#include "R5STT_GetInstigatorLocation_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetInstigatorLocation_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    FR5STT_GetInstigatorLocation_InstanceData();
};

