#pragma once
#include "CoreMinimal.h"
#include "R5ShipDamageNiagara.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FR5ShipDamageNiagara {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> NiagaraComponentArray;
    
public:
    R5_API FR5ShipDamageNiagara();
};

