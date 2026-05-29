#include "RootMotionRotationData.h"

FRootMotionRotationData::FRootMotionRotationData() {
    this->Duration = 0.00f;
    this->RotationCurve = NULL;
    this->VelocityOnFinishMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocityOnFinish = 0.00f;
    this->bTakeIntoAccountRootOffset = false;
    this->bConfigAngleRotation = false;
    this->bEnableGravity = false;
}

