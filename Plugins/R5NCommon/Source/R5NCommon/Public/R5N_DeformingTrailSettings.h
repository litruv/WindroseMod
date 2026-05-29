#pragma once
#include "CoreMinimal.h"
#include "R5N_DeformingTrailSettings.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_DeformingTrailSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> DeformingTrailRT;
    
    FR5N_DeformingTrailSettings();
};

