#include "R5DataKeeperUi_PlayCoopGame.h"

UR5DataKeeperUi_PlayCoopGame::UR5DataKeeperUi_PlayCoopGame() {
}

void UR5DataKeeperUi_PlayCoopGame::StartHostServerGame(const FR5CoopProxyUi_ServerDescription& ServerDescription) const {
}



FR5CoopProxyUi_ServerDescription UR5DataKeeperUi_PlayCoopGame::GetHostServerDescription() const {
    return FR5CoopProxyUi_ServerDescription{};
}

FR5CoopProxyUi_ServerDescription UR5DataKeeperUi_PlayCoopGame::GetFavoriteServerDescription(const FString& PersistentServerId) {
    return FR5CoopProxyUi_ServerDescription{};
}

FR5CoopProxyUi_ServerDescription UR5DataKeeperUi_PlayCoopGame::GetCurrentCoopServerDescription(const UObject* Wco) {
    return FR5CoopProxyUi_ServerDescription{};
}

void UR5DataKeeperUi_PlayCoopGame::DeleteFavoriteCoopServer(const FString& PersistentServerId) {
}


