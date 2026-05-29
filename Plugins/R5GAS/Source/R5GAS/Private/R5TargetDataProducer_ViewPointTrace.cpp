#include "R5TargetDataProducer_ViewPointTrace.h"

UR5TargetDataProducer_ViewPointTrace::UR5TargetDataProducer_ViewPointTrace() {
    this->TraceDistance = 500.00f;
    this->bIncreaseTraceDistanceByDistanceToAvatar = true;
    this->bIgnoreAvatarInTrace = true;
}


