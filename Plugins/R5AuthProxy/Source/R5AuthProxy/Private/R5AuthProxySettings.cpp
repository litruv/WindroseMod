#include "R5AuthProxySettings.h"

UR5AuthProxySettings::UR5AuthProxySettings() {
    this->AuthServerOnPremiseAddress = TEXT("localhost");
    this->AuthServerOnPremisePort = 7095;
    this->AuthorizationType = ER5BackAuth_AuthServerType::NoAuthServer;
    this->AuthorizationPlatform = ER5BackAuth_AuthorizationPlatform::OTP;
}

UR5AuthProxySettings* UR5AuthProxySettings::GetR5AuthProxySettings() {
    return NULL;
}

TArray<FR5RegionsMapping> UR5AuthProxySettings::GetDefaultRegions() const {
    return TArray<FR5RegionsMapping>();
}


