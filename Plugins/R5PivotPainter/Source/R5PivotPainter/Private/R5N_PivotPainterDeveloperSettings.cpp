#include "R5N_PivotPainterDeveloperSettings.h"

UR5N_PivotPainterDeveloperSettings::UR5N_PivotPainterDeveloperSettings() {
    this->EnableCompute = true;
    this->PrevWindDirSinCosParameterName = TEXT("PrevWindDirectionSpeed");
    this->NextWindDirSinCosParameterName = TEXT("NextWindDirectionSpeed");
    this->CurrentWindDirectionParameterName = TEXT("CurrentWindDirection");
    this->WindTurningLerpParameterName = TEXT("WindTurningLerp");
}


