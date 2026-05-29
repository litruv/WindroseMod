#pragma once
#include "CoreMinimal.h"
#include "ER5N_SmokeSolverType.h"
#include "R5N_SmokeSettingsSolverMPM.h"
#include "R5N_SmokeSettingsSolverSPH.h"
#include "R5N_SmokeSettingsSolver.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_SmokeSettingsSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameLogicParticleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstacleParticleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimParticleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindInfluenceCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbientTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThermalBuoyancy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_SmokeSolverType SmokeSolverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SmokeSettingsSolverSPH SmokeSettingsSolverSPH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SmokeSettingsSolverMPM SmokeSettingsSolverMPM;
    
    FR5N_SmokeSettingsSolver();
};

