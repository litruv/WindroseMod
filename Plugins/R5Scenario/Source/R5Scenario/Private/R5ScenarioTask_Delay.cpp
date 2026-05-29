#include "R5ScenarioTask_Delay.h"

UR5ScenarioTask_Delay::UR5ScenarioTask_Delay() {
    this->ShouldHideNodePin = false;
    this->Description = TEXT("Waits for Delay Seconds and continues execution.\n");
    this->CPinNames.AddDefaulted(1);
    this->DelaySeconds = 1.00f;
}


