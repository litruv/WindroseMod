#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "RuntimeVector2DCurve.generated.h"

class UR5CurveVector2D;

USTRUCT(BlueprintType)
struct FRuntimeVector2DCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve VectorCurves[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CurveVector2D* ExternalCurve;
    
    R5NWATER_API FRuntimeVector2DCurve();
};

