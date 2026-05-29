#include "R5DataKeeperUi_PlatformConnectHandler.h"

UR5DataKeeperUi_PlatformConnectHandler::UR5DataKeeperUi_PlatformConnectHandler() {
    this->LoadingScreenHolder = NULL;
}

void UR5DataKeeperUi_PlatformConnectHandler::ShowLoadingScreen() const {
}

bool UR5DataKeeperUi_PlatformConnectHandler::ParseServerJoinedConnectionString(const FString& JoinedConnectionString, FString& OutSessionId, bool& OutIsPasswordProtected) const {
    return false;
}

void UR5DataKeeperUi_PlatformConnectHandler::HideLoadingScreen() const {
}

void UR5DataKeeperUi_PlatformConnectHandler::HandleGameJoinRequested(const FString& JoinStr) {
}

FString UR5DataKeeperUi_PlatformConnectHandler::GetCurrentServerJoinedConnectionString() const {
    return TEXT("");
}


