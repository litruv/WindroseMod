#include "R5NPhysSailForceParameters.h"

FR5NPhysSailForceParameters::FR5NPhysSailForceParameters() {
    this->CheckMediumBorder = false;
    this->MaxForwardForce = 0.00f;
    this->MaxBackwardForce = 0.00f;
    this->MaxTransverseForce = 0.00f;
    this->MaxVerticalForce = 0.00f;
    this->MotorPowerToSailCurve = NULL;
}

