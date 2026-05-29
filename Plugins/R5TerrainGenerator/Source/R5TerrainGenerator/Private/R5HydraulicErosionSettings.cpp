#include "R5HydraulicErosionSettings.h"

FR5HydraulicErosionSettings::FR5HydraulicErosionSettings() {
    this->bEnabled = false;
    this->bAffectHeight = false;
    this->NumIterations = 0;
    this->Seed = 0;
    this->ErosionRadius = 0;
    this->MaxDropletLifetime = 0;
    this->Inertia = 0.00f;
    this->SedimentCapacityFactor = 0.00f;
    this->MinSedimentCapacity = 0.00f;
    this->ErodeSpeed = 0.00f;
    this->DepositSpeed = 0.00f;
    this->EvaporateSpeed = 0.00f;
    this->Gravity = 0.00f;
    this->InitialWaterVolume = 0.00f;
    this->InitialSpeed = 0.00f;
}

