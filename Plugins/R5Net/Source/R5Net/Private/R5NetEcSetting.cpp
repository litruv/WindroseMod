#include "R5NetEcSetting.h"

UR5NetEcSetting::UR5NetEcSetting() {
    this->SecondsBetweenSendingEvents = -1;
    this->MaxEventsPerRequest = 100;
    this->MaxEventsPerSession = 10000;
}


