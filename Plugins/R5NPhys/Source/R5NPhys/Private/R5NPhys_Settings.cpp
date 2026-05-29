#include "R5NPhys_Settings.h"

UR5NPhys_Settings::UR5NPhys_Settings() {
    this->SubtickType = ER5NPhys_SubtickType::SyncedWithTick;
    this->MaxTickTime = 0.10f;
    this->MaxNumOfLongSubticksInARow = 5;
    this->SubtickTime = 0.01f;
    this->MaxAccelerationValue = 1000000000.00f;
    this->MaxRotationAccelerationValue = 100000.00f;
    this->MaxCoordinateDiffPerSubtick = 100000.00f;
    this->MaxCoordinateValue = 10000000.00f;
}


