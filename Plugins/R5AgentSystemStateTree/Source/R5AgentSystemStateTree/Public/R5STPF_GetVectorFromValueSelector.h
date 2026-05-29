#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreePropertyFunctionCommonBase -FallbackName=StateTreePropertyFunctionCommonBase
#include "StateTreePropertyFunctionBase.h"
#include "R5STPF_GetVectorFromValueSelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEMSTATETREE_API FR5STPF_GetVectorFromValueSelector : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FR5STPF_GetVectorFromValueSelector();
};

