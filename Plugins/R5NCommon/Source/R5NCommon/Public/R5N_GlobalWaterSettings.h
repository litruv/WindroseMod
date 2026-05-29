#pragma once
#include "CoreMinimal.h"
#include "R5N_GlobalWaterSettings.generated.h"

class UMaterialParameterCollection;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_GlobalWaterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> CuttingMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> WaterDepthTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> Params;
    
    FR5N_GlobalWaterSettings();
};

