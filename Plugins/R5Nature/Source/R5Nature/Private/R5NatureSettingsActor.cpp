#include "R5NatureSettingsActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NDayCycleTime -ObjectName=R5N_DayCycleTimeSettingsComponent -FallbackName=R5N_DayCycleTimeSettingsComponent
#include "R5N_DayCycleTimeSettingsComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NEnvironmentParticles -ObjectName=R5N_EnvironmentParticlesSettingsComponent -FallbackName=R5N_EnvironmentParticlesSettingsComponent
#include "R5N_EnvironmentParticlesSettingsComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=R5N_WeatherSettingsComponent -FallbackName=R5N_WeatherSettingsComponent
#include "R5N_WeatherSettingsComponent.h"

void AR5NatureSettingsActor::StaticRegisterNativesAR5NatureSettingsActor()
{
}

AR5NatureSettingsActor::AR5NatureSettingsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->LightFunctionOverride = NULL;
    this->DayCycleSettingsComponent = CreateDefaultSubobject<UR5N_DayCycleTimeSettingsComponent>(TEXT("R5DayCycleTimeSettings"));
    this->WeatherSettingsComponent = CreateDefaultSubobject<UR5N_WeatherSettingsComponent>(TEXT("R5WeatherSettings"));
    this->EnvironmentParticlesSettingsComponent = CreateDefaultSubobject<UR5N_EnvironmentParticlesSettingsComponent>(TEXT("R5EnvironmentParticlesSettings"));
    this->WeatherSettingsComponent->SetupAttachment(RootComponent);
}


