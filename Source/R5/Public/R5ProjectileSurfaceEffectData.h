#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileSurfaceEffectData.generated.h"

class UNiagaraSystem;
class UR5N_WaterDecalEffectAsset;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5ProjectileSurfaceEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5N_WaterDecalEffectAsset* WaterHitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttach;
    
    R5_API FR5ProjectileSurfaceEffectData();
};

