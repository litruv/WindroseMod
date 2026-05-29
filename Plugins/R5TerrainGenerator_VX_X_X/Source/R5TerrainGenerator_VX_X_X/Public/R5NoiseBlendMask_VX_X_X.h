#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ER5NK_FractalType_VX_X_X.h"
#include "R5NoiseBlendMask_VX_X_X.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_VX_X_X_API FR5NoiseBlendMask_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NK_FractalType_VX_X_X Fractal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Range;
    
    FR5NoiseBlendMask_VX_X_X();
};

