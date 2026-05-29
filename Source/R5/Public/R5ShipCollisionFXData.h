#pragma once
#include "CoreMinimal.h"
#include "R5ShipCollisionFXData.generated.h"

class UNiagaraSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShipCollisionFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> CollisionFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> CollisionSound;
    
    R5_API FR5ShipCollisionFXData();
};

