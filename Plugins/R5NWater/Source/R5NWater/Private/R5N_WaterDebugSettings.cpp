#include "R5N_WaterDebugSettings.h"

UR5N_WaterDebugSettings::UR5N_WaterDebugSettings() {
    this->DebugModeType = ER5NWaterDebugModeType::None;
    this->WaterConstantTime = -1.00f;
    this->WaterTimeFactor = 1.00f;
    this->bShowPhysicsSurface = false;
    this->bDrawWater = true;
    this->bIgnoreMutableWaterSettings = false;
    this->bUseDebugWind = false;
    this->bSeparateWind = false;
    this->WindAngleDeg = 0.00f;
    this->WindSpeed = 2.00f;
    this->FarWindAngleDeg = 0.00f;
    this->FarWindSpeed = 2.00f;
}


