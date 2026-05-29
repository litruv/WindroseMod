#include "R5CoopPingerSettings.h"

FR5CoopPingerSettings::FR5CoopPingerSettings() {
    this->Attempts = 0;
    this->AttemptTimeoutSeconds = 0.00f;
    this->InitTimeoutSeconds = 0.00f;
    this->TimeoutSeconds = 0.00f;
    this->UseGrpcClient = false;
}

