#pragma once
#include "CoreMinimal.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_CircleParameters.h"
#include "R5NPhysSailForceParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysSailForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckMediumBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_CircleParameters Circle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForwardForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBackwardForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTransverseForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MotorPowerToSailCurve;
    
    FR5NPhysSailForceParameters();
};

