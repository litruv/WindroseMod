#pragma once
#include "CoreMinimal.h"
#include "R5ChestFXData.generated.h"

class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5ChestFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    R5_API FR5ChestFXData();
};

