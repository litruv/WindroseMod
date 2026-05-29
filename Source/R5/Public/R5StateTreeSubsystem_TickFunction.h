#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "R5StateTreeSubsystem_TickFunction.generated.h"

USTRUCT(BlueprintType)
struct FR5StateTreeSubsystem_TickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    R5_API FR5StateTreeSubsystem_TickFunction();
};

template<>
struct TStructOpsTypeTraits<FR5StateTreeSubsystem_TickFunction> : public TStructOpsTypeTraitsBase2<FR5StateTreeSubsystem_TickFunction>
{
    enum
    {
        WithCopy = false
    };
};

