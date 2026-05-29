#include "R5NPhys_ControlsSimple.h"

UR5NPhys_ControlsSimple::UR5NPhys_ControlsSimple() {
    this->RudderAngleStep = 5.00f;
    this->bGameplayRudder = false;
    this->RudderRotationPerSecond = 15.00f;
    this->RudderFixAngle = 10.00f;
}


