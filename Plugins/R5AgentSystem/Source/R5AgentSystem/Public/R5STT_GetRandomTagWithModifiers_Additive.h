#pragma once
#include "CoreMinimal.h"
#include "R5STT_GetRandomTagWithModifiers_Additive.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5STT_GetRandomTagWithModifiers_Additive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    FR5STT_GetRandomTagWithModifiers_Additive();
};

