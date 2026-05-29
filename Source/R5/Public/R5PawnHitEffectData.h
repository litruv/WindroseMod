#pragma once
#include "CoreMinimal.h"
#include "R5PawnHitEffectData.generated.h"

class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5PawnHitEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* WeaponTrailFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    R5_API FR5PawnHitEffectData();
};

