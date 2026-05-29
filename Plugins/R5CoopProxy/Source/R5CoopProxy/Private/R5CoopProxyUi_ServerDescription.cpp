#include "R5CoopProxyUi_ServerDescription.h"

FR5CoopProxyUi_ServerDescription::FR5CoopProxyUi_ServerDescription() {
    this->MaxPlayerCount = 0;
    this->IsPasswordProtected = false;
    this->UseForceP2pConnection = false;
    this->UseDirectConnection = false;
    this->DirectConnectionPort = 0;
    this->HostingType = ER5NetCm_HostingType::None;
    this->CurrentPlayerCount = 0;
}

