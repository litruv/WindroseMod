#include "R5ShipMovementReplicatorParams.h"

UR5ShipMovementReplicatorParams::UR5ShipMovementReplicatorParams() {
    this->TooBigSpeedSquared = 9000000.00f;
    this->TooBigDeltaTime = 2.00f;
    this->TooFarBehindCorrectionTime = 1.00f;
    this->TooCloseToTailDtMultiplier = 0.90f;
    this->TooBigSpeed = 30.00f;
}


