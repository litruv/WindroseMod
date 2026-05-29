#include "R5RootMotionMoveToTargetBySpline.h"

FR5RootMotionMoveToTargetBySpline::FR5RootMotionMoveToTargetBySpline() {
    this->BaseSpeed = 0.00f;
    this->SpeedMultiplierCurve = NULL;
    this->Duration = 0.00f;
    this->VelocityOnFinishMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocityOnFinish = 0.00f;
}

