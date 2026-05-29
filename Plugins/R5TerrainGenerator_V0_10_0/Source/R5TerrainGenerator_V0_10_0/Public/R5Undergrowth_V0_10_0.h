#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5Undergrowth_V0_10_0.generated.h"

class UR5FoliageType_V0_10_0;

USTRUCT(BlueprintType)
struct FR5Undergrowth_V0_10_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FoliageType_V0_10_0* Undergrowth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    R5TERRAINGENERATOR_V0_10_0_API FR5Undergrowth_V0_10_0();
};

