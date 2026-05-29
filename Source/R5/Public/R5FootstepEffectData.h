#pragma once
#include "CoreMinimal.h"
#include "R5FootstepEffectData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FR5FootstepEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Effect;
    
    R5_API FR5FootstepEffectData();
};

