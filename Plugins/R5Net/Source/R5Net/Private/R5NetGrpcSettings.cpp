#include "R5NetGrpcSettings.h"

UR5NetGrpcSettings::UR5NetGrpcSettings() {
    this->Dev_UseHttpProxy = false;
    this->Dev_HttpProxy = TEXT("http://localhost:8888");
    this->Dev_UseEnvSettings = false;
}

UR5NetGrpcSettings* UR5NetGrpcSettings::Get() {
    return NULL;
}


