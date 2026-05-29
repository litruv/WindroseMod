#pragma once
#include "CoreMinimal.h"
#include "R5N_SmokeSettingsSolverSPH.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_SmokeSettingsSolverSPH {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearPressureCoef;
    
    FR5N_SmokeSettingsSolverSPH();
};

