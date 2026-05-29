#pragma once
#include "CoreMinimal.h"
#include "R5STT_AnimatedInteractionReserve_InstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5_API FR5STT_AnimatedInteractionReserve_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InteractionObject;
    
    FR5STT_AnimatedInteractionReserve_InstanceData();
};

