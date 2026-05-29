#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ER5NK_FractalType_V0_10_0.h"
#include "R5NoiseBlendMask_V0_10_0.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_V0_10_0_API FR5NoiseBlendMask_V0_10_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NK_FractalType_V0_10_0 Fractal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Range;
    
    FR5NoiseBlendMask_V0_10_0();
};

