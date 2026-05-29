#include "R5NatureSettings.h"

UR5NatureSettings::UR5NatureSettings() {
    this->PredefinedNamedDayCycleTimes.AddDefaulted(4);
}

TArray<FName> UR5NatureSettings::GetPredefinedDayCycleTimeNames() {
    return TArray<FName>();
}


