#include "R5N_LogicActor.h"

void AR5N_LogicActor::StaticRegisterNativesAR5N_LogicActor()
{
}

//CROSS-MODULE INCLUDE V2: -ModuleName=R5NDayCycleTime -ObjectName=R5N_DayCycleTimeComponent -FallbackName=R5N_DayCycleTimeComponent
#include "R5N_DayCycleTimeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NEnvironmentParticles -ObjectName=R5N_EnvironmentParticlesComponent -FallbackName=R5N_EnvironmentParticlesComponent
#include "R5N_EnvironmentParticlesComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_AirComponent -FallbackName=R5N_AirComponent
#include "R5N_AirComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_ParticlesComponent -FallbackName=R5N_ParticlesComponent
#include "R5N_ParticlesComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_PostProcessComponent -FallbackName=R5N_PostProcessComponent
#include "R5N_PostProcessComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_WaterComponent -FallbackName=R5N_WaterComponent
#include "R5N_WaterComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_WeatherComponent -FallbackName=R5N_WeatherComponent
#include "R5N_WeatherComponent.h"

AR5N_LogicActor::AR5N_LogicActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Weather = CreateDefaultSubobject<UR5N_WeatherComponent>(TEXT("R5WeatherComponent"));
    this->Air = CreateDefaultSubobject<UR5N_AirComponent>(TEXT("R5AirComponent"));
    this->Water = CreateDefaultSubobject<UR5N_WaterComponent>(TEXT("R5WaterComponent"));
    this->DayTime = CreateDefaultSubobject<UR5N_DayCycleTimeComponent>(TEXT("R5DayCycleTimeComponent"));
    this->PostProcess = CreateDefaultSubobject<UR5N_PostProcessComponent>(TEXT("R5PostProcessComponent"));
    this->Particles = CreateDefaultSubobject<UR5N_ParticlesComponent>(TEXT("R5ParticlesComponent"));
    this->EnvironmentParticles = CreateDefaultSubobject<UR5N_EnvironmentParticlesComponent>(TEXT("R5EnvironmentParticlesComponent"));
}


