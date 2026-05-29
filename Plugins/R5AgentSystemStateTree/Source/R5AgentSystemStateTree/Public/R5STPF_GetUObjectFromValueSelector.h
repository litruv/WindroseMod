#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreePropertyFunctionCommonBase -FallbackName=StateTreePropertyFunctionCommonBase
#include "StateTreePropertyFunctionBase.h"
#include "R5STPF_GetUObjectFromValueSelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEMSTATETREE_API FR5STPF_GetUObjectFromValueSelector : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FR5STPF_GetUObjectFromValueSelector();
};

