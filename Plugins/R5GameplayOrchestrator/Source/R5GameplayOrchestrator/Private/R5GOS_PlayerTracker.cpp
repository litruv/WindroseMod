#include "R5GOS_PlayerTracker.h"

UR5GOS_PlayerTracker::UR5GOS_PlayerTracker() {
    this->HalfActivityInvokerRadius = 15000.00f;
    this->FullActivityInvokerRadius = 5000.00f;
    this->HalfActivityCooldownTime = 60.00f;
    this->FullActivityCooldownTime = 30.00f;
    this->bEnsureInvokerAreaReadiness = true;
    this->InvokerTeleportAreaActivationExtent = 1;
    this->InvokerTeleportDetectionThreshold = 3000.00f;
    this->BlockAffectionExtent = 2;
}


