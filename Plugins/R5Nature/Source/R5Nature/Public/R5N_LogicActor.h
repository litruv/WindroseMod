#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "R5N_LogicActor.generated.h"

class UR5N_AirComponent;
class UR5N_DayCycleTimeComponent;
class UR5N_EnvironmentParticlesComponent;
class UR5N_ParticlesComponent;
class UR5N_PostProcessComponent;
class UR5N_WaterComponent;
class UR5N_WeatherComponent;

UCLASS(Blueprintable, NoExport, NotPlaceable)
class R5NATURE_API AR5N_LogicActor : public AInfo {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WeatherComponent* Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_AirComponent* Air;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterComponent* Water;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_DayCycleTimeComponent* DayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_PostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_ParticlesComponent* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_EnvironmentParticlesComponent* EnvironmentParticles;
    
public:
    AR5N_LogicActor(const FObjectInitializer& ObjectInitializer);

};

