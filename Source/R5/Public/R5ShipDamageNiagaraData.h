#pragma once
#include "CoreMinimal.h"
#include "R5ShipDamageSocketBasedData.h"
#include "R5ShipDamageNiagaraData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FR5ShipDamageNiagaraData : public FR5ShipDamageSocketBasedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> Asset;
    
    R5_API FR5ShipDamageNiagaraData();
};

