#pragma once
#include "CoreMinimal.h"
#include "R5CannonRotationSoundData.h"
#include "R5CannonFXData.generated.h"

class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5CannonFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> ShootFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> ShootSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> ReloadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CannonRotationSoundData RotationSoundData;
    
    R5_API FR5CannonFXData();
};

