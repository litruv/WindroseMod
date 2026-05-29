#pragma once
#include "CoreMinimal.h"
#include "R5BuildingItem_FXSettings.generated.h"

class UNiagaraSystem;
class USoundCue;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5BuildingItem_FXSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> VFXForSingleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, TSoftObjectPtr<UNiagaraSystem>> VFXForMultipleMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SFX;
    
    R5_API FR5BuildingItem_FXSettings();
};

