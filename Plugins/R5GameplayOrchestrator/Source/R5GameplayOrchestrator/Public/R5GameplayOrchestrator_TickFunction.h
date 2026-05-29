#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "R5GameplayOrchestrator_TickFunction.generated.h"

USTRUCT(BlueprintType)
struct FR5GameplayOrchestrator_TickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    R5GAMEPLAYORCHESTRATOR_API FR5GameplayOrchestrator_TickFunction();
};

template<>
struct TStructOpsTypeTraits<FR5GameplayOrchestrator_TickFunction> : public TStructOpsTypeTraitsBase2<FR5GameplayOrchestrator_TickFunction>
{
    enum
    {
        WithCopy = false
    };
};

