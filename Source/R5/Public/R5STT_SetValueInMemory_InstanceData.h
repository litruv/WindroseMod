#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryValueSetterBySelector -FallbackName=R5AS_MemoryValueSetterBySelector
#include "R5AS_MemoryValueSetterBySelector.h"
#include "R5STT_SetValueInMemory_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_SetValueInMemory_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_MemoryValueSetterBySelector Setter;
    
    FR5STT_SetValueInMemory_InstanceData();
};

