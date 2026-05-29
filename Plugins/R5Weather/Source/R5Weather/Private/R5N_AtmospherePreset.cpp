#include "R5N_AtmospherePreset.h"

UR5N_AtmospherePreset::UR5N_AtmospherePreset() {
    this->Intensity = 2.00f;
    this->LightSourceAngle = 1.00f;
    this->MaterialLightSourceAngle = 1.00f;
    this->RayleighScatteringScale = 0.03f;
    this->RayleighExponentialDistribution = 20.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.00f;
    this->MieExponentialDistribution = 20.00f;
    this->OtherAbsorptionScale = 0.00f;
    this->GradientNight = 0.00f;
    this->MaxExposure = -3.00f;
    this->MinExposure = 1.00f;
    this->Info = TEXT("Params in this section only are apply for day part but setting up in weather preset.");
    this->Temperature = 6500.00f;
    this->MieScatteringScale = 0.00f;
    this->AerialPerspectiveViewDistanceScale = 1.00f;
    this->HeightFogContribution = 1.00f;
    this->CloudPhaseG = 0.95f;
    this->CloudMultiScatteringContribution = 1.00f;
    this->CloudMultiScatteringEccentricity = 0.00f;
    this->SkyLightCloudBottomOcclusion = 0.00f;
    this->ExposureCompensation = 0.00f;
}


