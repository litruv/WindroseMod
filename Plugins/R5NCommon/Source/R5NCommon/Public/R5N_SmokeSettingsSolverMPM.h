#pragma once
#include "CoreMinimal.h"
#include "R5N_SmokeSettingsSolverMPM.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_SmokeSettingsSolverMPM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EOSPower;
    
    FR5N_SmokeSettingsSolverMPM();
};

