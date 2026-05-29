#pragma once
#include "CoreMinimal.h"
#include "R5NewOverlapDamageComponentVFXData.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStatePlayVFX.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStatePlayVFX : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NewOverlapDamageComponentVFXData> VFXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraComponent*, FR5NewOverlapDamageComponentVFXData> ActiveVFX;
    
    UR5OverlapDamageStatePlayVFX();

};

