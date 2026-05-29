#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_DoubleValueSelector -FallbackName=R5AS_DoubleValueSelector
#include "R5AS_DoubleValueSelector.h"
#include "R5STPF_GetFloatFromValueSelector_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEMSTATETREE_API FR5STPF_GetFloatFromValueSelector_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector ValueSelector;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    FR5STPF_GetFloatFromValueSelector_InstanceData();
};

