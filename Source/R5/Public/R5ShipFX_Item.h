#pragma once
#include "CoreMinimal.h"
#include "R5ShipFX_Item.generated.h"

class UNiagaraComponent;
class UR5N_WaterDecalEffect;

USTRUCT(BlueprintType)
struct FR5ShipFX_Item {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5N_WaterDecalEffect* DecalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraEffect;
    
    R5_API FR5ShipFX_Item();
};

