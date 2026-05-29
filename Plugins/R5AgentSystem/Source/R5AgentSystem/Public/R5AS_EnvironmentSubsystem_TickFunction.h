#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "R5AS_EnvironmentSubsystem_TickFunction.generated.h"

USTRUCT(BlueprintType)
struct FR5AS_EnvironmentSubsystem_TickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    R5AGENTSYSTEM_API FR5AS_EnvironmentSubsystem_TickFunction();
};

template<>
struct TStructOpsTypeTraits<FR5AS_EnvironmentSubsystem_TickFunction> : public TStructOpsTypeTraitsBase2<FR5AS_EnvironmentSubsystem_TickFunction>
{
    enum
    {
        WithCopy = false
    };
};

