#pragma once
#include "CoreMinimal.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_CircleParameters.h"
#include "R5NPhysRudderForceParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysRudderForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_CircleParameters Circle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MotorPowerToRudderRadiusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckMediumBorder;
    
    FR5NPhysRudderForceParameters();
};

