#include "R5NWeatherPreset.h"

UR5NWeatherPreset::UR5NWeatherPreset() {
    this->Probability = 0;
    this->bOverrideDurationTime = false;
    this->LocalWeatherType = ER5NWeatherLocalWeatherType::None;
    this->LocalCircleRadius = 100.00f;
    this->LocalWeatherDistanceToBounds = 0.00f;
    this->PresetDurationTimeMin = 10.00f;
    this->PresetDurationTimeMax = 20.00f;
    this->PresetMinDuration = 10.00f;
    this->DayNightAtmosphereChangingTime = 3.00f;
    this->SkyLuminanceFactor.AddDefaulted(4);
    this->FogInscatteringColor.AddDefaulted(4);
    this->WindSpeedMin = 100.00f;
    this->WindSpeedMax = 1000.00f;
    this->WindDirectionChangeMax = 90.00f;
    this->WindDurationMinSec = 10.00f;
    this->WindDurationMaxSec = 20.00f;
    this->WindChangingTime = 3.00f;
    this->NearCloudCoverage = 0.20f;
    this->FarCloudCoverage = 0.20f;
    this->CloudDensity = 0.20f;
    this->TypeCloud = 1.00f;
    this->SkyCloud = 1.00f;
    this->Storm = 0.00f;
    this->LayerBottomAltitude = 0.50f;
    this->LayerHeight = 10.00f;
    this->TracingStartMaxDistance = 80.00f;
    this->TracingMaxDistance = 200.00f;
    this->CloudSpeed = 1.00f;
    this->CloudChangingTime = 10.00f;
    this->FogDensity = 0.02f;
    this->FogHeightFalloff = 0.20f;
    this->SecondFogDataDensity = 0.02f;
    this->SecondFogDataHeightFalloff = 0.20f;
    this->SecondFogDataHeightOffset = 0.00f;
    this->FogChangingTime = 10.00f;
    this->AtmosphereTransparency = 1.00f;
    this->PostProcessColor = NULL;
    this->PostProcessChangingTime = 10.00f;
    this->Wetness = 0.00f;
    this->SoundEffectIntensity = 0.00f;
    this->ParticlesStartingEndingTime = 10.00f;
    this->WaterMutableSettings = NULL;
}


