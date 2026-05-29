#pragma once
#include "CoreMinimal.h"
#include "EFR5ShipFXType.h"
#include "R5ShipFX_SettingsBase.generated.h"

class UNiagaraSystem;
class UR5N_WaterDecalEffectAsset;

USTRUCT(BlueprintType)
struct FR5ShipFX_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFR5ShipFXType FXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5N_WaterDecalEffectAsset> WaterDecalAsset;
    
    R5_API FR5ShipFX_SettingsBase();
};

