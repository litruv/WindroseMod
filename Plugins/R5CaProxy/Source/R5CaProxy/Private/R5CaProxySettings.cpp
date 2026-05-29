#include "R5CaProxySettings.h"

UR5CaProxySettings::UR5CaProxySettings() {
    this->ClientAuthorizationType = ER5CaProxySettings_ClientAuthorizationType::Steam;
    this->ServerAuthorizationType = ER5CaProxySettings_ServerAuthorizationType::Anonymously;
    this->AppSecretKey = TEXT("5bd154077931d9e79bd1b2b9e4856256dce84a4f6b32aa30e9a1fe7e77ec5fba");
    this->RegionsArray.AddDefaulted(3);
    this->SuccessAttemptsForAvailable = 1;
    this->MaxPingForAvailable = 1200.00f;
}

UR5CaProxySettings* UR5CaProxySettings::GetR5CaProxySettings() {
    return NULL;
}


