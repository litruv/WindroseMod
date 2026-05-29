#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreePropertyFunctionCommonBase -FallbackName=StateTreePropertyFunctionCommonBase
#include "StateTreePropertyFunctionBase.h"
#include "R5STPF_CommonBase.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STPF_CommonBase : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    FR5STPF_CommonBase();
};

