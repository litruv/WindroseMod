#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_IntegerValueSelector -FallbackName=R5AS_IntegerValueSelector
#include "R5AS_IntegerValueSelector.h"
#include "R5STPF_GetIntegerFromValueSelector_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEMSTATETREE_API FR5STPF_GetIntegerFromValueSelector_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_IntegerValueSelector ValueSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FR5STPF_GetIntegerFromValueSelector_InstanceData();
};

