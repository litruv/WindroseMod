#pragma once
#include "CoreMinimal.h"
#include "R5N_SmokeSettingsRender.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_SmokeSettingsRender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SmokeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleSize;
    
    FR5N_SmokeSettingsRender();
};

