#include "RootMotionSource_Forward.h"

FRootMotionSource_Forward::FRootMotionSource_Forward() {
    this->Strength = 0.00f;
    this->bUseInitialForward = false;
    this->StrengthOverTime = NULL;
    this->BlockingCollisionShiftStart = 0.00f;
    this->BlockingCollisionShiftStop = 0.00f;
    this->bStopMovementIfBlocked = false;
    this->CollisionChannel = ECC_WorldStatic;
}

