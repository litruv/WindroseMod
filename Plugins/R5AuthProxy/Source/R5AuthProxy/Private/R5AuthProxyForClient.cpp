#include "R5AuthProxyForClient.h"

UR5AuthProxyForClient::UR5AuthProxyForClient() {
    this->AuthHttpClient = NULL;
    this->K8sHttpClient = NULL;
}

bool UR5AuthProxyForClient::IsLoggedIn() const {
    return false;
}

FString UR5AuthProxyForClient::GetOtp() const {
    return TEXT("");
}

FString UR5AuthProxyForClient::GetEmail() const {
    return TEXT("");
}

FR5BLRecordId UR5AuthProxyForClient::GetAccountId() const {
    return FR5BLRecordId{};
}


