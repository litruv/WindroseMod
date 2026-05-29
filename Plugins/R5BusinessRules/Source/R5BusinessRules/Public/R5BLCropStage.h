#pragma once
#include "CoreMinimal.h"
#include "R5BLCropStage.generated.h"

class AActor;
class UNiagaraSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCropStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CropStageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CropStageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> CropStageEffect;
    
    FR5BLCropStage();
};

