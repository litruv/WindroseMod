#include "R5N_PPSettings.h"

UR5N_PPSettings::UR5N_PPSettings() {
    this->BloomIntensity = 0.50f;
    this->BloomThreshold = 0.00f;
    this->BloomDirtMaskIntensity = 8.00f;
    this->AutoExposureMethod = AEM_Histogram;
    this->LocalExposureHighlightContrastScale = 1.00f;
    this->LocalExposureShadowContrastScale = 0.70f;
    this->LocalExposureDetailStrength = 1.15f;
    this->AutoExposureLowPercent = 80.00f;
    this->AutoExposureHighPercent = 90.00f;
    this->AutoExposureMinBrightness = -10.00f;
    this->AutoExposureMaxBrightness = -4.56f;
    this->AutoExposureSpeedUp = 4.00f;
    this->AutoExposureSpeedDown = 2.00f;
    this->HistogramLogMin = -16.00f;
    this->HistogramLogMax = 20.00f;
    this->ToneCurveAmount = 1.00f;
    this->FilmSlope = 0.80f;
    this->FilmToe = 0.50f;
    this->LensFlareIntensity = 0.03f;
    this->LensFlareBokehSize = 6.00f;
    this->LensFlareThreshold = 800.00f;
    this->SceneFringeIntensity = 0.08f;
    this->VignetteIntensity = 0.40f;
    this->Sharpen = 0.65f;
    this->ScreenSpaceReflectionQuality = 0.25f;
    this->bRayTracingAO = false;
    this->AmbientOcclusionIntensity = 0.90f;
    this->AmbientOcclusionRadius = 300.00f;
    this->AmbientOcclusionPower = 3.00f;
}


