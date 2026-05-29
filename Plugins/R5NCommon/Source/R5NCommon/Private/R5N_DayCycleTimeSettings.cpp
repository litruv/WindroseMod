#include "R5N_DayCycleTimeSettings.h"

FR5N_DayCycleTimeSettings::FR5N_DayCycleTimeSettings() {
    this->bDayTimeDynamic = false;
    this->StartDayTime = 0.00f;
    this->DayDurationTime = 0.00f;
    this->NightDurationTime = 0.00f;
    this->PartNightToMidnight = 0.00f;
    this->MorningPartOfDay = 0.00f;
    this->EveningPartOfDay = 0.00f;
}

