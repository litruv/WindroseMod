#include "R5NPhysMotorForceParameters.h"

FR5NPhysMotorForceParameters::FR5NPhysMotorForceParameters() {
    this->MotorPowerCurve = NULL;
    this->SlowdownForceMagnitudeCurve = NULL;
    this->MotorPowerSpeedPerSecond = 0.00f;
    this->SlowdownPowerSpeedPerSecond = 0.00f;
}

