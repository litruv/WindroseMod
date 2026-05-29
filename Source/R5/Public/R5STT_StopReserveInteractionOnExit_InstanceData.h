#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectValueSelector -FallbackName=R5AS_UObjectValueSelector
#include "R5AS_UObjectValueSelector.h"
#include "R5STT_StopReserveInteractionOnExit_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_StopReserveInteractionOnExit_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector Interaction;
    
    FR5STT_StopReserveInteractionOnExit_InstanceData();
};

