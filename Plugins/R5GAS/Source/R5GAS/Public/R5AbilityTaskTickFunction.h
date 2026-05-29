#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "R5AbilityTaskTickFunction.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5AbilityTaskTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FR5AbilityTaskTickFunction();
};

template<>
struct TStructOpsTypeTraits<FR5AbilityTaskTickFunction> : public TStructOpsTypeTraitsBase2<FR5AbilityTaskTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

