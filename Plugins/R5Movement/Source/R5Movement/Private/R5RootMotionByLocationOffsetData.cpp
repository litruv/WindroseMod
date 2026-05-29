#include "R5RootMotionByLocationOffsetData.h"

FR5RootMotionByLocationOffsetData::FR5RootMotionByLocationOffsetData() {
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->LocationOffsetCurve = NULL;
    this->VelocityOnFinishMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocityOnFinish = 0.00f;
    this->bEnableGravity = false;
    this->bUseInitialRotation = false;
    this->Priority = 0;
}

