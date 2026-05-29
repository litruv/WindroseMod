#include "RootMotionForwardData.h"

FRootMotionForwardData::FRootMotionForwardData() {
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->BlockingCollisionShift = 0.00f;
    this->AdditionalCollisionRange = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
    this->VelocityOnFinishMode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocityOnFinish = 0.00f;
    this->bEnableGravity = false;
    this->bStopMovementIfBlocked = false;
    this->bUseInitialForward = false;
}

