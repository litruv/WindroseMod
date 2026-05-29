#pragma once
#include "CoreMinimal.h"
#include "R5LinkVFXData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FR5LinkVFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LinkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourcePositionParameterName;
    
    R5_API FR5LinkVFXData();
};

