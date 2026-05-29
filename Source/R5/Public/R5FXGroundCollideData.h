#pragma once
#include "CoreMinimal.h"
#include "R5FXGroundCollideData.generated.h"

class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FR5FXGroundCollideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> System;
    
    R5_API FR5FXGroundCollideData();
};

