#include "R5NAtmosphereLight.h"

void AR5NAtmosphereLight::StaticRegisterNativesAR5NAtmosphereLight()
{
}

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExponentialHeightFogComponent -FallbackName=ExponentialHeightFogComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkyAtmosphereComponent -FallbackName=SkyAtmosphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkyLightComponent -FallbackName=SkyLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VolumetricCloudComponent -FallbackName=VolumetricCloudComponent

AR5NAtmosphereLight::AR5NAtmosphereLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InfoModifiedShadowQuality = 0.00f;
    this->InfoSunLightAngle = 0.00f;
    this->InfoMoonLightAngle = 0.00f;
    this->InfoSkyLightIntensity = 1.00f;
    this->InfoMoonPhase = 0.00f;
    this->bShowScreenMessage = false;
    this->bTickInEditor = true;
    this->MinVSMLastLevel = 16;
    this->MaxVSMLastLevel = 22;
    this->SunMinAngleVSMLastLevel = 180.00f;
    this->SunMaxAngleVSMLastLevel = 270.00f;
    this->bDynamicSecondFog = true;
    this->LowSecondFogDensity = 0.03f;
    this->HighSecondFogDensity = 0.03f;
    this->LowSecondFogFalloff = 0.40f;
    this->HighSecondFogFalloff = 0.40f;
    this->LowSecondFogOffset = 0.00f;
    this->HighSecondFogOffset = 8000.00f;
    this->PosMin = 500.00f;
    this->PosMax = 8000.00f;
    this->LightFunction = NULL;
    this->MoonSpriteIntensity = 0.50f;
    this->bUseBlend = true;
    this->BlendSpeed = 1.00f;
    this->bApplyDayCycleColorGrading = true;
    this->bApplyWeatherColorGrading = true;
    this->bApplyBiomeColorGrading = true;
    this->bApplyToneCurve = true;
    this->SunZRotation = 0.00f;
    this->SunXRotation = 36.00f;
    this->OcclusionMaskDarkness = 0.90f;
    this->LightShaftsMin = 0.00f;
    this->LightShaftsBlendHeight = 2.00f;
    this->LightShaftsBlendSpeed = 10.00f;
    this->bUseLongSunsetSunrise = true;
    this->SunsetSunriseElongation = 2.20f;
    this->UnderHorizonDeg = 2.00f;
    this->MoonZRotation = 300.00f;
    this->MoonXRotation = -47.00f;
    this->MoonCycleShift = 210.00f;
    this->MoonPhaseCycle = 7.00f;
    this->LightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("R5SunLightComponent"));
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("R5SkyLightComponent"));
    this->ExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("R5ExponentialHeightFogComponent"));
    this->SkyAtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("R5SkyAtmosphereComponent"));
    this->VolumetricCloudComponent = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("R5VolumetricCloudComponent"));
    this->SkyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("R5SkyMeshComponent"));
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("R5PostProcessComponent"));
    this->NatureMPC = NULL;
}

void AR5NAtmosphereLight::SetCustomLightFunction(UMaterialInstance* MaterialInstance) {
}


