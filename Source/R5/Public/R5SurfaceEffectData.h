#pragma once
#include "CoreMinimal.h"
#include "R5SurfaceEffectData.generated.h"

class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5SurfaceEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    R5_API FR5SurfaceEffectData();
};

