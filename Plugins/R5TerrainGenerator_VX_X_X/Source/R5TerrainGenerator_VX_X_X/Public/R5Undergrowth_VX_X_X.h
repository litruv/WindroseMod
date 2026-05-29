#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5Undergrowth_VX_X_X.generated.h"

class UR5FoliageType_VX_X_X;

USTRUCT(BlueprintType)
struct FR5Undergrowth_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FoliageType_VX_X_X* Undergrowth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    R5TERRAINGENERATOR_VX_X_X_API FR5Undergrowth_VX_X_X();
};

