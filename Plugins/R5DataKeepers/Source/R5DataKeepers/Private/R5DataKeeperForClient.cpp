#include "R5DataKeeperForClient.h"

UR5DataKeeperForClient::UR5DataKeeperForClient() {
    this->LocalAccount = NULL;
    this->LoadingScreenHolder = NULL;
}

void UR5DataKeeperForClient::StartLobby() {
}

void UR5DataKeeperForClient::OnUeNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> ErrorType, const FString& ErrorMessage) {
}

UR5DataKeeperForClient_LocalAccount* UR5DataKeeperForClient::GetLocalAccount() const {
    return NULL;
}

ER5DataKeeperUI_BackendType UR5DataKeeperForClient::GetBackendType() const {
    return ER5DataKeeperUI_BackendType::Gaas;
}


