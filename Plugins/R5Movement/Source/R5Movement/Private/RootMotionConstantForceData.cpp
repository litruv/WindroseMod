#include "RootMotionConstantForceData.h"

FRootMotionConstantForceData::FRootMotionConstantForceData() {
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
    this->VelocityOnFinishMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocityOnFinish = 0.00f;
    this->bEnableGravity = false;
}

